/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2022 Corigine, Inc.
 * All rights reserved.
 */

#ifndef _NFP_CMSG_H_
#define _NFP_CMSG_H_

#include <rte_byteorder.h>
#include <rte_ether.h>

struct nfp_flower_cmsg_hdr {
	rte_be16_t pad;
	uint8_t type;
	uint8_t version;
};

/* Types defined for control messages */
enum nfp_flower_cmsg_type {
	NFP_FLOWER_CMSG_TYPE_FLOW_ADD       = 0,
	NFP_FLOWER_CMSG_TYPE_FLOW_MOD       = 1,
	NFP_FLOWER_CMSG_TYPE_FLOW_DEL       = 2,
	NFP_FLOWER_CMSG_TYPE_LAG_CONFIG     = 4,
	NFP_FLOWER_CMSG_TYPE_PORT_REIFY     = 6,
	NFP_FLOWER_CMSG_TYPE_MAC_REPR       = 7,
	NFP_FLOWER_CMSG_TYPE_PORT_MOD       = 8,
	NFP_FLOWER_CMSG_TYPE_MERGE_HINT     = 9,
	NFP_FLOWER_CMSG_TYPE_NO_NEIGH       = 10,
	NFP_FLOWER_CMSG_TYPE_TUN_MAC        = 11,
	NFP_FLOWER_CMSG_TYPE_ACTIVE_TUNS    = 12,
	NFP_FLOWER_CMSG_TYPE_TUN_NEIGH      = 13,
	NFP_FLOWER_CMSG_TYPE_TUN_IPS        = 14,
	NFP_FLOWER_CMSG_TYPE_FLOW_STATS     = 15,
	NFP_FLOWER_CMSG_TYPE_PORT_ECHO      = 16,
	NFP_FLOWER_CMSG_TYPE_QOS_MOD        = 18,
	NFP_FLOWER_CMSG_TYPE_QOS_DEL        = 19,
	NFP_FLOWER_CMSG_TYPE_QOS_STATS      = 20,
	NFP_FLOWER_CMSG_TYPE_PRE_TUN_RULE   = 21,
	NFP_FLOWER_CMSG_TYPE_TUN_IPS_V6     = 22,
	NFP_FLOWER_CMSG_TYPE_NO_NEIGH_V6    = 23,
	NFP_FLOWER_CMSG_TYPE_TUN_NEIGH_V6   = 24,
	NFP_FLOWER_CMSG_TYPE_ACTIVE_TUNS_V6 = 25,
	NFP_FLOWER_CMSG_TYPE_MAX            = 32,
};

/*
 * NFP_FLOWER_CMSG_TYPE_MAC_REPR
 *    Bit    3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 0 0
 *    -----\ 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
 *     Word +---------------+-----------+---+---------------+---------------+
 *       0  |                  spare                        |Number of ports|
 *          +---------------+-----------+---+---------------+---------------+
 *       1  |    Index      |   spare   |NBI|  Port on NBI  | Chip-wide port|
 *          +---------------+-----------+---+---------------+---------------+
 *                                        ....
 *          +---------------+-----------+---+---------------+---------------+
 *     N-1  |    Index      |   spare   |NBI|  Port on NBI  | Chip-wide port|
 *          +---------------+-----------+---+---------------+---------------+
 *     N    |    Index      |   spare   |NBI|  Port on NBI  | Chip-wide port|
 *          +---------------+-----------+---+---------------+---------------+
 *
 *          Index: index into the eth table
 *          NBI (bits 17-16): NBI number (0-3)
 *          Port on NBI (bits 15-8): “base” in the driver
 *            this forms NBIX.PortY notation as the NSP eth table.
 *          "Chip-wide" port (bits 7-0):
 */
struct nfp_flower_cmsg_mac_repr {
	uint8_t reserved[3];
	uint8_t num_ports;
	struct {
		uint8_t idx;
		uint8_t info;
		uint8_t nbi_port;
		uint8_t phys_port;
	} ports[0];
};

