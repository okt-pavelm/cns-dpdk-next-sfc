/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2014-2021 Broadcom
 * All rights reserved.
 */

/* date: Fri Jul 30 09:57:44 2021 */

#include "ulp_template_db_enum.h"
#include "ulp_template_db_field.h"
#include "ulp_template_struct.h"
#include "ulp_template_db_tbl.h"

/* Mapper templates for header class list */
struct bnxt_ulp_mapper_tmpl_info ulp_thor_class_tmpl_list[] = {
	/* class_tid: 1, ingress */
	[1] = {
	.device_name = BNXT_ULP_DEVICE_ID_THOR,
	.num_tbls = 28,
	.start_tbl_idx = 0,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 0,
		.cond_nums = 1 }
	},
	/* class_tid: 2, ingress */
	[2] = {
	.device_name = BNXT_ULP_DEVICE_ID_THOR,
	.num_tbls = 17,
	.start_tbl_idx = 28,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_FALSE,
		.cond_start_idx = 29,
		.cond_nums = 0 }
	},
	/* class_tid: 3, egress */
	[3] = {
	.device_name = BNXT_ULP_DEVICE_ID_THOR,
	.num_tbls = 24,
	.start_tbl_idx = 45,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_FALSE,
		.cond_start_idx = 36,
		.cond_nums = 0 }
	},
	/* class_tid: 4, ingress */
	[4] = {
	.device_name = BNXT_ULP_DEVICE_ID_THOR,
	.num_tbls = 21,
	.start_tbl_idx = 69,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_FALSE,
		.cond_start_idx = 48,
		.cond_nums = 0 }
	},
	/* class_tid: 5, egress */
	[5] = {
	.device_name = BNXT_ULP_DEVICE_ID_THOR,
	.num_tbls = 24,
	.start_tbl_idx = 90,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_FALSE,
		.cond_start_idx = 52,
		.cond_nums = 0 }
	}
};

