#include "aes_encrypt_top.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void aes_encrypt_top::thread_ap_clk_no_reset_() {
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp2_exit_iter0_state60.read()))) {
            ap_enable_reg_pp2_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
            ap_enable_reg_pp2_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp2_exit_iter0_state60.read())) {
                ap_enable_reg_pp2_iter1 = (ap_condition_pp2_exit_iter0_state60.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp2_iter1 = ap_enable_reg_pp2_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp2_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp2_iter2 = ap_enable_reg_pp2_iter1.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
            ap_enable_reg_pp2_iter2 = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        i1_reg_3323 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_4780_p2.read()) && 
                !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_4780_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_data_V_0_vld_out.read())))) {
        i1_reg_3323 = i_fu_4786_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        i3_reg_3506 = ap_const_lv5_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_6380_p2.read()))) {
        i3_reg_3506 = i_1_fu_6386_p2.read();
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        inStream_V_data_V_0_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_data_V_0_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_data_V_0_vld_out.read()))) {
            inStream_V_data_V_0_sel_rd =  (sc_logic) (~inStream_V_data_V_0_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        inStream_V_data_V_0_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_data_V_0_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_data_V_0_ack_in.read()))) {
            inStream_V_data_V_0_sel_wr =  (sc_logic) (~inStream_V_data_V_0_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        inStream_V_data_V_0_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_data_V_0_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_data_V_0_ack_out.read()) && 
              esl_seteq<1,2,2>(inStream_V_data_V_0_state.read(), ap_const_lv2_3)) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_data_V_0_vld_in.read()) && 
              esl_seteq<1,2,2>(inStream_V_data_V_0_state.read(), ap_const_lv2_2)))) {
            inStream_V_data_V_0_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_data_V_0_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_data_V_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(inStream_V_data_V_0_state.read(), ap_const_lv2_3)) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_data_V_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(inStream_V_data_V_0_state.read(), ap_const_lv2_1)))) {
            inStream_V_data_V_0_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_data_V_0_vld_in.read()) && 
                     esl_seteq<1,2,2>(inStream_V_data_V_0_state.read(), ap_const_lv2_2)) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_data_V_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(inStream_V_data_V_0_state.read(), ap_const_lv2_1)) || 
                    (esl_seteq<1,2,2>(inStream_V_data_V_0_state.read(), ap_const_lv2_3) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_data_V_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_data_V_0_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_data_V_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_data_V_0_ack_out.read()))))) {
            inStream_V_data_V_0_state = ap_const_lv2_3;
        } else {
            inStream_V_data_V_0_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        inStream_V_last_V_0_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_last_V_0_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_last_V_0_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, inStream_V_last_V_0_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_last_V_0_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, inStream_V_last_V_0_state.read())))) {
            inStream_V_last_V_0_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_last_V_0_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_last_V_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, inStream_V_last_V_0_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_last_V_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, inStream_V_last_V_0_state.read())))) {
            inStream_V_last_V_0_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_last_V_0_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, inStream_V_last_V_0_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_last_V_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, inStream_V_last_V_0_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, inStream_V_last_V_0_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_last_V_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_last_V_0_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_last_V_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_last_V_0_ack_out.read()))))) {
            inStream_V_last_V_0_state = ap_const_lv2_3;
        } else {
            inStream_V_last_V_0_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        outStream_V_data_V_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_data_V_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_data_V_1_vld_out.read()))) {
            outStream_V_data_V_1_sel_rd =  (sc_logic) (~outStream_V_data_V_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        outStream_V_data_V_1_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_data_V_1_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_data_V_1_ack_in.read()))) {
            outStream_V_data_V_1_sel_wr =  (sc_logic) (~outStream_V_data_V_1_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        outStream_V_data_V_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_data_V_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_data_V_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, outStream_V_data_V_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_data_V_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, outStream_V_data_V_1_state.read())))) {
            outStream_V_data_V_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_data_V_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_data_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, outStream_V_data_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_data_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, outStream_V_data_V_1_state.read())))) {
            outStream_V_data_V_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_data_V_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, outStream_V_data_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_data_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, outStream_V_data_V_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, outStream_V_data_V_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_data_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_data_V_1_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_data_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_data_V_1_ack_out.read()))))) {
            outStream_V_data_V_1_state = ap_const_lv2_3;
        } else {
            outStream_V_data_V_1_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        outStream_V_keep_V_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_keep_V_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_keep_V_1_vld_out.read()))) {
            outStream_V_keep_V_1_sel_rd =  (sc_logic) (~outStream_V_keep_V_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        outStream_V_keep_V_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_keep_V_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_keep_V_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, outStream_V_keep_V_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_keep_V_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, outStream_V_keep_V_1_state.read())))) {
            outStream_V_keep_V_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_keep_V_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_keep_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, outStream_V_keep_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_keep_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, outStream_V_keep_V_1_state.read())))) {
            outStream_V_keep_V_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_keep_V_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, outStream_V_keep_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_keep_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, outStream_V_keep_V_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, outStream_V_keep_V_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_keep_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_keep_V_1_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_keep_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_keep_V_1_ack_out.read()))))) {
            outStream_V_keep_V_1_state = ap_const_lv2_3;
        } else {
            outStream_V_keep_V_1_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        outStream_V_last_V_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_last_V_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_last_V_1_vld_out.read()))) {
            outStream_V_last_V_1_sel_rd =  (sc_logic) (~outStream_V_last_V_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        outStream_V_last_V_1_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_last_V_1_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_last_V_1_ack_in.read()))) {
            outStream_V_last_V_1_sel_wr =  (sc_logic) (~outStream_V_last_V_1_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        outStream_V_last_V_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_last_V_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_last_V_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, outStream_V_last_V_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_last_V_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, outStream_V_last_V_1_state.read())))) {
            outStream_V_last_V_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_last_V_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_last_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, outStream_V_last_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_last_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, outStream_V_last_V_1_state.read())))) {
            outStream_V_last_V_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_last_V_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, outStream_V_last_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_last_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, outStream_V_last_V_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, outStream_V_last_V_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_last_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_last_V_1_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_last_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_last_V_1_ack_out.read()))))) {
            outStream_V_last_V_1_state = ap_const_lv2_3;
        } else {
            outStream_V_last_V_1_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        outStream_V_strb_V_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_strb_V_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_strb_V_1_vld_out.read()))) {
            outStream_V_strb_V_1_sel_rd =  (sc_logic) (~outStream_V_strb_V_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        outStream_V_strb_V_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_strb_V_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_strb_V_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, outStream_V_strb_V_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_strb_V_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, outStream_V_strb_V_1_state.read())))) {
            outStream_V_strb_V_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_strb_V_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_strb_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, outStream_V_strb_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_strb_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, outStream_V_strb_V_1_state.read())))) {
            outStream_V_strb_V_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_strb_V_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, outStream_V_strb_V_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_strb_V_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, outStream_V_strb_V_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, outStream_V_strb_V_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_strb_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_strb_V_1_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_strb_V_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_strb_V_1_ack_out.read()))))) {
            outStream_V_strb_V_1_state = ap_const_lv2_3;
        } else {
            outStream_V_strb_V_1_state = ap_const_lv2_2;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        reg_3693 = sboxExp_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        reg_3693 = sboxExp_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()))) {
        reg_3698 = sboxExp_V_q1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()))) {
        reg_3698 = sboxExp_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        round_assign_reg_3494 = round_fu_6004_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        round_assign_reg_3494 = ap_const_lv4_1;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        state_V_0_1_reg_3474 = state_0_1_V_3_fu_5744_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        state_V_0_1_reg_3474 = state_0_1_V_reg_7578.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        state_V_0_2_reg_3464 = state_0_2_V_3_fu_5837_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        state_V_0_2_reg_3464 = state_0_2_V_reg_7618.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        state_V_0_3_reg_3454 = state_0_3_V_3_fu_5930_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        state_V_0_3_reg_3454 = state_0_3_V_reg_7658.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        state_V_1_1_reg_3434 = state_1_1_V_3_fu_5769_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        state_V_1_1_reg_3434 = state_1_1_V_reg_7583.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        state_V_1_2_reg_3424 = state_1_2_V_3_fu_5862_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        state_V_1_2_reg_3424 = state_1_2_V_reg_7623.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        state_V_1_3_reg_3414 = state_1_3_V_3_fu_5955_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        state_V_1_3_reg_3414 = state_1_3_V_reg_7663.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        state_V_1_reg_3444 = state_1_0_V_3_fu_5676_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        state_V_1_reg_3444 = state_1_0_V_reg_7543.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        state_V_2_1_reg_3394 = state_2_1_V_3_fu_5791_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        state_V_2_1_reg_3394 = state_2_1_V_reg_7598.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        state_V_2_2_reg_3384 = state_2_2_V_3_fu_5884_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        state_V_2_2_reg_3384 = state_2_2_V_reg_7638.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        state_V_2_3_reg_3374 = state_2_3_V_3_fu_5977_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        state_V_2_3_reg_3374 = state_2_3_V_fu_4872_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        state_V_2_reg_3404 = state_2_0_V_3_fu_5698_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        state_V_2_reg_3404 = state_2_0_V_reg_7558.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        state_V_3_1_reg_3354 = state_3_1_V_3_fu_5812_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        state_V_3_1_reg_3354 = state_3_1_V_reg_7603.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        state_V_3_2_reg_3344 = state_3_2_V_3_fu_5905_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        state_V_3_2_reg_3344 = state_3_2_V_reg_7643.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        state_V_3_3_reg_3334 = state_3_3_V_3_fu_5998_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        state_V_3_3_reg_3334 = state_3_3_V_fu_4877_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        state_V_3_reg_3364 = state_3_0_V_3_fu_5719_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        state_V_3_reg_3364 = state_3_0_V_reg_7563.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        state_V_reg_3484 = state_0_0_V_3_fu_5651_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read())) {
        state_V_reg_3484 = state_0_0_V_reg_7538.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        agg_result_V_i10_reg_8277 = agg_result_V_i10_fu_5442_p2.read();
        agg_result_V_i14_reg_8283 = agg_result_V_i14_fu_5470_p2.read();
        agg_result_V_i2_reg_8265 = agg_result_V_i2_fu_5386_p2.read();
        agg_result_V_i6_reg_8271 = agg_result_V_i6_fu_5414_p2.read();
        state_2_0_V_2_reg_8211 = state_2_0_V_2_fu_5330_p3.read();
        state_2_1_V_2_reg_8218 = state_2_1_V_2_fu_5337_p3.read();
        temp1_V_2_reg_8204 = temp1_V_2_fu_5323_p3.read();
        temp_V_7_reg_8197 = temp_V_7_fu_5316_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        agg_result_V_i12_reg_8023 = agg_result_V_i12_fu_5150_p2.read();
        agg_result_V_i4_reg_8011 = agg_result_V_i4_fu_5094_p2.read();
        agg_result_V_i8_reg_8017 = agg_result_V_i8_fu_5122_p2.read();
        agg_result_V_i_reg_8005 = agg_result_V_i_fu_5066_p2.read();
        roundKeys_0_V_load_reg_8029 = roundKeys_0_V_q1.read();
        roundKeys_10_V_load_reg_8079 = roundKeys_10_V_q1.read();
        roundKeys_11_V_load_reg_8084 = roundKeys_11_V_q1.read();
        roundKeys_12_V_load_reg_8089 = roundKeys_12_V_q1.read();
        roundKeys_13_V_load_reg_8094 = roundKeys_13_V_q1.read();
        roundKeys_14_V_load_reg_8099 = roundKeys_14_V_q1.read();
        roundKeys_15_V_load_reg_8104 = roundKeys_15_V_q1.read();
        roundKeys_1_V_load_reg_8034 = roundKeys_1_V_q1.read();
        roundKeys_2_V_load_reg_8039 = roundKeys_2_V_q1.read();
        roundKeys_3_V_load_reg_8044 = roundKeys_3_V_q1.read();
        roundKeys_4_V_load_reg_8049 = roundKeys_4_V_q1.read();
        roundKeys_5_V_load_reg_8054 = roundKeys_5_V_q1.read();
        roundKeys_6_V_load_reg_8059 = roundKeys_6_V_q1.read();
        roundKeys_7_V_load_reg_8064 = roundKeys_7_V_q1.read();
        roundKeys_8_V_load_reg_8069 = roundKeys_8_V_q1.read();
        roundKeys_9_V_load_reg_8074 = roundKeys_9_V_q1.read();
        state_0_0_V_1_reg_7941 = state_0_0_V_1_fu_4996_p3.read();
        state_0_1_V_1_reg_7947 = state_0_1_V_1_fu_5003_p3.read();
        state_0_2_V_1_reg_7953 = state_0_2_V_1_fu_5010_p3.read();
        state_0_3_V_1_reg_7959 = state_0_3_V_1_fu_5017_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        agg_result_V_i13_reg_8191 = agg_result_V_i13_fu_5310_p2.read();
        agg_result_V_i1_reg_8173 = agg_result_V_i1_fu_5226_p2.read();
        agg_result_V_i5_reg_8179 = agg_result_V_i5_fu_5254_p2.read();
        agg_result_V_i9_reg_8185 = agg_result_V_i9_fu_5282_p2.read();
        state_1_0_V_2_reg_8115 = state_1_0_V_2_fu_5163_p3.read();
        state_1_1_V_2_reg_8121 = state_1_1_V_2_fu_5170_p3.read();
        state_1_2_V_2_reg_8127 = state_1_2_V_2_fu_5177_p3.read();
        temp_V_6_reg_8109 = temp_V_6_fu_5156_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0))) {
        exitcond_reg_8604 = exitcond_fu_6380_p2.read();
        exitcond_reg_8604_pp2_iter1_reg = exitcond_reg_8604.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_data_V_0_load_A.read())) {
        inStream_V_data_V_0_payload_A = inStream_TDATA.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_data_V_0_load_B.read())) {
        inStream_V_data_V_0_payload_B = inStream_TDATA.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        key_V_load_10_reg_6647 = key_V_q0.read();
        ret_V_1_0_2_reg_6658 = ret_V_1_0_2_fu_3784_p2.read();
        ret_V_1_2_2_reg_6664 = ret_V_1_2_2_fu_3795_p2.read();
        ret_V_1_5_3_reg_6676 = ret_V_1_5_3_fu_3812_p2.read();
        ret_V_1_7_3_reg_6684 = ret_V_1_7_3_fu_3817_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        key_V_load_11_reg_6695 = key_V_q0.read();
        ret_V_1_2_3_reg_6701 = ret_V_1_2_3_fu_3839_p2.read();
        ret_V_1_4_3_reg_6719 = ret_V_1_4_3_fu_3867_p2.read();
        ret_V_1_4_reg_6713 = ret_V_1_4_fu_3862_p2.read();
        ret_V_1_5_reg_6725 = ret_V_1_5_fu_3873_p2.read();
        ret_V_1_7_reg_6733 = ret_V_1_7_fu_3878_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        key_V_load_12_reg_6408 = key_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        key_V_load_13_reg_6423 = key_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        key_V_load_14_reg_6438 = key_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        key_V_load_15_reg_6458 = key_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        key_V_load_1_reg_6480 = key_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        key_V_load_2_reg_6492 = key_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        key_V_load_3_reg_6504 = key_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        key_V_load_4_reg_6516 = key_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        key_V_load_5_reg_6529 = key_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        key_V_load_6_reg_6542 = key_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        key_V_load_7_reg_6560 = key_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        key_V_load_8_reg_6583 = key_V_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        key_V_load_9_reg_6600 = key_V_q0.read();
        ret_V_1_0_1_reg_6617 = ret_V_1_0_1_fu_3734_p2.read();
        ret_V_1_2_1_reg_6630 = ret_V_1_2_1_fu_3756_p2.read();
        ret_V_1_2_reg_6623 = ret_V_1_2_fu_3751_p2.read();
        ret_V_s_reg_6611 = ret_V_s_fu_3728_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        key_V_load_reg_6468 = key_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_i_fu_4882_p2.read()))) {
        newIndex18_reg_7746 = grp_fu_3561_p1.read().range(7, 1);
        newIndex22_reg_7756 = grp_fu_3572_p1.read().range(7, 1);
        newIndex26_reg_7766 = grp_fu_3583_p1.read().range(7, 1);
        newIndex30_reg_7776 = grp_fu_3594_p1.read().range(7, 1);
        newIndex34_reg_7786 = grp_fu_3605_p1.read().range(7, 1);
        newIndex38_reg_7796 = grp_fu_3616_p1.read().range(7, 1);
        newIndex42_reg_7806 = grp_fu_3627_p1.read().range(7, 1);
        newIndex46_reg_7816 = grp_fu_3638_p1.read().range(7, 1);
        newIndex50_reg_7826 = grp_fu_3649_p1.read().range(7, 1);
        newIndex54_reg_7836 = grp_fu_3660_p1.read().range(7, 1);
        newIndex58_reg_7846 = grp_fu_3671_p1.read().range(7, 1);
        newIndex62_reg_7856 = grp_fu_3682_p1.read().range(7, 1);
        tmp_25_reg_7681 = tmp_25_fu_4888_p1.read();
        tmp_26_reg_7696 = tmp_26_fu_4898_p1.read();
        tmp_27_reg_7711 = tmp_27_fu_4908_p1.read();
        tmp_28_reg_7726 = tmp_28_fu_4918_p1.read();
        tmp_29_reg_7741 = tmp_29_fu_4928_p1.read();
        tmp_30_reg_7751 = tmp_30_fu_4932_p1.read();
        tmp_31_reg_7761 = tmp_31_fu_4936_p1.read();
        tmp_32_reg_7771 = tmp_32_fu_4940_p1.read();
        tmp_33_reg_7781 = tmp_33_fu_4944_p1.read();
        tmp_34_reg_7791 = tmp_34_fu_4948_p1.read();
        tmp_35_reg_7801 = tmp_35_fu_4952_p1.read();
        tmp_36_reg_7811 = tmp_36_fu_4956_p1.read();
        tmp_37_reg_7821 = tmp_37_fu_4960_p1.read();
        tmp_38_reg_7831 = tmp_38_fu_4964_p1.read();
        tmp_39_reg_7841 = tmp_39_fu_4968_p1.read();
        tmp_40_reg_7851 = tmp_40_fu_4972_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_data_V_1_load_A.read())) {
        outStream_V_data_V_1_payload_A = output_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_data_V_1_load_B.read())) {
        outStream_V_data_V_1_payload_B = output_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_last_V_1_load_A.read())) {
        outStream_V_last_V_1_payload_A = val_last_V_reg_8618.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_last_V_1_load_B.read())) {
        outStream_V_last_V_1_payload_B = val_last_V_reg_8618.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()))) {
        reg_3703 = sboxExp_V_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        ret_V_1_10_1_reg_6832 = ret_V_1_10_1_fu_3986_p2.read();
        ret_V_1_10_3_reg_6839 = ret_V_1_10_3_fu_3990_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        ret_V_1_10_2_reg_6820 = ret_V_1_10_2_fu_3961_p2.read();
        ret_V_1_8_1_reg_6812 = ret_V_1_8_1_fu_3956_p2.read();
        ret_V_1_8_reg_6804 = ret_V_1_8_fu_3950_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        ret_V_1_12_1_reg_6868 = ret_V_1_12_1_fu_4041_p2.read();
        ret_V_1_13_1_reg_6874 = ret_V_1_13_1_fu_4046_p2.read();
        ret_V_1_15_1_reg_6882 = ret_V_1_15_1_fu_4051_p2.read();
        ret_V_1_s_reg_6856 = ret_V_1_s_fu_4026_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        ret_V_1_12_2_reg_6901 = ret_V_1_12_2_fu_4088_p2.read();
        ret_V_1_12_3_reg_6907 = ret_V_1_12_3_fu_4093_p2.read();
        ret_V_1_13_2_reg_6913 = ret_V_1_13_2_fu_4098_p2.read();
        ret_V_1_13_3_reg_6921 = ret_V_1_13_3_fu_4103_p2.read();
        ret_V_1_15_2_reg_6929 = ret_V_1_15_2_fu_4108_p2.read();
        ret_V_1_15_3_reg_6937 = ret_V_1_15_3_fu_4113_p2.read();
        ret_V_1_15_reg_6955 = ret_V_1_15_fu_4134_p2.read();
        ret_V_1_reg_6895 = ret_V_1_fu_4076_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ret_V_1_12_reg_6963 = ret_V_1_12_fu_4140_p2.read();
        ret_V_1_14_reg_6971 = ret_V_1_14_fu_4144_p2.read();
        ret_V_1_16_1_reg_6984 = ret_V_1_16_1_fu_4153_p2.read();
        ret_V_1_16_2_reg_6992 = ret_V_1_16_2_fu_4158_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        ret_V_1_16_3_reg_7000 = ret_V_1_16_3_fu_4173_p2.read();
        ret_V_1_18_1_reg_7008 = ret_V_1_18_1_fu_4178_p2.read();
        ret_V_1_18_2_reg_7015 = ret_V_1_18_2_fu_4182_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ret_V_1_17_reg_7032 = ret_V_1_17_fu_4228_p2.read();
        ret_V_1_18_3_reg_7039 = ret_V_1_18_3_fu_4232_p2.read();
        ret_V_1_19_reg_7056 = ret_V_1_19_fu_4264_p2.read();
        ret_V_1_20_1_reg_7062 = ret_V_1_20_1_fu_4269_p2.read();
        ret_V_1_20_reg_7068 = ret_V_1_20_fu_4274_p2.read();
        ret_V_1_21_1_reg_7077 = ret_V_1_21_1_fu_4279_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ret_V_1_20_2_reg_7086 = ret_V_1_20_2_fu_4294_p2.read();
        ret_V_1_20_3_reg_7092 = ret_V_1_20_3_fu_4299_p2.read();
        ret_V_1_21_2_reg_7098 = ret_V_1_21_2_fu_4304_p2.read();
        ret_V_1_21_3_reg_7106 = ret_V_1_21_3_fu_4309_p2.read();
        ret_V_1_23_1_reg_7115 = ret_V_1_23_1_fu_4314_p2.read();
        ret_V_1_23_2_reg_7121 = ret_V_1_23_2_fu_4318_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        ret_V_1_22_reg_7137 = ret_V_1_22_fu_4333_p2.read();
        ret_V_1_23_3_reg_7143 = ret_V_1_23_3_fu_4337_p2.read();
        ret_V_1_23_reg_7159 = ret_V_1_23_fu_4356_p2.read();
        ret_V_1_24_1_reg_7167 = ret_V_1_24_1_fu_4362_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        ret_V_1_24_2_reg_7175 = ret_V_1_24_2_fu_4372_p2.read();
        ret_V_1_24_3_reg_7183 = ret_V_1_24_3_fu_4377_p2.read();
        ret_V_1_26_1_reg_7191 = ret_V_1_26_1_fu_4382_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        ret_V_1_25_reg_7203 = ret_V_1_25_fu_4417_p2.read();
        ret_V_1_26_2_reg_7211 = ret_V_1_26_2_fu_4421_p2.read();
        ret_V_1_26_3_reg_7218 = ret_V_1_26_3_fu_4425_p2.read();
        ret_V_1_27_reg_7235 = ret_V_1_27_fu_4457_p2.read();
        ret_V_1_28_reg_7241 = ret_V_1_28_fu_4462_p2.read();
        ret_V_1_30_reg_7249 = ret_V_1_30_fu_4467_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        ret_V_1_28_1_reg_7262 = ret_V_1_28_1_fu_4492_p2.read();
        ret_V_1_28_2_reg_7268 = ret_V_1_28_2_fu_4497_p2.read();
        ret_V_1_29_1_reg_7274 = ret_V_1_29_1_fu_4502_p2.read();
        ret_V_1_29_2_reg_7282 = ret_V_1_29_2_fu_4507_p2.read();
        ret_V_1_31_1_reg_7290 = ret_V_1_31_1_fu_4512_p2.read();
        ret_V_1_31_2_reg_7297 = ret_V_1_31_2_fu_4517_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        ret_V_1_28_3_reg_7310 = ret_V_1_28_3_fu_4532_p2.read();
        ret_V_1_29_3_reg_7316 = ret_V_1_29_3_fu_4537_p2.read();
        ret_V_1_31_3_reg_7324 = ret_V_1_31_3_fu_4542_p2.read();
        ret_V_1_31_reg_7341 = ret_V_1_31_fu_4561_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ret_V_1_32_1_reg_7354 = ret_V_1_32_1_fu_4571_p2.read();
        ret_V_1_32_2_reg_7362 = ret_V_1_32_2_fu_4576_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        ret_V_1_32_3_reg_7370 = ret_V_1_32_3_fu_4591_p2.read();
        ret_V_1_34_1_reg_7378 = ret_V_1_34_1_fu_4596_p2.read();
        ret_V_1_34_2_reg_7384 = ret_V_1_34_2_fu_4600_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        ret_V_1_33_reg_7400 = ret_V_1_33_fu_4646_p2.read();
        ret_V_1_34_3_reg_7406 = ret_V_1_34_3_fu_4650_p2.read();
        ret_V_1_35_reg_7422 = ret_V_1_35_fu_4682_p2.read();
        ret_V_1_36_1_reg_7428 = ret_V_1_36_1_fu_4687_p2.read();
        ret_V_1_36_reg_7434 = ret_V_1_36_fu_4692_p2.read();
        ret_V_1_37_1_reg_7442 = ret_V_1_37_1_fu_4697_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        ret_V_1_36_2_reg_7450 = ret_V_1_36_2_fu_4712_p2.read();
        ret_V_1_36_3_reg_7455 = ret_V_1_36_3_fu_4718_p2.read();
        ret_V_1_37_2_reg_7460 = ret_V_1_37_2_fu_4724_p2.read();
        ret_V_1_37_3_reg_7465 = ret_V_1_37_3_fu_4730_p2.read();
        ret_V_1_37_reg_7470 = ret_V_1_37_fu_4736_p2.read();
        ret_V_1_38_1_reg_7475 = ret_V_1_38_1_fu_4741_p2.read();
        ret_V_1_38_2_reg_7480 = ret_V_1_38_2_fu_4746_p2.read();
        ret_V_1_38_3_reg_7485 = ret_V_1_38_3_fu_4752_p2.read();
        ret_V_1_38_reg_7490 = ret_V_1_38_fu_4758_p2.read();
        ret_V_1_39_1_reg_7495 = ret_V_1_39_1_fu_4763_p2.read();
        ret_V_1_39_2_reg_7500 = ret_V_1_39_2_fu_4768_p2.read();
        ret_V_1_39_3_reg_7505 = ret_V_1_39_3_fu_4774_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        ret_V_1_4_1_reg_6744 = ret_V_1_4_1_fu_3888_p2.read();
        ret_V_1_5_1_reg_6750 = ret_V_1_5_1_fu_3899_p2.read();
        ret_V_1_5_2_reg_6758 = ret_V_1_5_2_fu_3904_p2.read();
        ret_V_1_7_1_reg_6766 = ret_V_1_7_1_fu_3909_p2.read();
        ret_V_1_7_2_reg_6772 = ret_V_1_7_2_fu_3914_p2.read();
        ret_V_1_8_2_reg_6788 = ret_V_1_8_2_fu_3929_p2.read();
        ret_V_1_8_3_reg_6796 = ret_V_1_8_3_fu_3935_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        state_0_0_V_reg_7538 = state_0_0_V_fu_4802_p2.read();
        state_1_0_V_reg_7543 = state_1_0_V_fu_4807_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        state_0_1_V_2_reg_8544 = state_0_1_V_2_fu_6320_p2.read();
        state_0_2_V_2_reg_8564 = state_0_2_V_2_fu_6340_p2.read();
        state_0_3_V_2_reg_8584 = state_0_3_V_2_fu_6360_p2.read();
        state_1_1_V_1_reg_8549 = state_1_1_V_1_fu_6325_p2.read();
        state_1_2_V_1_reg_8569 = state_1_2_V_1_fu_6345_p2.read();
        state_1_3_V_1_reg_8589 = state_1_3_V_1_fu_6365_p2.read();
        state_2_0_V_1_reg_8534 = state_2_0_V_1_fu_6310_p2.read();
        state_2_1_V_1_reg_8554 = state_2_1_V_1_fu_6330_p2.read();
        state_2_2_V_1_reg_8574 = state_2_2_V_1_fu_6350_p2.read();
        state_2_3_V_1_reg_8594 = state_2_3_V_1_fu_6370_p2.read();
        state_3_0_V_1_reg_8539 = state_3_0_V_1_fu_6315_p2.read();
        state_3_1_V_1_reg_8559 = state_3_1_V_1_fu_6335_p2.read();
        state_3_2_V_1_reg_8579 = state_3_2_V_1_fu_6355_p2.read();
        state_3_3_V_1_reg_8599 = state_3_3_V_1_fu_6375_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        state_0_1_V_reg_7578 = state_0_1_V_fu_4822_p2.read();
        state_1_1_V_reg_7583 = state_1_1_V_fu_4827_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        state_0_2_V_reg_7618 = state_0_2_V_fu_4842_p2.read();
        state_1_2_V_reg_7623 = state_1_2_V_fu_4847_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        state_0_3_V_reg_7658 = state_0_3_V_fu_4862_p2.read();
        state_1_3_V_reg_7663 = state_1_3_V_fu_4867_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        state_2_0_V_reg_7558 = state_2_0_V_fu_4812_p2.read();
        state_3_0_V_reg_7563 = state_3_0_V_fu_4817_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        state_2_1_V_reg_7598 = state_2_1_V_fu_4832_p2.read();
        state_3_1_V_reg_7603 = state_3_1_V_fu_4837_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        state_2_2_V_reg_7638 = state_2_2_V_fu_4852_p2.read();
        state_3_2_V_reg_7643 = state_3_2_V_fu_4857_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_6380_p2.read()))) {
        val_last_V_reg_8618 = val_last_V_fu_6397_p2.read();
    }
}