/*
 * NFP_FLOWER_CMSG_TYPE_PORT_REIFY
 *    Bit    3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 0 0
 *    -----\ 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
 *    Word  +-------+-------+---+---+-------+---+---+-----------+-----------+
 *       0  |Port Ty|Sys ID |NIC|Rsv| Spare |PCI|typ|    vNIC   |  queue    |
 *          +-------+-----+-+---+---+-------+---+---+-----------+---------+-+
 *       1  |                             Spare                           |E|
 *          +-------------------------------------------------------------+-+
 *          E: 1 = Representor exists, 0 = Representor does not exist
 */
struct nfp_flower_cmsg_port_reify {
	rte_be32_t portnum;
	rte_be16_t reserved;
	rte_be16_t info;
};

/*
 * NFP_FLOWER_CMSG_TYPE_PORT_MOD
 *    Bit    3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 0 0
 *    -----\ 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
 *    Word  +-------+-------+---+---+-------+---+---+-------+---+-----------+
 *       0  |Port Ty|Sys ID |NIC|Rsv|       Reserved        |    Port       |
 *          +-------+-------+---+---+-----+-+---+---+-------+---+-----------+
 *       1  |            Spare            |L|              MTU              |
 *          +-----------------------------+-+-------------------------------+
 *        L: Link or Admin state bit. When message is generated by host, this
 *           bit indicates the admin state (0=down, 1=up). When generated by
 *           NFP, it indicates the link state (0=down, 1=up)
 *
 *        Port Type (word 1, bits 31 to 28) = 1 (Physical Network)
 *        Port: “Chip-wide number” as assigned by BSP
 *
 *    Bit    3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 0 0
 *    -----\ 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
 *    Word  +-------+-------+---+---+-------+---+---+-------+---+-----------+
 *       0  |Port Ty|Sys ID |NIC|Rsv| Spare |PCI|typ|    vNIC   |  queue    |
 *          +-------+-----+-+---+---+---+-+-+---+---+-------+---+-----------+
 *       1  |            Spare            |L|              MTU              |
 *          +-----------------------------+-+-------------------------------+
 *        L: Link or Admin state bit. When message is generated by host, this
 *           bit indicates the admin state (0=down, 1=up). When generated by
 *           NFP, it indicates the link state (0=down, 1=up)
 *
 *        Port Type (word 1, bits 31 to 28) = 2 (PCIE)
 */
struct nfp_flower_cmsg_port_mod {
	rte_be32_t portnum;
	uint8_t reserved;
	uint8_t info;
	rte_be16_t mtu;
};

/*
 * NFP_FLOWER_CMSG_TYPE_FLOW_STATS
 *    Bit    3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 0 0
 *    -----\ 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
 *    Word  +---------------+-----------------------------------------------+
 *       0  |    Reserved   |               Host Context                    |
 *          +---------------+-----------------------------------------------+
 *       1  |                          Packet Count                         |
 *          +---------------------------------------------------------------+
 *       2  |                          Byte Count                           |
 *          +---------------------------------------------------------------+
 *       2  |                          Byte Count                           |
 *          +---------------------------------------------------------------+
 *       3  |                          Host Cookie                          |
 *          +---------------------------------------------------------------+
 *       4  |                          Host Cookie                          |
 *          +---------------------------------------------------------------+
 */
struct nfp_flower_stats_frame {
	rte_be32_t stats_con_id;
	rte_be32_t pkt_count;
	rte_be64_t byte_count;
	rte_be64_t stats_cookie;
};

enum nfp_flower_cmsg_port_type {
	NFP_FLOWER_CMSG_PORT_TYPE_UNSPEC,
	NFP_FLOWER_CMSG_PORT_TYPE_PHYS_PORT,
	NFP_FLOWER_CMSG_PORT_TYPE_PCIE_PORT,
	NFP_FLOWER_CMSG_PORT_TYPE_OTHER_PORT,
};