struct bnxt_ulp_mapper_tbl_info ulp_thor_class_tbl_list[] = {
	{ /* class_tid: 1, , table: port_table.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PORT_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 1,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.key_start_idx = 0,
	.blob_key_bit_size = 10,
	.key_bit_size = 10,
	.key_num_fields = 1,
	.ident_start_idx = 0,
	.ident_nums = 3
	},
	{ /* class_tid: 1, , table: l2_cntxt_tcam_cache.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 5,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 1,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 1,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.ident_start_idx = 3,
	.ident_nums = 1
	},
	{ /* class_tid: 1, , table: mac_addr_cache.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_MAC_ADDR_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 2,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 2,
	.blob_key_bit_size = 73,
	.key_bit_size = 73,
	.key_num_fields = 5,
	.ident_start_idx = 4,
	.ident_nums = 1
	},
	{ /* class_tid: 1, , table: control.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 3,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 2,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 1, , table: l2_cntxt_tcam.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 3,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 7,
	.blob_key_bit_size = 213,
	.key_bit_size = 213,
	.key_num_fields = 21,
	.result_start_idx = 0,
	.result_bit_size = 43,
	.result_num_fields = 6,
	.ident_start_idx = 5,
	.ident_nums = 1
	},
	{ /* class_tid: 1, , table: mac_addr_cache.wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_MAC_ADDR_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 3,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 28,
	.blob_key_bit_size = 73,
	.key_bit_size = 73,
	.key_num_fields = 5,
	.result_start_idx = 6,
	.result_bit_size = 62,
	.result_num_fields = 4
	},
	{ /* class_tid: 1, , table: control.ipv6_check */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 8,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 3,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* class_tid: 1, , table: profile_tcam_cache.ipv6_rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1023,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 4,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 33,
	.blob_key_bit_size = 14,
	.key_bit_size = 14,
	.key_num_fields = 3,
	.ident_start_idx = 6,
	.ident_nums = 4
	},
	{ /* class_tid: 1, , table: control.ipv6_prof_cache_check */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 2,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 5,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 1, , table: control.v6_conflict_check */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 4,
		.cond_false_goto = 1023,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 6,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_EQ,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_FLOW_SIG_ID,
		.func_src2 = BNXT_ULP_FUNC_SRC_COMP_FIELD,
		.func_opr2 = BNXT_ULP_CF_IDX_FLOW_SIG_ID,
		.func_dst_opr = BNXT_ULP_RF_IDX_CC }
	},
	{ /* class_tid: 1, , table: fkb_select.l2_l3_l4_v6_em */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_EM_FKB,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 7,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_EM_KEY_ID_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.result_start_idx = 10,
	.result_bit_size = 106,
	.result_num_fields = 106
	},
	{ /* class_tid: 1, , table: profile_tcam.l2_l3_l4_v6_em */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1023,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 7,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 36,
	.blob_key_bit_size = 94,
	.key_bit_size = 94,
	.key_num_fields = 43,
	.result_start_idx = 116,
	.result_bit_size = 33,
	.result_num_fields = 8,
	.ident_start_idx = 10,
	.ident_nums = 1
	},
	{ /* class_tid: 1, , table: profile_tcam_cache.l2_l3_l4_v6_wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 8,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 79,
	.blob_key_bit_size = 14,
	.key_bit_size = 14,
	.key_num_fields = 3,
	.result_start_idx = 124,
	.result_bit_size = 138,
	.result_num_fields = 7
	},
	{ /* class_tid: 1, , table: em.l2_l3_l4_v6.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 8,
		.cond_nums = 0 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 82,
	.blob_key_bit_size = 0,
	.key_bit_size = 0,
	.key_num_fields = 114,
	.result_start_idx = 131,
	.result_bit_size = 0,
	.result_num_fields = 6
	},
	{ /* class_tid: 1, , table: profile_tcam_cache.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 8,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 196,
	.blob_key_bit_size = 14,
	.key_bit_size = 14,
	.key_num_fields = 3,
	.ident_start_idx = 11,
	.ident_nums = 2
	},
	{ /* class_tid: 1, , table: control.gen_tbl_miss */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 6,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 8,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 1, , table: fkb_select.l3_l4_wm */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_WC_FKB,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 9,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_WR_GLB_REGFILE,
	.tbl_operand = BNXT_ULP_GLB_RF_IDX_GLB_WC_KEY_ID_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.result_start_idx = 137,
	.result_bit_size = 106,
	.result_num_fields = 106
	},
	{ /* class_tid: 1, , table: fkb_select.l3_l4_wm_vxlan */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_WC_FKB,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 10,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_WR_GLB_REGFILE,
	.tbl_operand = BNXT_ULP_GLB_RF_IDX_GLB_WC_KEY_ID_2,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.result_start_idx = 243,
	.result_bit_size = 106,
	.result_num_fields = 106
	},
	{ /* class_tid: 1, , table: profile_tcam.l3_l4.ip */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 2,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 11,
		.cond_nums = 2 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 199,
	.blob_key_bit_size = 94,
	.key_bit_size = 94,
	.key_num_fields = 43,
	.result_start_idx = 349,
	.result_bit_size = 33,
	.result_num_fields = 8,
	.ident_start_idx = 13,
	.ident_nums = 0
	},
	{ /* class_tid: 1, , table: profile_tcam.l3_l4.vxlan */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 13,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 242,
	.blob_key_bit_size = 94,
	.key_bit_size = 94,
	.key_num_fields = 43,
	.result_start_idx = 357,
	.result_bit_size = 33,
	.result_num_fields = 8,
	.ident_start_idx = 13,
	.ident_nums = 0
	},
	{ /* class_tid: 1, , table: profile_tcam_cache.wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 14,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 285,
	.blob_key_bit_size = 14,
	.key_bit_size = 14,
	.key_num_fields = 3,
	.result_start_idx = 365,
	.result_bit_size = 138,
	.result_num_fields = 7
	},
	{ /* class_tid: 1, , table: wm.l3_l4.ipv4 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_WC_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 14,
		.cond_nums = 3 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_WC_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 288,
	.blob_key_bit_size = 0,
	.key_bit_size = 0,
	.key_num_fields = 114,
	.result_start_idx = 372,
	.result_bit_size = 38,
	.result_num_fields = 5
	},
	{ /* class_tid: 1, , table: wm.l3_l4.ipv6 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_WC_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 17,
		.cond_nums = 3 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_WC_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 402,
	.blob_key_bit_size = 0,
	.key_bit_size = 0,
	.key_num_fields = 114,
	.result_start_idx = 377,
	.result_bit_size = 38,
	.result_num_fields = 5
	},
	{ /* class_tid: 1, , table: wm.l3.ipv4 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_WC_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 20,
		.cond_nums = 2 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_WC_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 516,
	.blob_key_bit_size = 0,
	.key_bit_size = 0,
	.key_num_fields = 114,
	.result_start_idx = 382,
	.result_bit_size = 38,
	.result_num_fields = 5
	},
	{ /* class_tid: 1, , table: wm.l3.ipv6 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_WC_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 22,
		.cond_nums = 2 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_WC_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 630,
	.blob_key_bit_size = 0,
	.key_bit_size = 0,
	.key_num_fields = 114,
	.result_start_idx = 387,
	.result_bit_size = 38,
	.result_num_fields = 5
	},
	{ /* class_tid: 1, , table: wm.l2 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_WC_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 24,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_WC_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 744,
	.blob_key_bit_size = 0,
	.key_bit_size = 0,
	.key_num_fields = 114,
	.result_start_idx = 392,
	.result_bit_size = 38,
	.result_num_fields = 5
	},
	{ /* class_tid: 1, , table: wm.l3_l4.vxlan.ipv4 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_WC_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 25,
		.cond_nums = 2 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_WC_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 858,
	.blob_key_bit_size = 0,
	.key_bit_size = 0,
	.key_num_fields = 114,
	.result_start_idx = 397,
	.result_bit_size = 38,
	.result_num_fields = 5
	},
	{ /* class_tid: 1, , table: wm.l3_l4.vxlan.ipv6 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_WC_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1023,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 27,
		.cond_nums = 2 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_WC_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 972,
	.blob_key_bit_size = 0,
	.key_bit_size = 0,
	.key_num_fields = 114,
	.result_start_idx = 402,
	.result_bit_size = 38,
	.result_num_fields = 5
	},
	{ /* class_tid: 2, , table: port_table.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PORT_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 29,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.key_start_idx = 1086,
	.blob_key_bit_size = 10,
	.key_bit_size = 10,
	.key_num_fields = 1,
	.ident_start_idx = 13,
	.ident_nums = 3
	},
	{ /* class_tid: 2, , table: tunnel_cache.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_TUNNEL_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 29,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 1087,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 2,
	.ident_start_idx = 16,
	.ident_nums = 1
	},
	{ /* class_tid: 2, , table: control.tunnel_cache_check */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 3,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 29,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 2, , table: l2_cntxt_tcam.1 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 30,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_IDENT,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1089,
	.blob_key_bit_size = 213,
	.key_bit_size = 213,
	.key_num_fields = 21,
	.result_start_idx = 407,
	.result_bit_size = 43,
	.result_num_fields = 6,
	.ident_start_idx = 17,
	.ident_nums = 1
	},
	{ /* class_tid: 2, , table: tunnel_cache.wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_TUNNEL_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 30,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 1110,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 2,
	.result_start_idx = 413,
	.result_bit_size = 52,
	.result_num_fields = 3
	},
	{ /* class_tid: 2, , table: control.flow_type_check */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 5,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 30,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* class_tid: 2, , table: mac_addr_cache.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_MAC_ADDR_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 31,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 1112,
	.blob_key_bit_size = 73,
	.key_bit_size = 73,
	.key_num_fields = 5,
	.ident_start_idx = 18,
	.ident_nums = 1
	},
	{ /* class_tid: 2, , table: control.mac_addr_cache_check */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 31,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 2, , table: l2_cntxt_tcam.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 32,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1117,
	.blob_key_bit_size = 213,
	.key_bit_size = 213,
	.key_num_fields = 21,
	.result_start_idx = 416,
	.result_bit_size = 43,
	.result_num_fields = 6,
	.ident_start_idx = 19,
	.ident_nums = 0
	},
	{ /* class_tid: 2, , table: mac_addr_cache.wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_MAC_ADDR_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 32,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 1138,
	.blob_key_bit_size = 73,
	.key_bit_size = 73,
	.key_num_fields = 5,
	.result_start_idx = 422,
	.result_bit_size = 62,
	.result_num_fields = 4
	},
	{ /* class_tid: 2, , table: profile_tcam_cache.f2_rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 32,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 1143,
	.blob_key_bit_size = 14,
	.key_bit_size = 14,
	.key_num_fields = 3,
	.ident_start_idx = 19,
	.ident_nums = 3
	},
	{ /* class_tid: 2, , table: control.profile_tcam_cache.f2_check */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 4,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 32,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 2, , table: fkb_select.f2_wm */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_WC_FKB,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 33,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_WR_GLB_REGFILE,
	.tbl_operand = BNXT_ULP_GLB_RF_IDX_GLB_WC_KEY_ID_4,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.result_start_idx = 426,
	.result_bit_size = 106,
	.result_num_fields = 106
	},
	{ /* class_tid: 2, , table: profile_tcam.f2 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 34,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 1,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 1146,
	.blob_key_bit_size = 94,
	.key_bit_size = 94,
	.key_num_fields = 43,
	.result_start_idx = 532,
	.result_bit_size = 33,
	.result_num_fields = 8
	},
	{ /* class_tid: 2, , table: profile_tcam_cache.f2_wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 34,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 1189,
	.blob_key_bit_size = 14,
	.key_bit_size = 14,
	.key_num_fields = 3,
	.result_start_idx = 540,
	.result_bit_size = 138,
	.result_num_fields = 7
	},
	{ /* class_tid: 2, , table: wm.l3_l4.ipv4 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_WC_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 34,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_WC_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 1192,
	.blob_key_bit_size = 0,
	.key_bit_size = 0,
	.key_num_fields = 114,
	.result_start_idx = 547,
	.result_bit_size = 38,
	.result_num_fields = 5
	},
	{ /* class_tid: 2, , table: wm.l3_l4.ipv6 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_WC_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 35,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_WC_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 1306,
	.blob_key_bit_size = 0,
	.key_bit_size = 0,
	.key_num_fields = 114,
	.result_start_idx = 552,
	.result_bit_size = 38,
	.result_num_fields = 5
	},
	{ /* class_tid: 3, , table: l2_cntxt_tcam_cache.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 6,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 36,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 1420,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.ident_start_idx = 22,
	.ident_nums = 1
	},
	{ /* class_tid: 3, , table: mac_addr_cache.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_MAC_ADDR_CACHE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 37,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 1421,
	.blob_key_bit_size = 73,
	.key_bit_size = 73,
	.key_num_fields = 5,
	.ident_start_idx = 23,
	.ident_nums = 1
	},
	{ /* class_tid: 3, , table: control.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 4,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 37,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 3, , table: port_table.egr.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PORT_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 38,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.key_start_idx = 1426,
	.blob_key_bit_size = 10,
	.key_bit_size = 10,
	.key_num_fields = 1,
	.ident_start_idx = 24,
	.ident_nums = 3
	},
	{ /* class_tid: 3, , table: l2_cntxt_tcam.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 38,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1427,
	.blob_key_bit_size = 213,
	.key_bit_size = 213,
	.key_num_fields = 21,
	.result_start_idx = 557,
	.result_bit_size = 43,
	.result_num_fields = 6,
	.ident_start_idx = 27,
	.ident_nums = 1
	},
	{ /* class_tid: 3, , table: mac_addr_cache.wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_MAC_ADDR_CACHE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 38,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 1448,
	.blob_key_bit_size = 73,
	.key_bit_size = 73,
	.key_num_fields = 5,
	.result_start_idx = 563,
	.result_bit_size = 62,
	.result_num_fields = 4
	},
	{ /* class_tid: 3, , table: control.ipv6_check */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 8,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 38,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* class_tid: 3, , table: profile_tcam_cache.ipv6_rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1023,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 39,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 1453,
	.blob_key_bit_size = 14,
	.key_bit_size = 14,
	.key_num_fields = 3,
	.ident_start_idx = 28,
	.ident_nums = 4
	},
	{ /* class_tid: 3, , table: control.ipv6_prof_cache_check */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 2,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 40,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 3, , table: control.v6_conflict_check */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 4,
		.cond_false_goto = 1023,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 41,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_EQ,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_FLOW_SIG_ID,
		.func_src2 = BNXT_ULP_FUNC_SRC_COMP_FIELD,
		.func_opr2 = BNXT_ULP_CF_IDX_FLOW_SIG_ID,
		.func_dst_opr = BNXT_ULP_RF_IDX_CC }
	},
	{ /* class_tid: 3, , table: fkb_select.l2_l3_l4_v6_em */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_EM_FKB,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 42,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_EM_KEY_ID_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.result_start_idx = 567,
	.result_bit_size = 106,
	.result_num_fields = 106
	},
	{ /* class_tid: 3, , table: profile_tcam.l2_l3_l4_v6_em */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 42,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 1456,
	.blob_key_bit_size = 94,
	.key_bit_size = 94,
	.key_num_fields = 43,
	.result_start_idx = 673,
	.result_bit_size = 33,
	.result_num_fields = 8,
	.ident_start_idx = 32,
	.ident_nums = 1
	},
	{ /* class_tid: 3, , table: profile_tcam_cache.l2_l3_l4_v6_wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 42,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 1499,
	.blob_key_bit_size = 14,
	.key_bit_size = 14,
	.key_num_fields = 3,
	.result_start_idx = 681,
	.result_bit_size = 138,
	.result_num_fields = 7
	},
	{ /* class_tid: 3, , table: em.l2_l3_l4_v6.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 42,
		.cond_nums = 0 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 1502,
	.blob_key_bit_size = 0,
	.key_bit_size = 0,
	.key_num_fields = 114,
	.result_start_idx = 688,
	.result_bit_size = 0,
	.result_num_fields = 6
	},
	{ /* class_tid: 3, , table: profile_tcam_cache.rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 42,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 1616,
	.blob_key_bit_size = 14,
	.key_bit_size = 14,
	.key_num_fields = 3,
	.ident_start_idx = 33,
	.ident_nums = 2
	},
	{ /* class_tid: 3, , table: control.gen_tbl_miss */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 2,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 42,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 3, , table: control.conflict_check */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 5,
		.cond_false_goto = 1023,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 43,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_EQ,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_FLOW_SIG_ID,
		.func_src2 = BNXT_ULP_FUNC_SRC_COMP_FIELD,
		.func_opr2 = BNXT_ULP_CF_IDX_FLOW_SIG_ID,
		.func_dst_opr = BNXT_ULP_RF_IDX_CC }
	},
	{ /* class_tid: 3, , table: fkb_select.l3_l4_wc */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_WC_FKB,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 44,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_WR_GLB_REGFILE,
	.tbl_operand = BNXT_ULP_GLB_RF_IDX_GLB_WC_KEY_ID_1,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.result_start_idx = 694,
	.result_bit_size = 106,
	.result_num_fields = 106
	},
	{ /* class_tid: 3, , table: profile_tcam.l3_l4.ip */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 2,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 44,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 1619,
	.blob_key_bit_size = 94,
	.key_bit_size = 94,
	.key_num_fields = 43,
	.result_start_idx = 800,
	.result_bit_size = 33,
	.result_num_fields = 8,
	.ident_start_idx = 35,
	.ident_nums = 0
	},
	{ /* class_tid: 3, , table: profile_tcam.l3_l4.nonip */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 45,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 1662,
	.blob_key_bit_size = 94,
	.key_bit_size = 94,
	.key_num_fields = 43,
	.result_start_idx = 808,
	.result_bit_size = 33,
	.result_num_fields = 8,
	.ident_start_idx = 35,
	.ident_nums = 0
	},
	{ /* class_tid: 3, , table: profile_tcam_cache.wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 45,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 1705,
	.blob_key_bit_size = 14,
	.key_bit_size = 14,
	.key_num_fields = 3,
	.result_start_idx = 816,
	.result_bit_size = 138,
	.result_num_fields = 7
	},
	{ /* class_tid: 3, , table: wm.l3_l4.ipv4 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_WC_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 45,
		.cond_nums = 2 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_WC_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 1708,
	.blob_key_bit_size = 0,
	.key_bit_size = 0,
	.key_num_fields = 114,
	.result_start_idx = 823,
	.result_bit_size = 38,
	.result_num_fields = 5
	},
	{ /* class_tid: 3, , table: wm.l3.ipv4 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_WC_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 47,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_WC_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 1822,
	.blob_key_bit_size = 0,
	.key_bit_size = 0,
	.key_num_fields = 114,
	.result_start_idx = 828,
	.result_bit_size = 38,
	.result_num_fields = 5
	},
	{ /* class_tid: 3, , table: wm.l2 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_WC_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 48,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_WC_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 1936,
	.blob_key_bit_size = 0,
	.key_bit_size = 0,
	.key_num_fields = 114,
	.result_start_idx = 833,
	.result_bit_size = 38,
	.result_num_fields = 5
	},
	{ /* class_tid: 4, , table: int_full_act_record.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 48,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 838,
	.result_bit_size = 128,
	.result_num_fields = 17
	},
	{ /* class_tid: 4, , table: port_table.ing_wr_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PORT_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 48,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 2050,
	.blob_key_bit_size = 10,
	.key_bit_size = 10,
	.key_num_fields = 1,
	.result_start_idx = 855,
	.result_bit_size = 152,
	.result_num_fields = 5
	},
	{ /* class_tid: 4, , table: l2_cntxt_tcam_cache.ing_rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 48,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 2051,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.ident_start_idx = 35,
	.ident_nums = 0
	},
	{ /* class_tid: 4, , table: control.ing_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 3,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 48,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 4, , table: l2_cntxt_tcam.ing_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 49,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 2052,
	.blob_key_bit_size = 213,
	.key_bit_size = 213,
	.key_num_fields = 21,
	.result_start_idx = 860,
	.result_bit_size = 43,
	.result_num_fields = 6,
	.ident_start_idx = 35,
	.ident_nums = 1
	},
	{ /* class_tid: 4, , table: l2_cntxt_tcam_cache.ing_wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 49,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 2073,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 866,
	.result_bit_size = 62,
	.result_num_fields = 4
	},
	{ /* class_tid: 4, , table: parif_def_arec_ptr.ing_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_DFLT_ACT_REC_PTR,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 49,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_PHY_PORT_PARIF,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.result_start_idx = 870,
	.result_bit_size = 32,
	.result_num_fields = 1
	},
	{ /* class_tid: 4, , table: parif_def_err_arec_ptr.ing_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_ERR_ACT_REC_PTR,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 49,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_PHY_PORT_PARIF,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.result_start_idx = 871,
	.result_bit_size = 32,
	.result_num_fields = 1
	},
	{ /* class_tid: 4, , table: int_full_act_record.egr_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_VFR_CFA_ACTION,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 49,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 872,
	.result_bit_size = 128,
	.result_num_fields = 17,
	.encap_num_fields = 0
	},
	{ /* class_tid: 4, , table: port_table.egr_wr_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PORT_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 49,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 2074,
	.blob_key_bit_size = 10,
	.key_bit_size = 10,
	.key_num_fields = 1,
	.result_start_idx = 889,
	.result_bit_size = 152,
	.result_num_fields = 5
	},
	{ /* class_tid: 4, , table: control.egr_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 5,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 49,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* class_tid: 4, , table: l2_cntxt_tcam_cache.egr_rd_vfr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 50,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 2075,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.ident_start_idx = 36,
	.ident_nums = 0
	},
	{ /* class_tid: 4, , table: control.egr_1 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 50,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 4, , table: ilt_tbl.egr_vfr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_ILT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 51,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_DRV_FUNC_SVIF,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.result_start_idx = 894,
	.result_bit_size = 64,
	.result_num_fields = 8
	},
	{ /* class_tid: 4, , table: l2_cntxt_tcam_cache.egr_wr_vfr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 51,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 2076,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 902,
	.result_bit_size = 62,
	.result_num_fields = 4
	},
	{ /* class_tid: 4, , table: l2_cntxt_tcam_cache.egr_rd */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 51,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 2077,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.ident_start_idx = 36,
	.ident_nums = 0
	},
	{ /* class_tid: 4, , table: control.egr_2 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 3,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 51,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 4, , table: l2_cntxt_tcam.egr_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 52,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 2078,
	.blob_key_bit_size = 213,
	.key_bit_size = 213,
	.key_num_fields = 21,
	.result_start_idx = 906,
	.result_bit_size = 43,
	.result_num_fields = 6,
	.ident_start_idx = 36,
	.ident_nums = 1
	},
	{ /* class_tid: 4, , table: l2_cntxt_tcam_cache.egr_wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 52,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 2099,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 912,
	.result_bit_size = 62,
	.result_num_fields = 4
	},
	{ /* class_tid: 4, , table: parif_def_arec_ptr.egr_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_DFLT_ACT_REC_PTR,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 52,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_DRV_FUNC_PARIF,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 916,
	.result_bit_size = 32,
	.result_num_fields = 1
	},
	{ /* class_tid: 4, , table: parif_def_err_arec_ptr.egr_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_ERR_ACT_REC_PTR,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 52,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_DRV_FUNC_PARIF,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 917,
	.result_bit_size = 32,
	.result_num_fields = 1
	},
	{ /* class_tid: 5, , table: int_full_act_record.loopback */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_VFR_CFA_ACTION,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 52,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_WR_GLB_REGFILE,
	.tbl_operand = BNXT_ULP_GLB_RF_IDX_GLB_LB_AREC_PTR,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 918,
	.result_bit_size = 128,
	.result_num_fields = 17,
	.encap_num_fields = 0
	},
	{ /* class_tid: 5, , table: l2_cntxt_tcam_cache.vf_rd_egr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 52,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 2100,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.ident_start_idx = 37,
	.ident_nums = 0
	},
	{ /* class_tid: 5, , table: control.vf_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 3,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 52,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 5, , table: l2_cntxt_tcam.vf_egr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 53,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 2101,
	.blob_key_bit_size = 213,
	.key_bit_size = 213,
	.key_num_fields = 21,
	.result_start_idx = 935,
	.result_bit_size = 43,
	.result_num_fields = 6,
	.ident_start_idx = 37,
	.ident_nums = 1
	},
	{ /* class_tid: 5, , table: l2_cntxt_tcam_cache.vf_egr_wr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 53,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 2122,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 941,
	.result_bit_size = 62,
	.result_num_fields = 4
	},
	{ /* class_tid: 5, , table: parif_def_arec_ptr.vf_egr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_DFLT_ACT_REC_PTR,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 53,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_CONST,
	.tbl_operand = ULP_THOR_SYM_LOOPBACK_PARIF,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 945,
	.result_bit_size = 32,
	.result_num_fields = 1
	},
	{ /* class_tid: 5, , table: parif_def_err_arec_ptr.vf_egr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_ERR_ACT_REC_PTR,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 53,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_CONST,
	.tbl_operand = ULP_THOR_SYM_LOOPBACK_PARIF,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 946,
	.result_bit_size = 32,
	.result_num_fields = 1
	},
	{ /* class_tid: 5, , table: int_full_act_record.vf_ing */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 53,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_AND_SET_VFR_FLAG,
	.result_start_idx = 947,
	.result_bit_size = 128,
	.result_num_fields = 17,
	.encap_num_fields = 0
	},
	{ /* class_tid: 5, , table: ilt_tbl.vf_ing */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_ILT,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 53,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_VF_FUNC_SVIF,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 964,
	.result_bit_size = 64,
	.result_num_fields = 8
	},
	{ /* class_tid: 5, , table: l2_cntxt_tcam_cache.rd_egr0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 53,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 2123,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.ident_start_idx = 38,
	.ident_nums = 0
	},
	{ /* class_tid: 5, , table: control.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 3,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 53,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 5, , table: ilt_tbl.vfr_egr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_ILT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 54,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_DRV_FUNC_SVIF,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.result_start_idx = 972,
	.result_bit_size = 64,
	.result_num_fields = 8
	},
	{ /* class_tid: 5, , table: l2_cntxt_tcam_cache.vfr_wr_egr0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 54,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 2124,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 980,
	.result_bit_size = 62,
	.result_num_fields = 4
	},
	{ /* class_tid: 5, , table: metadata_record.vfr_egr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_METADATA,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 54,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_WR_GLB_REGFILE,
	.tbl_operand = BNXT_ULP_GLB_RF_IDX_GLB_METADATA_PROF_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.result_start_idx = 984,
	.result_bit_size = 16,
	.result_num_fields = 1
	},
	{ /* class_tid: 5, , table: mod_record.vfr_egr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_ACT_MODIFY_64B,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 54,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_MODIFY_PTR,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.record_size = 64,
	.result_start_idx = 985,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 47
	},
	{ /* class_tid: 5, , table: int_full_act_record.vfr_egr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_VFR_CFA_ACTION,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 54,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 1032,
	.result_bit_size = 128,
	.result_num_fields = 17
	},
	{ /* class_tid: 5, , table: l2_cntxt_tcam_cache.ing_rd_vfr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 54,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 2125,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.ident_start_idx = 38,
	.ident_nums = 0
	},
	{ /* class_tid: 5, , table: control.ing_rd_vfr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 5,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 54,
		.cond_nums = 1 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* class_tid: 5, , table: l2_cntxt_tcam.vfr_ing0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 55,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 2126,
	.blob_key_bit_size = 213,
	.key_bit_size = 213,
	.key_num_fields = 21,
	.result_start_idx = 1049,
	.result_bit_size = 43,
	.result_num_fields = 6,
	.ident_start_idx = 38,
	.ident_nums = 0
	},
	{ /* class_tid: 5, , table: fkb_select.vfr_em */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_EM_FKB,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 55,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_WR_GLB_REGFILE,
	.tbl_operand = BNXT_ULP_GLB_RF_IDX_GLB_VFR_EM_KEY_ID_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.result_start_idx = 1055,
	.result_bit_size = 106,
	.result_num_fields = 106
	},
	{ /* class_tid: 5, , table: profile_tcam.vfr_ing0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 55,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.pri_opcode  = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO,
	.key_start_idx = 2147,
	.blob_key_bit_size = 94,
	.key_bit_size = 94,
	.key_num_fields = 43,
	.result_start_idx = 1161,
	.result_bit_size = 33,
	.result_num_fields = 8
	},
	{ /* class_tid: 5, , table: l2_cntxt_tcam_cache.ing_wr_vfr */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_L2_CNTXT_TCAM,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 55,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 2190,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.ident_start_idx = 38,
	.ident_nums = 1
	},
	{ /* class_tid: 5, , table: int_full_act_record.vfr_ing0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 55,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 1169,
	.result_bit_size = 128,
	.result_num_fields = 17
	},
	{ /* class_tid: 5, , table: em.vfr.0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 55,
		.cond_nums = 0 },
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES,
	.key_start_idx = 2191,
	.blob_key_bit_size = 0,
	.key_bit_size = 0,
	.key_num_fields = 114,
	.result_start_idx = 1186,
	.result_bit_size = 0,
	.result_num_fields = 6
	}
};

struct bnxt_ulp_mapper_cond_info ulp_thor_class_cond_list[] = {
	/* cond_reject: thor, class_tid: 1 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_CF_IS_SET,
	.cond_operand = BNXT_ULP_CF_IDX_WC_MATCH
	},
	/* cond_execute: class_tid: 1, l2_cntxt_tcam_cache.rd */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_FIELD_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_GLB_HF_ID_O_ETH_DMAC
	},
	/* cond_execute: class_tid: 1, control.0 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 1, control.ipv6_check */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV6
	},
	/* cond_execute: class_tid: 1, profile_tcam_cache.ipv6_rd */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_CF_NOT_SET,
	.cond_operand = BNXT_ULP_CF_IDX_WC_MATCH
	},
	/* cond_execute: class_tid: 1, control.ipv6_prof_cache_check */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 1, control.v6_conflict_check */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_CC
	},
	/* cond_execute: class_tid: 1, profile_tcam.l2_l3_l4_v6_em */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_VXLAN
	},
	/* cond_execute: class_tid: 1, control.gen_tbl_miss */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 1, fkb_select.l3_l4_wm */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_VXLAN
	},
	/* cond_execute: class_tid: 1, fkb_select.l3_l4_wm_vxlan */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_VXLAN
	},
	/* cond_execute: class_tid: 1, profile_tcam.l3_l4.ip */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_CF_IS_SET,
	.cond_operand = BNXT_ULP_CF_IDX_O_L3
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_VXLAN
	},
	/* cond_execute: class_tid: 1, profile_tcam.l3_l4.vxlan */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_VXLAN
	},
	/* cond_execute: class_tid: 1, wm.l3_l4.ipv4 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_CF_IS_SET,
	.cond_operand = BNXT_ULP_CF_IDX_O_L4
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV4
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_VXLAN
	},
	/* cond_execute: class_tid: 1, wm.l3_l4.ipv6 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_CF_IS_SET,
	.cond_operand = BNXT_ULP_CF_IDX_O_L4
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV6
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_VXLAN
	},
	/* cond_execute: class_tid: 1, wm.l3.ipv4 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV4
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_VXLAN
	},
	/* cond_execute: class_tid: 1, wm.l3.ipv6 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV6
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_VXLAN
	},
	/* cond_execute: class_tid: 1, wm.l2 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_VXLAN
	},
	/* cond_execute: class_tid: 1, wm.l3_l4.vxlan.ipv4 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_VXLAN
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV4
	},
	/* cond_execute: class_tid: 1, wm.l3_l4.vxlan.ipv6 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_VXLAN
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV6
	},
	/* cond_execute: class_tid: 2, control.tunnel_cache_check */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 2, control.flow_type_check */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_F1
	},
	/* cond_execute: class_tid: 2, control.mac_addr_cache_check */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 2, control.profile_tcam_cache.f2_check */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 2, fkb_select.f2_wm */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_VXLAN
	},
	/* cond_execute: class_tid: 2, wm.l3_l4.ipv4 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV4
	},
	/* cond_execute: class_tid: 2, wm.l3_l4.ipv6 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV6
	},
	/* cond_execute: class_tid: 3, l2_cntxt_tcam_cache.rd */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_FIELD_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_GLB_HF_ID_O_ETH_SMAC
	},
	/* cond_execute: class_tid: 3, control.0 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 3, control.ipv6_check */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV6
	},
	/* cond_execute: class_tid: 3, profile_tcam_cache.ipv6_rd */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_CF_NOT_SET,
	.cond_operand = BNXT_ULP_CF_IDX_WC_MATCH
	},
	/* cond_execute: class_tid: 3, control.ipv6_prof_cache_check */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 3, control.v6_conflict_check */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_CC
	},
	/* cond_execute: class_tid: 3, control.gen_tbl_miss */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 3, control.conflict_check */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_CC
	},
	/* cond_execute: class_tid: 3, profile_tcam.l3_l4.ip */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_CF_IS_SET,
	.cond_operand = BNXT_ULP_CF_IDX_O_L3
	},
	/* cond_execute: class_tid: 3, wm.l3_l4.ipv4 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_CF_IS_SET,
	.cond_operand = BNXT_ULP_CF_IDX_O_L4
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV4
	},
	/* cond_execute: class_tid: 3, wm.l3.ipv4 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV4
	},
	/* cond_execute: class_tid: 4, control.ing_0 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 4, control.egr_0 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_CF_IS_SET,
	.cond_operand = BNXT_ULP_CF_IDX_VFR_MODE
	},
	/* cond_execute: class_tid: 4, control.egr_1 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 4, control.egr_2 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 5, control.vf_0 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 5, control.0 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: class_tid: 5, control.ing_rd_vfr */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	}
};