void aes_encrypt_top::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state13;
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_fsm_state16;
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_state17;
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_fsm_state18;
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state19;
            break;
        case 262144 : 
            ap_NS_fsm = ap_ST_fsm_state20;
            break;
        case 524288 : 
            ap_NS_fsm = ap_ST_fsm_state21;
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state22;
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_state23;
            break;
        case 4194304 : 
            ap_NS_fsm = ap_ST_fsm_state24;
            break;
        case 8388608 : 
            ap_NS_fsm = ap_ST_fsm_state25;
            break;
        case 16777216 : 
            ap_NS_fsm = ap_ST_fsm_state26;
            break;
        case 33554432 : 
            ap_NS_fsm = ap_ST_fsm_state27;
            break;
        case 67108864 : 
            ap_NS_fsm = ap_ST_fsm_state28;
            break;
        case 134217728 : 
            ap_NS_fsm = ap_ST_fsm_state29;
            break;
        case 268435456 : 
            ap_NS_fsm = ap_ST_fsm_state30;
            break;
        case 536870912 : 
            ap_NS_fsm = ap_ST_fsm_state31;
            break;
        case 1073741824 : 
            ap_NS_fsm = ap_ST_fsm_state32;
            break;
        case 2147483648 : 
            ap_NS_fsm = ap_ST_fsm_state33;
            break;
        case 4294967296 : 
            ap_NS_fsm = ap_ST_fsm_state34;
            break;
        case 8589934592 : 
            ap_NS_fsm = ap_ST_fsm_state35;
            break;
        case 17179869184 : 
            ap_NS_fsm = ap_ST_fsm_state36;
            break;
        case 34359738368 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_4780_p2.read()) && !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_4780_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_data_V_0_vld_out.read())))) {
                ap_NS_fsm = ap_ST_fsm_state36;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) && !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_4780_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_data_V_0_vld_out.read())) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_4780_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state37;
            } else {
                ap_NS_fsm = ap_ST_fsm_state36;
            }
            break;
        case 68719476736 : 
            ap_NS_fsm = ap_ST_fsm_state38;
            break;
        case 137438953472 : 
            ap_NS_fsm = ap_ST_fsm_state39;
            break;
        case 274877906944 : 
            ap_NS_fsm = ap_ST_fsm_state40;
            break;
        case 549755813888 : 
            ap_NS_fsm = ap_ST_fsm_state41;
            break;
        case 1099511627776 : 
            ap_NS_fsm = ap_ST_fsm_state42;
            break;
        case 2199023255552 : 
            ap_NS_fsm = ap_ST_fsm_state43;
            break;
        case 4398046511104 : 
            ap_NS_fsm = ap_ST_fsm_state44;
            break;
        case 8796093022208 : 
            ap_NS_fsm = ap_ST_fsm_state45;
            break;
        case 17592186044416 : 
            ap_NS_fsm = ap_ST_fsm_state46;
            break;
        case 35184372088832 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_i_fu_4882_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state47;
            } else {
                ap_NS_fsm = ap_ST_fsm_state51;
            }
            break;
        case 70368744177664 : 
            ap_NS_fsm = ap_ST_fsm_state48;
            break;
        case 140737488355328 : 
            ap_NS_fsm = ap_ST_fsm_state49;
            break;
        case 281474976710656 : 
            ap_NS_fsm = ap_ST_fsm_state50;
            break;
        case 562949953421312 : 
            ap_NS_fsm = ap_ST_fsm_state46;
            break;
        case 1125899906842624 : 
            ap_NS_fsm = ap_ST_fsm_state52;
            break;
        case 2251799813685248 : 
            ap_NS_fsm = ap_ST_fsm_state53;
            break;
        case 4503599627370496 : 
            ap_NS_fsm = ap_ST_fsm_state54;
            break;
        case 9007199254740992 : 
            ap_NS_fsm = ap_ST_fsm_state55;
            break;
        case 18014398509481984 : 
            ap_NS_fsm = ap_ST_fsm_state56;
            break;
        case 36028797018963968 : 
            ap_NS_fsm = ap_ST_fsm_state57;
            break;
        case 72057594037927936 : 
            ap_NS_fsm = ap_ST_fsm_state58;
            break;
        case 144115188075855872 : 
            ap_NS_fsm = ap_ST_fsm_state59;
            break;
        case 288230376151711744 : 
            ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            break;
        case 576460752303423488 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp2_iter1.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_6380_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp2_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
  esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp2_iter1.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp2_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_6380_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp2_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state63;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp2_stage0;
            }
            break;
        case 1152921504606846976 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_data_V_1_state.read()[0]) && esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_keep_V_1_state.read()[0]) && esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_strb_V_1_state.read()[0]) && esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_last_V_1_state.read()[0]) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_keep_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_strb_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_last_V_1_ack_in.read())))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state63;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<61>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