enum nfp_flower_cmsg_port_vnic_type {
	NFP_FLOWER_CMSG_PORT_VNIC_TYPE_VF,
	NFP_FLOWER_CMSG_PORT_VNIC_TYPE_PF,
	NFP_FLOWER_CMSG_PORT_VNIC_TYPE_CTRL,
};

#define NFP_FLOWER_CMSG_MAC_REPR_NBI            (0x3)

#define NFP_FLOWER_CMSG_HLEN            sizeof(struct nfp_flower_cmsg_hdr)
#define NFP_FLOWER_CMSG_VER1            1
#define NFP_NET_META_PORTID             5
#define NFP_META_PORT_ID_CTRL           ~0U

#define NFP_FLOWER_CMSG_PORT_TYPE(x)            (((x) >> 28) & 0xf)  /* [31,28] */
#define NFP_FLOWER_CMSG_PORT_SYS_ID(x)          (((x) >> 24) & 0xf)  /* [24,27] */
#define NFP_FLOWER_CMSG_PORT_NFP_ID(x)          (((x) >> 22) & 0x3)  /* [22,23] */
#define NFP_FLOWER_CMSG_PORT_PCI(x)             (((x) >> 14) & 0x3)  /* [14,15] */
#define NFP_FLOWER_CMSG_PORT_VNIC_TYPE(x)       (((x) >> 12) & 0x3)  /* [12,13] */
#define NFP_FLOWER_CMSG_PORT_VNIC(x)            (((x) >> 6) & 0x3f)  /* [6,11] */
#define NFP_FLOWER_CMSG_PORT_PCIE_Q(x)          ((x) & 0x3f)         /* [0,5] */
#define NFP_FLOWER_CMSG_PORT_PHYS_PORT_NUM(x)   ((x) & 0xff)         /* [0,7] */

static inline char*
nfp_flower_cmsg_get_data(struct rte_mbuf *m)
{
	return rte_pktmbuf_mtod(m, char *) + 4 + 4 + NFP_FLOWER_CMSG_HLEN;
}

/*
 * Metadata with L2 (1W/4B)
 * ----------------------------------------------------------------
 *    3                   2                   1
 *  1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * |    key_type   |    mask_id    | PCP |p|   vlan outermost VID  |
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *                                 ^                               ^
 *                           NOTE: |             TCI               |
 *                                 +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 */
struct nfp_flower_meta_tci {
	uint8_t nfp_flow_key_layer;
	uint8_t mask_id;
	rte_be16_t tci;
};

/*
 * Extended metadata for additional key_layers (1W/4B)
 * ----------------------------------------------------------------
 *    3                   2                   1
 *  1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * |                      nfp_flow_key_layer2                      |
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 */
struct nfp_flower_ext_meta {
	rte_be32_t nfp_flow_key_layer2;
};

/*
 * L1 Port details (1W/4B)
 * ----------------------------------------------------------------
 *    3                   2                   1
 *  1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * |                         port_ingress                          |
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 */
struct nfp_flower_in_port {
	rte_be32_t in_port;
};

int nfp_flower_cmsg_mac_repr(struct nfp_app_fw_flower *app_fw_flower);
int nfp_flower_cmsg_repr_reify(struct nfp_app_fw_flower *app_fw_flower,
		struct nfp_flower_representor *repr);
int nfp_flower_cmsg_port_mod(struct nfp_app_fw_flower *app_fw_flower,
		uint32_t port_id, bool carrier_ok);
int nfp_flower_cmsg_flow_delete(struct nfp_app_fw_flower *app_fw_flower,
		struct rte_flow *flow);
int nfp_flower_cmsg_flow_add(struct nfp_app_fw_flower *app_fw_flower,
		struct rte_flow *flow);

#endif /* _NFP_CMSG_H_ */