struct bnxt_ulp_mapper_key_info ulp_thor_class_key_info_list[] = {
	/* class_tid: 1, , table: port_table.rd */
	{
	.field_info_mask = {
		.description = "dev.port_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "dev.port_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff}
		}
	},
	/* class_tid: 1, , table: l2_cntxt_tcam_cache.rd */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	/* class_tid: 1, , table: mac_addr_cache.rd */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TUN_HDR_TYPE_NONE}
		},
	.field_info_spec = {
		.description = "tun_hdr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TUN_HDR_TYPE_NONE}
		}
	},
	{
	.field_info_mask = {
		.description = "one_tag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "one_tag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		},
	.field_info_spec = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		}
	},
	/* class_tid: 1, , table: l2_cntxt_tcam.0 */
	{
	.field_info_mask = {
		.description = "etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tunnel_id",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tunnel_id",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "llc",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "llc",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "roce",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "roce",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mpass_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		2}
		},
	.field_info_spec = {
		.description = "mpass_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		}
	},
	/* class_tid: 1, , table: mac_addr_cache.wr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TUN_HDR_TYPE_NONE}
		},
	.field_info_spec = {
		.description = "tun_hdr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TUN_HDR_TYPE_NONE}
		}
	},
	{
	.field_info_mask = {
		.description = "one_tag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "one_tag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		},
	.field_info_spec = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		}
	},
	/* class_tid: 1, , table: profile_tcam_cache.ipv6_rd */
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr3 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_HDR_SIG_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_HDR_SIG_ID & 0xff}
		}
	},
	/* class_tid: 1, , table: profile_tcam.l2_l3_l4_v6_em */
	{
	.field_info_mask = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_THOR_SYM_L4_HDR_TYPE_TCP},
		.field_src3 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr3 = {
		ULP_THOR_SYM_L4_HDR_TYPE_UDP}
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff}
		},
	.field_info_spec = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff}
		},
	.field_info_spec = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "ieh",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "ieh",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_L3_HDR_TYPE_IPV6}
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_L3_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_THOR_SYM_L2_VTAG_PRESENT_YES},
		.field_src3 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr3 = {
		ULP_THOR_SYM_L2_VTAG_PRESENT_NO}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_L2_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr3 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		}
	},
	/* class_tid: 1, , table: profile_tcam_cache.l2_l3_l4_v6_wr */
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr3 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_HDR_SIG_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_HDR_SIG_ID & 0xff}
		}
	},
	/* class_tid: 1, , table: em.l2_l3_l4_v6.0 */
	{
	.field_info_mask = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
		(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		},
	.field_info_spec = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L4_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4_SRC_PORT & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L4_DST_PORT >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4_DST_PORT & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	/* class_tid: 1, , table: profile_tcam_cache.rd */
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr3 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_HDR_SIG_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_HDR_SIG_ID & 0xff}
		}
	},
	/* class_tid: 1, , table: profile_tcam.l3_l4.ip */
	{
	.field_info_mask = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_THOR_SYM_L4_HDR_TYPE_TCP},
		.field_src3 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr3 = {
		ULP_THOR_SYM_L4_HDR_TYPE_UDP}
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_THOR_SYM_L4_HDR_VALID_YES},
		.field_src3 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr3 = {
		ULP_THOR_SYM_L4_HDR_VALID_IGNORE}
		}
	},
	{
	.field_info_mask = {
		.description = "ieh",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "ieh",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L3 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L3 & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_THOR_SYM_L3_HDR_TYPE_IPV4},
		.field_src3 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr3 = {
		ULP_THOR_SYM_L3_HDR_TYPE_IPV6}
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_L3_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_THOR_SYM_L2_VTAG_PRESENT_YES},
		.field_src3 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr3 = {
		ULP_THOR_SYM_L2_VTAG_PRESENT_NO}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_L2_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr3 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		}
	},
	/* class_tid: 1, , table: profile_tcam.l3_l4.vxlan */
	{
	.field_info_mask = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "ieh",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "ieh",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_L3_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_L3_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TUN_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TL4_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L3 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L3 & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_THOR_SYM_L3_HDR_TYPE_IPV4},
		.field_src3 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr3 = {
		ULP_THOR_SYM_L3_HDR_TYPE_IPV6}
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TL3_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_THOR_SYM_TL2_VTAG_PRESENT_YES},
		.field_src3 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr3 = {
		ULP_THOR_SYM_TL2_VTAG_PRESENT_NO}
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TL2_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr3 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		}
	},
	/* class_tid: 1, , table: profile_tcam_cache.wr */
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr3 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_HDR_SIG_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_HDR_SIG_ID & 0xff}
		}
	},
	/* class_tid: 1, , table: wm.l3_l4.ipv4 */
	{
	.field_info_mask = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L3_PROTO_ID >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L3_PROTO_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L4_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4_SRC_PORT & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L4_DST_PORT >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4_DST_PORT & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	/* class_tid: 1, , table: wm.l3_l4.ipv6 */
	{
	.field_info_mask = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_1 >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_1 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L3_PROTO_ID >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L3_PROTO_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L4_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4_SRC_PORT & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L4_DST_PORT >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4_DST_PORT & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	/* class_tid: 1, , table: wm.l3.ipv4 */
	{
	.field_info_mask = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L3_PROTO_ID >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L3_PROTO_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	/* class_tid: 1, , table: wm.l3.ipv6 */
	{
	.field_info_mask = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_1 >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_1 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L3_PROTO_ID >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L3_PROTO_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	/* class_tid: 1, , table: wm.l2 */
	{
	.field_info_mask = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	/* class_tid: 1, , table: wm.l3_l4.vxlan.ipv4 */
	{
	.field_info_mask = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_2 >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_2 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L3_PROTO_ID >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L3_PROTO_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L4_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4_SRC_PORT & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L4_DST_PORT >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4_DST_PORT & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	/* class_tid: 1, , table: wm.l3_l4.vxlan.ipv6 */
	{
	.field_info_mask = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_3 >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_3 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L3_FB_PROTO_ID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L3_PROTO_ID >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L3_PROTO_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L4_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4_SRC_PORT & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L4_DST_PORT >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4_DST_PORT & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	/* class_tid: 2, , table: port_table.rd */
	{
	.field_info_mask = {
		.description = "dev.port_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "dev.port_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff}
		}
	},
	/* class_tid: 2, , table: tunnel_cache.rd */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tunnel_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tunnel_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_TUNNEL_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_TUNNEL_ID & 0xff}
		}
	},
	/* class_tid: 2, , table: l2_cntxt_tcam.1 */
	{
	.field_info_mask = {
		.description = "etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tunnel_id",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tunnel_id",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TUN_HDR_TYPE_NONE}
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TUN_HDR_TYPE_NONE}
		}
	},
	{
	.field_info_mask = {
		.description = "llc",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "llc",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "roce",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "roce",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mpass_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mpass_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		}
	},
	/* class_tid: 2, , table: tunnel_cache.wr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tunnel_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tunnel_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_TUNNEL_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_TUNNEL_ID & 0xff}
		}
	},
	/* class_tid: 2, , table: mac_addr_cache.rd */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "one_tag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "one_tag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		},
	.field_info_spec = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		}
	},
	/* class_tid: 2, , table: l2_cntxt_tcam.0 */
	{
	.field_info_mask = {
		.description = "etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tunnel_id",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tunnel_id",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "llc",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "llc",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "roce",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "roce",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mpass_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		2}
		},
	.field_info_spec = {
		.description = "mpass_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		}
	},
	/* class_tid: 2, , table: mac_addr_cache.wr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "one_tag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "one_tag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		},
	.field_info_spec = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
		}
	},
	/* class_tid: 2, , table: profile_tcam_cache.f2_rd */
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_VXLAN_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_VXLAN_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_HDR_SIG_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_HDR_SIG_ID & 0xff}
		}
	},
	/* class_tid: 2, , table: profile_tcam.f2 */
	{
	.field_info_mask = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "ieh",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "ieh",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_L2_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TUN_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TL4_HDR_TYPE_UDP}
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TL4_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TL3_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TL2_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_VXLAN_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_VXLAN_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		}
	},
	/* class_tid: 2, , table: profile_tcam_cache.f2_wr */
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_VXLAN_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_VXLAN_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_HDR_SIG_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_HDR_SIG_ID & 0xff}
		}
	},
	/* class_tid: 2, , table: wm.l3_l4.ipv4 */
	{
	.field_info_mask = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_4 >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_4 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_T_VXLAN_VNI >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_T_VXLAN_VNI & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_T_VXLAN_VNI >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_T_VXLAN_VNI & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_T_VXLAN_VNI >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_T_VXLAN_VNI & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_T_VXLAN_VNI >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_T_VXLAN_VNI & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_I_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_I_ETH_DMAC & 0xff}
		},
	.field_info_spec = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_I_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_I_ETH_DMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_I_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_I_IPV4_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_I_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_I_IPV4_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_I_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_I_IPV4_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_I_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_I_IPV4_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	/* class_tid: 2, , table: wm.l3_l4.ipv6 */
	{
	.field_info_mask = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_5 >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_5 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_T_VXLAN_VNI >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_T_VXLAN_VNI & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_T_VXLAN_VNI >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_T_VXLAN_VNI & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_T_VXLAN_VNI >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_T_VXLAN_VNI & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_T_VXLAN_VNI >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_T_VXLAN_VNI & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_I_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_I_ETH_DMAC & 0xff}
		},
	.field_info_spec = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_I_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_I_ETH_DMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_I_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_I_IPV4_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_I_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_I_IPV4_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_I_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_I_IPV4_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_I_IPV4_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_I_IPV4_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	/* class_tid: 3, , table: l2_cntxt_tcam_cache.rd */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	/* class_tid: 3, , table: mac_addr_cache.rd */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TUN_HDR_TYPE_NONE}
		},
	.field_info_spec = {
		.description = "tun_hdr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TUN_HDR_TYPE_NONE}
		}
	},
	{
	.field_info_mask = {
		.description = "one_tag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "one_tag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		},
	.field_info_spec = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		}
	},
	/* class_tid: 3, , table: port_table.egr.rd */
	{
	.field_info_mask = {
		.description = "dev.port_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "dev.port_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff}
		}
	},
	/* class_tid: 3, , table: l2_cntxt_tcam.0 */
	{
	.field_info_mask = {
		.description = "etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tunnel_id",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tunnel_id",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TUN_HDR_TYPE_NONE}
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TUN_HDR_TYPE_NONE}
		}
	},
	{
	.field_info_mask = {
		.description = "llc",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "llc",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "roce",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "roce",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mpass_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mpass_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		}
	},
	/* class_tid: 3, , table: mac_addr_cache.wr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TUN_HDR_TYPE_NONE}
		},
	.field_info_spec = {
		.description = "tun_hdr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_TUN_HDR_TYPE_NONE}
		}
	},
	{
	.field_info_mask = {
		.description = "one_tag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "one_tag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		},
	.field_info_spec = {
		.description = "mac_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
		}
	},
	/* class_tid: 3, , table: profile_tcam_cache.ipv6_rd */
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr3 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_HDR_SIG_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_HDR_SIG_ID & 0xff}
		}
	},
	/* class_tid: 3, , table: profile_tcam.l2_l3_l4_v6_em */
	{
	.field_info_mask = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_THOR_SYM_L4_HDR_TYPE_TCP},
		.field_src3 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr3 = {
		ULP_THOR_SYM_L4_HDR_TYPE_UDP}
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff}
		},
	.field_info_spec = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff}
		},
	.field_info_spec = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "ieh",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "ieh",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_L3_HDR_TYPE_IPV6}
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_L3_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_THOR_SYM_L2_VTAG_PRESENT_YES},
		.field_src3 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr3 = {
		ULP_THOR_SYM_L2_VTAG_PRESENT_NO}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_L2_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr3 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		}
	},
	/* class_tid: 3, , table: profile_tcam_cache.l2_l3_l4_v6_wr */
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr3 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_HDR_SIG_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_HDR_SIG_ID & 0xff}
		}
	},
	/* class_tid: 3, , table: em.l2_l3_l4_v6.0 */
	{
	.field_info_mask = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
		(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L4_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4_SRC_PORT & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr2 = {
			(BNXT_ULP_CF_IDX_O_L4_DST_PORT >> 8) & 0xff,
			BNXT_ULP_CF_IDX_O_L4_DST_PORT & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	/* class_tid: 3, , table: profile_tcam_cache.rd */
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr3 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_HDR_SIG_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_HDR_SIG_ID & 0xff}
		}
	},
	/* class_tid: 3, , table: profile_tcam.l3_l4.ip */
	{
	.field_info_mask = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ONES,
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_THOR_SYM_L4_HDR_TYPE_TCP},
		.field_src3 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr3 = {
		ULP_THOR_SYM_L4_HDR_TYPE_UDP}
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff}
		},
	.field_info_spec = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff}
		},
	.field_info_spec = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "ieh",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "ieh",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_THOR_SYM_L3_HDR_TYPE_IPV4},
		.field_src3 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr3 = {
		ULP_THOR_SYM_L3_HDR_TYPE_IPV6}
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_L3_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_THOR_SYM_L2_VTAG_PRESENT_YES},
		.field_src3 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr3 = {
		ULP_THOR_SYM_L2_VTAG_PRESENT_NO}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_L2_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr3 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		}
	},
	/* class_tid: 3, , table: profile_tcam.l3_l4.nonip */
	{
	.field_info_mask = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff}
		},
	.field_info_spec = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff}
		},
	.field_info_spec = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_O_L4 >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_L4 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "ieh",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "ieh",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_L3_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr2 = {
			ULP_THOR_SYM_L2_VTAG_PRESENT_YES},
		.field_src3 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr3 = {
		ULP_THOR_SYM_L2_VTAG_PRESENT_NO}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		ULP_THOR_SYM_L2_HDR_VALID_YES}
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr3 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		}
	},
	/* class_tid: 3, , table: profile_tcam_cache.wr */
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr2 = {
			(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
			BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr3 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "hdr_sig_id",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_HDR_SIG_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_HDR_SIG_ID & 0xff}
		}
	},
	/* class_tid: 3, , table: wm.l3_l4.ipv4 */
	{
	.field_info_mask = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_1 >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_1 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr3 = {
		(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_SRC_PORT & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr3 = {
		(BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_UDP_SRC_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr3 = {
		(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		},
	.field_info_spec = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_TCP >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_O_TCP & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_TCP_DST_PORT & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr3 = {
		(BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_UDP_DST_PORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	/* class_tid: 3, , table: wm.l3.ipv4 */
	{
	.field_info_mask = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_1 >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_1 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_SRC_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
		},
	.field_info_spec = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_IPV4_DST_ADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	/* class_tid: 3, , table: wm.l2 */
	{
	.field_info_mask = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "wc_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_1 >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_1 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
		(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_OO_VLAN_FB_VID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_OO_VLAN_FB_VID & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr2 = {
			(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
			BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	/* class_tid: 4, , table: port_table.ing_wr_0 */
	{
	.field_info_mask = {
		.description = "dev.port_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "dev.port_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff}
		}
	},
	/* class_tid: 4, , table: l2_cntxt_tcam_cache.ing_rd */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_PHY_PORT_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_SVIF & 0xff}
		}
	},
	/* class_tid: 4, , table: l2_cntxt_tcam.ing_0 */
	{
	.field_info_mask = {
		.description = "etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tunnel_id",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tunnel_id",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "llc",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "llc",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "roce",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "roce",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_PHY_PORT_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_SVIF & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mpass_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mpass_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		}
	},
	/* class_tid: 4, , table: l2_cntxt_tcam_cache.ing_wr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_PHY_PORT_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_SVIF & 0xff}
		}
	},
	/* class_tid: 4, , table: port_table.egr_wr_0 */
	{
	.field_info_mask = {
		.description = "dev.port_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "dev.port_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff}
		}
	},
	/* class_tid: 4, , table: l2_cntxt_tcam_cache.egr_rd_vfr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 4, , table: l2_cntxt_tcam_cache.egr_wr_vfr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 4, , table: l2_cntxt_tcam_cache.egr_rd */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 4, , table: l2_cntxt_tcam.egr_0 */
	{
	.field_info_mask = {
		.description = "etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tunnel_id",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tunnel_id",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "llc",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "llc",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "roce",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "roce",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mpass_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mpass_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		}
	},
	/* class_tid: 4, , table: l2_cntxt_tcam_cache.egr_wr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 5, , table: l2_cntxt_tcam_cache.vf_rd_egr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_VF_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_VF_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 5, , table: l2_cntxt_tcam.vf_egr */
	{
	.field_info_mask = {
		.description = "etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tunnel_id",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tunnel_id",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "llc",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "llc",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "roce",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "roce",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_VF_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_VF_FUNC_SVIF & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mpass_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mpass_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		}
	},
	/* class_tid: 5, , table: l2_cntxt_tcam_cache.vf_egr_wr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_VF_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_VF_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 5, , table: l2_cntxt_tcam_cache.rd_egr0 */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 5, , table: l2_cntxt_tcam_cache.vfr_wr_egr0 */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 5, , table: l2_cntxt_tcam_cache.ing_rd_vfr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 5, , table: l2_cntxt_tcam.vfr_ing0 */
	{
	.field_info_mask = {
		.description = "etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ivlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_tpid_sel",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_ovlan_vid",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac1_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mac0_addr",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tunnel_id",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tunnel_id",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "llc",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "llc",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "roce",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "roce",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		}
	},
	{
	.field_info_mask = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "recycle_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "mpass_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "mpass_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		}
	},
	/* class_tid: 5, , table: profile_tcam.vfr_ing0 */
	{
	.field_info_mask = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "ieh",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "ieh",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "l2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_flags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_err",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tun_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_is_udp_tcp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl4_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_dst",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_ipv6_cmp_src",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_isIP",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl3_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_two_vtags",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_vtag_present",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_uc_mc_bc",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_hdr_type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tl2_hdr_valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "hrec_next",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "prof_func_id",
		.field_bit_size = 7,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_VFR_PROF_FUNC_0 >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_VFR_PROF_FUNC_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "agg_error",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "metadata",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_0",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "pkt_type_1",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		},
	.field_info_spec = {
		.description = "valid",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
		.field_opr1 = {
		1}
		}
	},
	/* class_tid: 5, , table: l2_cntxt_tcam_cache.ing_wr_vfr */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff}
		}
	},
	/* class_tid: 5, , table: em.vfr.0 */
	{
	.field_info_mask = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "em_profile_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
		.field_opr1 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_VFR_EM_PROF_ID_0 >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_VFR_EM_PROF_ID_0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_cntxt_id",
		.field_bit_size = 10,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "parif",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "spif",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "lcos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "meta",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "rcyc_cnt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "loopback",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl3.l3err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tl4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tuntype",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tflags",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tids",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tid",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxts",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tctxt",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "tqos",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "terr",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_l2type",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_dt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_sa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_nvt",
		.field_bit_size = 2,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ovt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivp",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivd",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivv",
		.field_bit_size = 12,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_ivt",
		.field_bit_size = 3,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l2_etype",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.sip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip.ipv6",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.dip_selcmp.ipv6",
		.field_bit_size = 72,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ttl",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.prot",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv4",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.fid.ipv6",
		.field_bit_size = 20,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.qos",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_nonext",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_esp",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_auth",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_dest",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_rthdr",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_hop",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.ieh_1frag",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.df",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv4",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l3.l3err.ipv6",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.l4type",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.src",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.dst",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.flags",
		.field_bit_size = 9,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.seq",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.ack",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.win",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.pa",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.opt",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tcpts",
		.field_bit_size = 1,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.tsval",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.txecr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	},
	{
	.field_info_mask = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		},
	.field_info_spec = {
		.description = "l4.err",
		.field_bit_size = 4,
		.field_opc = BNXT_ULP_FIELD_OPC_SKIP
		}
	}
};

struct bnxt_ulp_mapper_field_info ulp_thor_class_result_field_list[] = {
	/* class_tid: 1, , table: l2_cntxt_tcam.0 */
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
	(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
	BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr2 = {
		(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr3 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
	},
	{
	.description = "ctxt_meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "def_ctxt_data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR & 0xff}
	},
	{
	.description = "ctxt_opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR_SYM_CTXT_OPCODE_NORMAL_FLOW}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
	BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff}
	},
	/* class_tid: 1, , table: mac_addr_cache.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "src_property_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 1, , table: fkb_select.l2_l3_l4_v6_em */
	{
	.description = "l2_cntxt_id.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "parif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "spif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "svif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "lcos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rcyc_cnt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "loopback.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_l2type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_dmac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_smac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_dt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_sa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_nvt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_etype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_l3type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_sip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_sip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_dip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_dip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ttl.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_prot.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_fid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_qos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_nonext.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_esp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_auth.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_dest.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_rthdr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_hop.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_1frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_df.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_l3err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_l4type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_src.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_dst.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_flags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_seq.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_pa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_opt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_tcpts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tuntype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tflags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tids.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tctxts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tctxt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tqos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "terr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_l2type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_smac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
	(BNXT_ULP_GLB_HF_ID_O_ETH_SMAC >> 8) & 0xff,
	BNXT_ULP_GLB_HF_ID_O_ETH_SMAC & 0xff}
	},
	{
	.description = "l2_dt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_sa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_nvt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 56) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 48) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 40) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 32) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 24) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 16) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 8) & 0xff,
	(uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr2 = {
		(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_etype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_l3type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
	(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
	BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff}
	},
	{
	.description = "l3_sip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
	(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
	BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff}
	},
	{
	.description = "l3_dip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ttl.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_prot.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_fid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_qos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_nonext.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_esp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_auth.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_dest.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_rthdr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_hop.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_1frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_df.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_l3err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_l4type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_src.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT >> 8) & 0xff,
	BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT & 0xff}
	},
	{
	.description = "l4_dst.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT >> 8) & 0xff,
	BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT & 0xff}
	},
	{
	.description = "l4_flags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_seq.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_ack.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_win.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_pa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_opt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_tcpts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_tsval.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_txecr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 1, , table: profile_tcam.l2_l3_l4_v6_em */
	{
	.description = "wc_key_id",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_id",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_EM_KEY_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_EM_KEY_ID_0 & 0xff}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 1, , table: profile_tcam_cache.l2_l3_l4_v6_wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "profile_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_EM_KEY_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_EM_KEY_ID_0 & 0xff}
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_key_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "flow_sig_id",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_FLOW_SIG_ID >> 8) & 0xff,
	BNXT_ULP_CF_IDX_FLOW_SIG_ID & 0xff}
	},
	/* class_tid: 1, , table: em.l2_l3_l4_v6.0 */
	{
	.description = "valid",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	3}
	},
	{
	.description = "data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ctxt_data",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 1, , table: fkb_select.l3_l4_wm */
	{
	.description = "l2_cntxt_id.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "parif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "spif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "svif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "lcos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rcyc_cnt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "loopback.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_l2type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_dmac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_smac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_dt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_sa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_nvt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_etype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_l3type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_sip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_sip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_dip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_dip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ttl.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_prot.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_fid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_qos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_nonext.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_esp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_auth.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_dest.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_rthdr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_hop.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_1frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_df.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_l3err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_l4type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_src.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_dst.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_flags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_seq.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_pa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_opt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_tcpts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tuntype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tflags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tids.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tctxts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tctxt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tqos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "terr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_l2type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_smac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "l2_dt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_sa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_nvt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "l2_ivt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_etype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_l3type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "l3_sip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "l3_dip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ttl.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_prot.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "l3_fid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_qos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_nonext.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_esp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_auth.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_dest.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_rthdr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_hop.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_1frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_df.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_l3err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_l4type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_src.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "l4_dst.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "l4_flags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_seq.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_ack.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_win.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_pa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_opt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_tcpts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_tsval.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_txecr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 1, , table: fkb_select.l3_l4_wm_vxlan */
	{
	.description = "l2_cntxt_id.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "parif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "spif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "svif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "lcos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rcyc_cnt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "loopback.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_l2type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_dmac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_smac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_dt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_sa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_nvt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "tl2_ivt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_etype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_l3type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_sip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "tl3_sip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_dip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "tl3_dip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ttl.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_prot.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "tl3_fid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_qos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_nonext.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_esp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_auth.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_dest.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_rthdr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_hop.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_1frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_df.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_l3err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_l4type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_src.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "tl4_dst.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "tl4_flags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_seq.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_pa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_opt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_tcpts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tuntype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tflags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tids.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tctxts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tctxt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tqos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "terr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_l2type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_smac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_sa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_nvt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_etype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_l3type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ttl.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_prot.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_fid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_qos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_nonext.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_esp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_auth.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_dest.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_rthdr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_hop.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_1frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_df.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_l3err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_l4type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_src.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_dst.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_flags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_seq.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_ack.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_win.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_pa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_opt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_tcpts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_tsval.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_txecr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 1, , table: profile_tcam.l3_l4.ip */
	{
	.description = "wc_key_id",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_WC_KEY_ID_0 >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_WC_KEY_ID_0 & 0xff}
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 56) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 48) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 40) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 32) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 24) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 16) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 8) & 0xff,
	(uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr2 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_1 >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_1 & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr3 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_0 >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_0 & 0xff}
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "em_key_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_id",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 1, , table: profile_tcam.l3_l4.vxlan */
	{
	.description = "wc_key_id",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_WC_KEY_ID_2 >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_WC_KEY_ID_2 & 0xff}
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 56) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 48) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 40) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 32) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 24) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 16) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 8) & 0xff,
	(uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr2 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_3 >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_3 & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr3 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_2 >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_2 & 0xff}
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "em_key_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_id",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 1, , table: profile_tcam_cache.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "profile_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_key_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "flow_sig_id",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_FLOW_SIG_ID >> 8) & 0xff,
	BNXT_ULP_CF_IDX_FLOW_SIG_ID & 0xff}
	},
	/* class_tid: 1, , table: wm.l3_l4.ipv4 */
	{
	.description = "ctxt_data",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 1, , table: wm.l3_l4.ipv6 */
	{
	.description = "ctxt_data",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 1, , table: wm.l3.ipv4 */
	{
	.description = "ctxt_data",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 1, , table: wm.l3.ipv6 */
	{
	.description = "ctxt_data",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 1, , table: wm.l2 */
	{
	.description = "ctxt_data",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 1, , table: wm.l3_l4.vxlan.ipv4 */
	{
	.description = "ctxt_data",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 1, , table: wm.l3_l4.vxlan.ipv6 */
	{
	.description = "ctxt_data",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 2, , table: l2_cntxt_tcam.1 */
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ctxt_meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "def_ctxt_data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ctxt_opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 2, , table: tunnel_cache.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	/* class_tid: 2, , table: l2_cntxt_tcam.0 */
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_VXLAN_PROF_FUNC_ID >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_VXLAN_PROF_FUNC_ID & 0xff}
	},
	{
	.description = "ctxt_meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "def_ctxt_data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR & 0xff}
	},
	{
	.description = "ctxt_opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR_SYM_CTXT_OPCODE_NORMAL_FLOW}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
	BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff}
	},
	/* class_tid: 2, , table: mac_addr_cache.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "src_property_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 2, , table: fkb_select.f2_wm */
	{
	.description = "l2_cntxt_id.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "parif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "spif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "svif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "lcos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rcyc_cnt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "loopback.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_l2type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_dmac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_smac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_dt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_sa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_nvt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_etype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_l3type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_sip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_sip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_dip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "tl3_dip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ttl.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_prot.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_fid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_qos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_nonext.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_esp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_auth.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_dest.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_rthdr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_hop.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_1frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_df.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_l3err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_l4type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_src.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_dst.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_flags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_seq.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_pa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_opt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_tcpts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tuntype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tflags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tids.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "tid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tctxts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tctxt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tqos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "terr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_l2type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "l2_smac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_sa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_nvt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_etype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_l3type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "l3_dip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ttl.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_prot.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_fid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_qos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_nonext.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_esp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_auth.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_dest.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_rthdr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_hop.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_1frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_df.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_l3err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_l4type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_src.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_dst.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_flags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_seq.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_ack.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_win.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_pa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_opt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_tcpts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_tsval.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_txecr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 2, , table: profile_tcam.f2 */
	{
	.description = "wc_key_id",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_WC_KEY_ID_4 >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_WC_KEY_ID_4 & 0xff}
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 56) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 48) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 40) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 32) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 24) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 16) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 8) & 0xff,
	(uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr2 = {
		(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_5 >> 8) & 0xff,
		BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_5 & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr3 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_4 >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_4 & 0xff}
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "em_key_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_id",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 2, , table: profile_tcam_cache.f2_wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "profile_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_key_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "flow_sig_id",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_FLOW_SIG_ID >> 8) & 0xff,
	BNXT_ULP_CF_IDX_FLOW_SIG_ID & 0xff}
	},
	/* class_tid: 2, , table: wm.l3_l4.ipv4 */
	{
	.description = "ctxt_data",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 2, , table: wm.l3_l4.ipv6 */
	{
	.description = "ctxt_data",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 3, , table: l2_cntxt_tcam.0 */
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_L2_PROF_FUNC_ID & 0xff}
	},
	{
	.description = "ctxt_meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "def_ctxt_data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR & 0xff}
	},
	{
	.description = "ctxt_opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR_SYM_CTXT_OPCODE_NORMAL_FLOW}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
	BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff}
	},
	/* class_tid: 3, , table: mac_addr_cache.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "src_property_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 3, , table: fkb_select.l2_l3_l4_v6_em */
	{
	.description = "l2_cntxt_id.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "parif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "spif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "svif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "lcos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rcyc_cnt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "loopback.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_l2type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_dmac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_smac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_dt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_sa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_nvt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_etype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_l3type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_sip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_sip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_dip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_dip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ttl.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_prot.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_fid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_qos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_nonext.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_esp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_auth.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_dest.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_rthdr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_hop.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_1frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_df.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_l3err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_l4type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_src.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_dst.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_flags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_seq.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_pa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_opt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_tcpts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tuntype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tflags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tids.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tctxts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tctxt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tqos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "terr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_l2type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
	(BNXT_ULP_GLB_HF_ID_O_ETH_DMAC >> 8) & 0xff,
	BNXT_ULP_GLB_HF_ID_O_ETH_DMAC & 0xff}
	},
	{
	.description = "l2_smac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_sa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_nvt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_HDR_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 56) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 48) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 40) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 32) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 24) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 16) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 8) & 0xff,
	(uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr2 = {
		(BNXT_ULP_GLB_HF_ID_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_OO_VLAN_VID & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_etype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_l3type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
	(BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR >> 8) & 0xff,
	BNXT_ULP_GLB_HF_ID_O_IPV6_SRC_ADDR & 0xff}
	},
	{
	.description = "l3_sip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_FIELD_BIT,
	.field_opr1 = {
	(BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR >> 8) & 0xff,
	BNXT_ULP_GLB_HF_ID_O_IPV6_DST_ADDR & 0xff}
	},
	{
	.description = "l3_dip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ttl.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_prot.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_fid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_qos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_nonext.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_esp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_auth.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_dest.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_rthdr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_hop.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_1frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_df.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_l3err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_l4type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_src.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT >> 8) & 0xff,
	BNXT_ULP_CF_IDX_O_L4_FB_SRC_PORT & 0xff}
	},
	{
	.description = "l4_dst.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT >> 8) & 0xff,
	BNXT_ULP_CF_IDX_O_L4_FB_DST_PORT & 0xff}
	},
	{
	.description = "l4_flags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_seq.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_ack.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_win.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_pa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_opt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_tcpts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_tsval.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_txecr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 3, , table: profile_tcam.l2_l3_l4_v6_em */
	{
	.description = "wc_key_id",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_id",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_EM_KEY_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_EM_KEY_ID_0 & 0xff}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 3, , table: profile_tcam_cache.l2_l3_l4_v6_wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "profile_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_EM_PROFILE_ID_0 & 0xff}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_EM_KEY_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_EM_KEY_ID_0 & 0xff}
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_key_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "flow_sig_id",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_FLOW_SIG_ID >> 8) & 0xff,
	BNXT_ULP_CF_IDX_FLOW_SIG_ID & 0xff}
	},
	/* class_tid: 3, , table: em.l2_l3_l4_v6.0 */
	{
	.description = "valid",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	3}
	},
	{
	.description = "data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ctxt_data",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 3, , table: fkb_select.l3_l4_wc */
	{
	.description = "l2_cntxt_id.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "parif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "spif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "svif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "lcos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rcyc_cnt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "loopback.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_l2type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_dmac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_smac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_dt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_sa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_nvt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_etype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_l3type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_sip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_sip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_dip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_dip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ttl.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_prot.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_fid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_qos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_nonext.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_esp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_auth.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_dest.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_rthdr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_hop.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_1frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_df.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_l3err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_l4type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_src.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_dst.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_flags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_seq.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_pa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_opt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_tcpts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tuntype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tflags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tids.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tctxts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tctxt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tqos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "terr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_l2type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "l2_smac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_sa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_nvt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "l2_ivt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_etype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_l3type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "l3_sip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "l3_dip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ttl.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_prot.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_fid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_qos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_nonext.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_esp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_auth.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_dest.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_rthdr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_hop.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_1frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_df.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_l3err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_l4type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_src.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "l4_dst.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "l4_flags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_seq.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_ack.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_win.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_pa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_opt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_tcpts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_tsval.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_txecr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 3, , table: profile_tcam.l3_l4.ip */
	{
	.description = "wc_key_id",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_WC_KEY_ID_1 >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_WC_KEY_ID_1 & 0xff}
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_1 >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_1 & 0xff}
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "em_key_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_id",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 3, , table: profile_tcam.l3_l4.nonip */
	{
	.description = "wc_key_id",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_WC_KEY_ID_1 >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_WC_KEY_ID_1 & 0xff}
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_1 >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_WC_PROFILE_ID_1 & 0xff}
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "em_key_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_id",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 3, , table: profile_tcam_cache.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "profile_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_key_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "flow_sig_id",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_FLOW_SIG_ID >> 8) & 0xff,
	BNXT_ULP_CF_IDX_FLOW_SIG_ID & 0xff}
	},
	/* class_tid: 3, , table: wm.l3_l4.ipv4 */
	{
	.description = "ctxt_data",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 3, , table: wm.l3.ipv4 */
	{
	.description = "ctxt_data",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 3, , table: wm.l2 */
	{
	.description = "ctxt_data",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 4, , table: int_full_act_record.0 */
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mod_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd1",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd0",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stats_op",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stats_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_DRV_FUNC_VNIC >> 8) & 0xff,
	BNXT_ULP_CF_IDX_DRV_FUNC_VNIC & 0xff}
	},
	{
	.description = "use_default",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "cond_copy",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vlan_del_rpt",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 4, , table: port_table.ing_wr_0 */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "drv_func.mac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "drv_func.parent.mac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "phy_port",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_arec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR & 0xff}
	},
	/* class_tid: 4, , table: l2_cntxt_tcam.ing_0 */
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
	},
	{
	.description = "ctxt_meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "def_ctxt_data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR & 0xff}
	},
	{
	.description = "ctxt_opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR_SYM_CTXT_OPCODE_NORMAL_FLOW}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
	BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff}
	},
	/* class_tid: 4, , table: l2_cntxt_tcam_cache.ing_wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "src_property_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 4, , table: parif_def_arec_ptr.ing_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR & 0xff}
	},
	/* class_tid: 4, , table: parif_def_err_arec_ptr.ing_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR & 0xff}
	},
	/* class_tid: 4, , table: int_full_act_record.egr_0 */
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mod_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd1",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd0",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stats_op",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stats_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_PHY_PORT_VPORT >> 8) & 0xff,
	BNXT_ULP_CF_IDX_PHY_PORT_VPORT & 0xff}
	},
	{
	.description = "use_default",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "cond_copy",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vlan_del_rpt",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 4, , table: port_table.egr_wr_0 */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "drv_func.mac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "drv_func.parent.mac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "phy_port",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "default_arec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	/* class_tid: 4, , table: ilt_tbl.egr_vfr */
	{
	.description = "ilt_destination",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "fwd_op",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR_SYM_FWD_OP_BYPASS_LKUP}
	},
	{
	.description = "en_ilt_dest",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "en_bd_action",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "en_bd_meta",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 23,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 4, , table: l2_cntxt_tcam_cache.egr_wr_vfr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_property_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 4, , table: l2_cntxt_tcam.egr_0 */
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
	},
	{
	.description = "ctxt_meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "def_ctxt_data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "ctxt_opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR_SYM_CTXT_OPCODE_NORMAL_FLOW}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_DRV_FUNC_PARIF >> 8) & 0xff,
	BNXT_ULP_CF_IDX_DRV_FUNC_PARIF & 0xff}
	},
	/* class_tid: 4, , table: l2_cntxt_tcam_cache.egr_wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "src_property_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 4, , table: parif_def_arec_ptr.egr_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	/* class_tid: 4, , table: parif_def_err_arec_ptr.egr_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	/* class_tid: 5, , table: int_full_act_record.loopback */
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mod_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd1",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd0",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stats_op",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stats_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	(ULP_THOR_SYM_LOOPBACK_PORT >> 8) & 0xff,
	ULP_THOR_SYM_LOOPBACK_PORT & 0xff}
	},
	{
	.description = "use_default",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "cond_copy",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vlan_del_rpt",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 5, , table: l2_cntxt_tcam.vf_egr */
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_PROF_FUNC_ID & 0xff}
	},
	{
	.description = "ctxt_meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "def_ctxt_data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_LB_AREC_PTR >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_LB_AREC_PTR & 0xff}
	},
	{
	.description = "ctxt_opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR_SYM_CTXT_OPCODE_NORMAL_FLOW}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR_SYM_LOOPBACK_PARIF}
	},
	/* class_tid: 5, , table: l2_cntxt_tcam_cache.vf_egr_wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_L2_CNTXT_TCAM_INDEX_0 & 0xff}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_L2_CNTXT_ID_0 & 0xff}
	},
	{
	.description = "src_property_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 5, , table: parif_def_arec_ptr.vf_egr */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_LB_AREC_PTR >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_LB_AREC_PTR & 0xff}
	},
	/* class_tid: 5, , table: parif_def_err_arec_ptr.vf_egr */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_LB_AREC_PTR >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_LB_AREC_PTR & 0xff}
	},
	/* class_tid: 5, , table: int_full_act_record.vf_ing */
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mod_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd1",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd0",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stats_op",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stats_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_DRV_FUNC_VNIC >> 8) & 0xff,
	BNXT_ULP_CF_IDX_DRV_FUNC_VNIC & 0xff}
	},
	{
	.description = "use_default",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "cond_copy",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vlan_del_rpt",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 5, , table: ilt_tbl.vf_ing */
	{
	.description = "ilt_destination",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "fwd_op",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR_SYM_FWD_OP_BYPASS_LKUP}
	},
	{
	.description = "en_ilt_dest",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "en_bd_action",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "en_bd_meta",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 23,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 5, , table: ilt_tbl.vfr_egr */
	{
	.description = "ilt_destination",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "fwd_op",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR_SYM_FWD_OP_BYPASS_LKUP}
	},
	{
	.description = "en_ilt_dest",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "en_bd_action",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "en_bd_meta",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 23,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 5, , table: l2_cntxt_tcam_cache.vfr_wr_egr0 */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "l2_cntxt_tcam_index",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_property_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 5, , table: metadata_record.vfr_egr */
	{
	.description = "prof_meta_mask",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
	.field_opr1 = {
		0xff,
		0xff}
	},
	/* class_tid: 5, , table: mod_record.vfr_egr */
	{
	.description = "metadata_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "rem_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_update",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tun_md_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_smac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_sport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_dport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "metadata_data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
	BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff}
	},
	{
	.description = "metadata_rsvd",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "metadata_op",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "metadata_prof",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_METADATA_PROF_0 >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_METADATA_PROF_0 & 0xff}
	},
	{
	.description = "ivlan_tpid",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "ivlan_pri",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "ivlan_de",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "ivlan_vid",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "ovlan_tpid",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "ovlan_pri",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "ovlan_de",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "ovlan_vid",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "alt_pfid",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "alt_vid",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "ttl_rsvd",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "ttl_tl3_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "ttl_il3_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "ttl_tl3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "ttl_il3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "tun_new_prot",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "tun_ex_prot",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "tun_mv",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "reserved",
	.field_bit_size = 0,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "l2_dmac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "l2_smac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "l3_sip_ipv6",
	.field_bit_size = 128,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "l3_dip_ipv6",
	.field_bit_size = 128,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "l3_sip_ipv4",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "l3_dip_ipv4",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "l4_sport",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	{
	.description = "l4_dport",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SKIP
	},
	/* class_tid: 5, , table: int_full_act_record.vfr_egr */
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mod_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MODIFY_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MODIFY_PTR & 0xff}
	},
	{
	.description = "rsvd1",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd0",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stats_op",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stats_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	(ULP_THOR_SYM_LOOPBACK_PORT >> 8) & 0xff,
	ULP_THOR_SYM_LOOPBACK_PORT & 0xff}
	},
	{
	.description = "use_default",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "cond_copy",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vlan_del_rpt",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 5, , table: l2_cntxt_tcam.vfr_ing0 */
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_VFR_PROF_FUNC_0 >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_VFR_PROF_FUNC_0 & 0xff}
	},
	{
	.description = "ctxt_meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "def_ctxt_data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ctxt_opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR_SYM_CTXT_OPCODE_NORMAL_FLOW}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_DRV_FUNC_PARIF >> 8) & 0xff,
	BNXT_ULP_CF_IDX_DRV_FUNC_PARIF & 0xff}
	},
	/* class_tid: 5, , table: fkb_select.vfr_em */
	{
	.description = "l2_cntxt_id.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "parif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "spif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "svif.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "lcos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "rcyc_cnt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "loopback.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_l2type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_dmac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_smac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_dt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_sa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_nvt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ovt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_ivt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl2_etype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_l3type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_sip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_sip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_dip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_dip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ttl.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_prot.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_fid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_qos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_nonext.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_esp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_auth.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_dest.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_rthdr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_hop.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_ieh_1frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_df.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl3_l3err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_l4type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_src.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_dst.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_flags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_seq.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_pa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_opt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_tcpts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tl4_err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tuntype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tflags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tids.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tctxts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tctxt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tqos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "terr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_l2type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_smac.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_sa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_nvt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ovt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivd.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivv.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_ivt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_etype.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_l3type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_selcmp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ttl.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_prot.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_fid.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_qos.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_nonext.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_esp.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_auth.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_dest.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_rthdr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_hop.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_ieh_1frag.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_df.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_l3err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_l4type.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_src.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_dst.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_flags.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_seq.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_ack.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_win.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_pa.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_opt.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_tcpts.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_tsval.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_txecr.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_err.en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 5, , table: profile_tcam.vfr_ing0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "em_key_id",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_VFR_EM_KEY_ID_0 >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_VFR_EM_KEY_ID_0 & 0xff}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_VFR_EM_PROF_ID_0 >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_VFR_EM_PROF_ID_0 & 0xff}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* class_tid: 5, , table: int_full_act_record.vfr_ing0 */
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mod_rec_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd1",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd0",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stats_op",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stats_ptr",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_VF_FUNC_VNIC >> 8) & 0xff,
	BNXT_ULP_CF_IDX_VF_FUNC_VNIC & 0xff}
	},
	{
	.description = "use_default",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "cond_copy",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vlan_del_rpt",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* class_tid: 5, , table: em.vfr.0 */
	{
	.description = "valid",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	3}
	},
	{
	.description = "data",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "opcode",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meta_prof",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ctxt_data",
	.field_bit_size = 14,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	}
};

struct bnxt_ulp_mapper_ident_info ulp_thor_class_ident_list[] = {
	/* class_tid: 1, , table: port_table.rd */
	{
	.description = "default_arec_ptr",
	.regfile_idx = BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR,
	.ident_bit_size = 16,
	.ident_bit_pos = 136
	},
	{
	.description = "drv_func.parent.mac",
	.regfile_idx = BNXT_ULP_RF_IDX_DRV_FUNC_PARENT_MAC,
	.ident_bit_size = 48,
	.ident_bit_pos = 80
	},
	{
	.description = "phy_port",
	.regfile_idx = BNXT_ULP_RF_IDX_PHY_PORT,
	.ident_bit_size = 8,
	.ident_bit_pos = 128
	},
	/* class_tid: 1, , table: l2_cntxt_tcam_cache.rd */
	{
	.description = "l2_cntxt_id",
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 42
	},
	/* class_tid: 1, , table: mac_addr_cache.rd */
	{
	.description = "l2_cntxt_id",
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 42
	},
	/* class_tid: 1, , table: l2_cntxt_tcam.0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 29
	},
	/* class_tid: 1, , table: profile_tcam_cache.ipv6_rd */
	{
	.description = "em_key_id",
	.regfile_idx = BNXT_ULP_RF_IDX_EM_KEY_ID_0,
	.ident_bit_size = 8,
	.ident_bit_pos = 50
	},
	{
	.description = "em_profile_id",
	.regfile_idx = BNXT_ULP_RF_IDX_EM_PROFILE_ID_0,
	.ident_bit_size = 8,
	.ident_bit_pos = 42
	},
	{
	.description = "flow_sig_id",
	.regfile_idx = BNXT_ULP_RF_IDX_FLOW_SIG_ID,
	.ident_bit_size = 64,
	.ident_bit_pos = 74
	},
	{
	.description = "profile_tcam_index",
	.regfile_idx = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 32
	},
	/* class_tid: 1, , table: profile_tcam.l2_l3_l4_v6_em */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_RF_IDX_EM_PROFILE_ID_0,
	.ident_bit_size = 8,
	.ident_bit_pos = 23
	},
	/* class_tid: 1, , table: profile_tcam_cache.rd */
	{
	.description = "flow_sig_id",
	.regfile_idx = BNXT_ULP_RF_IDX_FLOW_SIG_ID,
	.ident_bit_size = 64,
	.ident_bit_pos = 74
	},
	{
	.description = "profile_tcam_index",
	.regfile_idx = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 32
	},
	/* class_tid: 2, , table: port_table.rd */
	{
	.description = "default_arec_ptr",
	.regfile_idx = BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR,
	.ident_bit_size = 16,
	.ident_bit_pos = 136
	},
	{
	.description = "drv_func.parent.mac",
	.regfile_idx = BNXT_ULP_RF_IDX_DRV_FUNC_PARENT_MAC,
	.ident_bit_size = 48,
	.ident_bit_pos = 80
	},
	{
	.description = "phy_port",
	.regfile_idx = BNXT_ULP_RF_IDX_PHY_PORT,
	.ident_bit_size = 8,
	.ident_bit_pos = 128
	},
	/* class_tid: 2, , table: tunnel_cache.rd */
	{
	.description = "l2_cntxt_id",
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 42
	},
	/* class_tid: 2, , table: l2_cntxt_tcam.1 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 29
	},
	/* class_tid: 2, , table: mac_addr_cache.rd */
	{
	.description = "l2_cntxt_id",
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 42
	},
	/* class_tid: 2, , table: profile_tcam_cache.f2_rd */
	{
	.description = "em_profile_id",
	.regfile_idx = BNXT_ULP_RF_IDX_EM_PROFILE_ID_0,
	.ident_bit_size = 8,
	.ident_bit_pos = 42
	},
	{
	.description = "flow_sig_id",
	.regfile_idx = BNXT_ULP_RF_IDX_FLOW_SIG_ID,
	.ident_bit_size = 64,
	.ident_bit_pos = 74
	},
	{
	.description = "profile_tcam_index",
	.regfile_idx = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 32
	},
	/* class_tid: 3, , table: l2_cntxt_tcam_cache.rd */
	{
	.description = "l2_cntxt_id",
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 42
	},
	/* class_tid: 3, , table: mac_addr_cache.rd */
	{
	.description = "l2_cntxt_id",
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 42
	},
	/* class_tid: 3, , table: port_table.egr.rd */
	{
	.description = "default_arec_ptr",
	.regfile_idx = BNXT_ULP_RF_IDX_DEFAULT_AREC_PTR,
	.ident_bit_size = 16,
	.ident_bit_pos = 136
	},
	{
	.description = "drv_func.parent.mac",
	.regfile_idx = BNXT_ULP_RF_IDX_DRV_FUNC_PARENT_MAC,
	.ident_bit_size = 48,
	.ident_bit_pos = 80
	},
	{
	.description = "phy_port",
	.regfile_idx = BNXT_ULP_RF_IDX_PHY_PORT,
	.ident_bit_size = 8,
	.ident_bit_pos = 128
	},
	/* class_tid: 3, , table: l2_cntxt_tcam.0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 29
	},
	/* class_tid: 3, , table: profile_tcam_cache.ipv6_rd */
	{
	.description = "em_key_id",
	.regfile_idx = BNXT_ULP_RF_IDX_EM_KEY_ID_0,
	.ident_bit_size = 8,
	.ident_bit_pos = 50
	},
	{
	.description = "em_profile_id",
	.regfile_idx = BNXT_ULP_RF_IDX_EM_PROFILE_ID_0,
	.ident_bit_size = 8,
	.ident_bit_pos = 42
	},
	{
	.description = "flow_sig_id",
	.regfile_idx = BNXT_ULP_RF_IDX_FLOW_SIG_ID,
	.ident_bit_size = 64,
	.ident_bit_pos = 74
	},
	{
	.description = "profile_tcam_index",
	.regfile_idx = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 32
	},
	/* class_tid: 3, , table: profile_tcam.l2_l3_l4_v6_em */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_RF_IDX_EM_PROFILE_ID_0,
	.ident_bit_size = 8,
	.ident_bit_pos = 23
	},
	/* class_tid: 3, , table: profile_tcam_cache.rd */
	{
	.description = "flow_sig_id",
	.regfile_idx = BNXT_ULP_RF_IDX_FLOW_SIG_ID,
	.ident_bit_size = 64,
	.ident_bit_pos = 74
	},
	{
	.description = "profile_tcam_index",
	.regfile_idx = BNXT_ULP_RF_IDX_PROFILE_TCAM_INDEX_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 32
	},
	/* class_tid: 4, , table: l2_cntxt_tcam.ing_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 29
	},
	/* class_tid: 4, , table: l2_cntxt_tcam.egr_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 29
	},
	/* class_tid: 5, , table: l2_cntxt_tcam.vf_egr */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 29
	},
	/* class_tid: 5, , table: l2_cntxt_tcam_cache.ing_wr_vfr */
	{
	.description = "rid",
	.regfile_idx = BNXT_ULP_RF_IDX_RID,
	.ident_bit_size = 32,
	.ident_bit_pos = 0
	}
};
