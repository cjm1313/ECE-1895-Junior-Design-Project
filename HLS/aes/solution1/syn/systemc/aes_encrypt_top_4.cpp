#include "aes_encrypt_top.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void aes_encrypt_top::thread_agg_result_V_i10_fu_5442_p2() {
    agg_result_V_i10_fu_5442_p2 = (p_i10_cast_cast_fu_5434_p3.read() ^ r_V_10_fu_5420_p2.read());
}

void aes_encrypt_top::thread_agg_result_V_i11_fu_5590_p2() {
    agg_result_V_i11_fu_5590_p2 = (p_i11_cast_cast_fu_5582_p3.read() ^ r_V_11_fu_5568_p2.read());
}

void aes_encrypt_top::thread_agg_result_V_i12_fu_5150_p2() {
    agg_result_V_i12_fu_5150_p2 = (p_i12_cast_cast_fu_5142_p3.read() ^ r_V_12_fu_5128_p2.read());
}

void aes_encrypt_top::thread_agg_result_V_i13_fu_5310_p2() {
    agg_result_V_i13_fu_5310_p2 = (p_i13_cast_cast_fu_5302_p3.read() ^ r_V_13_fu_5288_p2.read());
}

void aes_encrypt_top::thread_agg_result_V_i14_fu_5470_p2() {
    agg_result_V_i14_fu_5470_p2 = (p_i14_cast_cast_fu_5462_p3.read() ^ r_V_14_fu_5448_p2.read());
}

void aes_encrypt_top::thread_agg_result_V_i15_fu_5622_p2() {
    agg_result_V_i15_fu_5622_p2 = (p_i15_cast_cast_fu_5614_p3.read() ^ r_V_15_fu_5600_p2.read());
}

void aes_encrypt_top::thread_agg_result_V_i1_fu_5226_p2() {
    agg_result_V_i1_fu_5226_p2 = (p_i1_cast_cast_fu_5218_p3.read() ^ r_V_1_fu_5204_p2.read());
}

void aes_encrypt_top::thread_agg_result_V_i2_fu_5386_p2() {
    agg_result_V_i2_fu_5386_p2 = (p_i2_cast_cast_fu_5378_p3.read() ^ r_V_2_fu_5364_p2.read());
}

void aes_encrypt_top::thread_agg_result_V_i3_fu_5526_p2() {
    agg_result_V_i3_fu_5526_p2 = (p_i3_cast_cast_fu_5518_p3.read() ^ r_V_3_fu_5504_p2.read());
}

void aes_encrypt_top::thread_agg_result_V_i4_fu_5094_p2() {
    agg_result_V_i4_fu_5094_p2 = (p_i4_cast_cast_fu_5086_p3.read() ^ r_V_4_fu_5072_p2.read());
}

void aes_encrypt_top::thread_agg_result_V_i5_fu_5254_p2() {
    agg_result_V_i5_fu_5254_p2 = (p_i5_cast_cast_fu_5246_p3.read() ^ r_V_5_fu_5232_p2.read());
}

void aes_encrypt_top::thread_agg_result_V_i6_fu_5414_p2() {
    agg_result_V_i6_fu_5414_p2 = (p_i6_cast_cast_fu_5406_p3.read() ^ r_V_6_fu_5392_p2.read());
}

void aes_encrypt_top::thread_agg_result_V_i7_fu_5558_p2() {
    agg_result_V_i7_fu_5558_p2 = (p_i7_cast_cast_fu_5550_p3.read() ^ r_V_7_fu_5536_p2.read());
}

void aes_encrypt_top::thread_agg_result_V_i8_fu_5122_p2() {
    agg_result_V_i8_fu_5122_p2 = (p_i8_cast_cast_fu_5114_p3.read() ^ r_V_8_fu_5100_p2.read());
}

void aes_encrypt_top::thread_agg_result_V_i9_fu_5282_p2() {
    agg_result_V_i9_fu_5282_p2 = (p_i9_cast_cast_fu_5274_p3.read() ^ r_V_9_fu_5260_p2.read());
}

void aes_encrypt_top::thread_agg_result_V_i_fu_5066_p2() {
    agg_result_V_i_fu_5066_p2 = (p_i_cast_cast_fu_5058_p3.read() ^ r_V_fu_5044_p2.read());
}

void aes_encrypt_top::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[59];
}

void aes_encrypt_top::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void aes_encrypt_top::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void aes_encrypt_top::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void aes_encrypt_top::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void aes_encrypt_top::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[12];
}

void aes_encrypt_top::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[13];
}

void aes_encrypt_top::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void aes_encrypt_top::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void aes_encrypt_top::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void aes_encrypt_top::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void aes_encrypt_top::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[18];
}

void aes_encrypt_top::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void aes_encrypt_top::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[19];
}

void aes_encrypt_top::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[20];
}

void aes_encrypt_top::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[21];
}

void aes_encrypt_top::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[22];
}

void aes_encrypt_top::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[23];
}

void aes_encrypt_top::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[24];
}

void aes_encrypt_top::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[25];
}

void aes_encrypt_top::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[26];
}

void aes_encrypt_top::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[27];
}

void aes_encrypt_top::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[28];
}

void aes_encrypt_top::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void aes_encrypt_top::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[29];
}

void aes_encrypt_top::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[30];
}

void aes_encrypt_top::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[31];
}

void aes_encrypt_top::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[32];
}

void aes_encrypt_top::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[33];
}

void aes_encrypt_top::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[34];
}

void aes_encrypt_top::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[35];
}

void aes_encrypt_top::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[36];
}

void aes_encrypt_top::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[37];
}

void aes_encrypt_top::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[38];
}

void aes_encrypt_top::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void aes_encrypt_top::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[39];
}

void aes_encrypt_top::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[40];
}

void aes_encrypt_top::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[41];
}

void aes_encrypt_top::thread_ap_CS_fsm_state43() {
    ap_CS_fsm_state43 = ap_CS_fsm.read()[42];
}

void aes_encrypt_top::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[43];
}

void aes_encrypt_top::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[44];
}

void aes_encrypt_top::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[45];
}

void aes_encrypt_top::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[46];
}

void aes_encrypt_top::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[47];
}

void aes_encrypt_top::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[48];
}

void aes_encrypt_top::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void aes_encrypt_top::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[49];
}

void aes_encrypt_top::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[50];
}

void aes_encrypt_top::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[51];
}

void aes_encrypt_top::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[52];
}

void aes_encrypt_top::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[53];
}

void aes_encrypt_top::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[54];
}

void aes_encrypt_top::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[55];
}

void aes_encrypt_top::thread_ap_CS_fsm_state57() {
    ap_CS_fsm_state57 = ap_CS_fsm.read()[56];
}

void aes_encrypt_top::thread_ap_CS_fsm_state58() {
    ap_CS_fsm_state58 = ap_CS_fsm.read()[57];
}

void aes_encrypt_top::thread_ap_CS_fsm_state59() {
    ap_CS_fsm_state59 = ap_CS_fsm.read()[58];
}

void aes_encrypt_top::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void aes_encrypt_top::thread_ap_CS_fsm_state63() {
    ap_CS_fsm_state63 = ap_CS_fsm.read()[60];
}

void aes_encrypt_top::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void aes_encrypt_top::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void aes_encrypt_top::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void aes_encrypt_top::thread_ap_block_pp2_stage0() {
    ap_block_pp2_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void aes_encrypt_top::thread_ap_block_pp2_stage0_01001() {
    ap_block_pp2_stage0_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void aes_encrypt_top::thread_ap_block_pp2_stage0_11001() {
    ap_block_pp2_stage0_11001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state61_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state62_io.read())));
}

void aes_encrypt_top::thread_ap_block_pp2_stage0_subdone() {
    ap_block_pp2_stage0_subdone = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state61_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state62_io.read())));
}

void aes_encrypt_top::thread_ap_block_state36() {
    ap_block_state36 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_4780_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_data_V_0_vld_out.read()));
}

void aes_encrypt_top::thread_ap_block_state60_pp2_stage0_iter0() {
    ap_block_state60_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void aes_encrypt_top::thread_ap_block_state61_io() {
    ap_block_state61_io = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_8604.read()) && esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_data_V_1_ack_in.read()));
}

void aes_encrypt_top::thread_ap_block_state61_pp2_stage0_iter1() {
    ap_block_state61_pp2_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void aes_encrypt_top::thread_ap_block_state62_io() {
    ap_block_state62_io = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_8604_pp2_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_data_V_1_ack_in.read()));
}

void aes_encrypt_top::thread_ap_block_state62_pp2_stage0_iter2() {
    ap_block_state62_pp2_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void aes_encrypt_top::thread_ap_block_state63() {
    ap_block_state63 = (esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_keep_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_strb_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_last_V_1_ack_in.read()));
}

void aes_encrypt_top::thread_ap_condition_pp2_exit_iter0_state60() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_6380_p2.read())) {
        ap_condition_pp2_exit_iter0_state60 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state60 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_data_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_keep_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_strb_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_last_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_keep_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_strb_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_last_V_1_ack_in.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void aes_encrypt_top::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter2.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_ap_phi_mux_state_V_0_1_phi_fu_3477_p4() {
    ap_phi_mux_state_V_0_1_phi_fu_3477_p4 = state_V_0_1_reg_3474.read();
}

void aes_encrypt_top::thread_ap_phi_mux_state_V_0_2_phi_fu_3467_p4() {
    ap_phi_mux_state_V_0_2_phi_fu_3467_p4 = state_V_0_2_reg_3464.read();
}

void aes_encrypt_top::thread_ap_phi_mux_state_V_0_3_phi_fu_3457_p4() {
    ap_phi_mux_state_V_0_3_phi_fu_3457_p4 = state_V_0_3_reg_3454.read();
}

void aes_encrypt_top::thread_ap_phi_mux_state_V_1_1_phi_fu_3437_p4() {
    ap_phi_mux_state_V_1_1_phi_fu_3437_p4 = state_V_1_1_reg_3434.read();
}

void aes_encrypt_top::thread_ap_phi_mux_state_V_1_2_phi_fu_3427_p4() {
    ap_phi_mux_state_V_1_2_phi_fu_3427_p4 = state_V_1_2_reg_3424.read();
}

void aes_encrypt_top::thread_ap_phi_mux_state_V_1_3_phi_fu_3417_p4() {
    ap_phi_mux_state_V_1_3_phi_fu_3417_p4 = state_V_1_3_reg_3414.read();
}

void aes_encrypt_top::thread_ap_phi_mux_state_V_1_phi_fu_3447_p4() {
    ap_phi_mux_state_V_1_phi_fu_3447_p4 = state_V_1_reg_3444.read();
}

void aes_encrypt_top::thread_ap_phi_mux_state_V_2_1_phi_fu_3397_p4() {
    ap_phi_mux_state_V_2_1_phi_fu_3397_p4 = state_V_2_1_reg_3394.read();
}

void aes_encrypt_top::thread_ap_phi_mux_state_V_2_2_phi_fu_3387_p4() {
    ap_phi_mux_state_V_2_2_phi_fu_3387_p4 = state_V_2_2_reg_3384.read();
}

void aes_encrypt_top::thread_ap_phi_mux_state_V_2_3_phi_fu_3377_p4() {
    ap_phi_mux_state_V_2_3_phi_fu_3377_p4 = state_V_2_3_reg_3374.read();
}

void aes_encrypt_top::thread_ap_phi_mux_state_V_2_phi_fu_3407_p4() {
    ap_phi_mux_state_V_2_phi_fu_3407_p4 = state_V_2_reg_3404.read();
}

void aes_encrypt_top::thread_ap_phi_mux_state_V_3_1_phi_fu_3357_p4() {
    ap_phi_mux_state_V_3_1_phi_fu_3357_p4 = state_V_3_1_reg_3354.read();
}

void aes_encrypt_top::thread_ap_phi_mux_state_V_3_2_phi_fu_3347_p4() {
    ap_phi_mux_state_V_3_2_phi_fu_3347_p4 = state_V_3_2_reg_3344.read();
}

void aes_encrypt_top::thread_ap_phi_mux_state_V_3_3_phi_fu_3337_p4() {
    ap_phi_mux_state_V_3_3_phi_fu_3337_p4 = state_V_3_3_reg_3334.read();
}

void aes_encrypt_top::thread_ap_phi_mux_state_V_3_phi_fu_3367_p4() {
    ap_phi_mux_state_V_3_phi_fu_3367_p4 = state_V_3_reg_3364.read();
}

void aes_encrypt_top::thread_ap_phi_mux_state_V_phi_fu_3487_p4() {
    ap_phi_mux_state_V_phi_fu_3487_p4 = state_V_reg_3484.read();
}

void aes_encrypt_top::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_data_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_keep_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_strb_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_last_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state63.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_keep_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_strb_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, outStream_V_last_V_1_ack_in.read())))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void aes_encrypt_top::thread_exitcond1_fu_4780_p2() {
    exitcond1_fu_4780_p2 = (!i1_reg_3323.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i1_reg_3323.read() == ap_const_lv5_10);
}

void aes_encrypt_top::thread_exitcond8_i_fu_4882_p2() {
    exitcond8_i_fu_4882_p2 = (!round_assign_reg_3494.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(round_assign_reg_3494.read() == ap_const_lv4_A);
}

void aes_encrypt_top::thread_exitcond_fu_6380_p2() {
    exitcond_fu_6380_p2 = (!i3_reg_3506.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i3_reg_3506.read() == ap_const_lv5_10);
}

void aes_encrypt_top::thread_grp_fu_3517_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3517_p1 = state_V_reg_3484.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3517_p1 = ap_phi_mux_state_V_phi_fu_3487_p4.read();
    } else {
        grp_fu_3517_p1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_grp_fu_3517_p4() {
    grp_fu_3517_p4 = grp_fu_3517_p1.read().range(7, 1);
}

void aes_encrypt_top::thread_grp_fu_3528_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3528_p1 = state_V_0_1_reg_3474.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3528_p1 = ap_phi_mux_state_V_0_1_phi_fu_3477_p4.read();
    } else {
        grp_fu_3528_p1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_grp_fu_3528_p4() {
    grp_fu_3528_p4 = grp_fu_3528_p1.read().range(7, 1);
}

void aes_encrypt_top::thread_grp_fu_3539_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3539_p1 = state_V_0_2_reg_3464.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3539_p1 = ap_phi_mux_state_V_0_2_phi_fu_3467_p4.read();
    } else {
        grp_fu_3539_p1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_grp_fu_3539_p4() {
    grp_fu_3539_p4 = grp_fu_3539_p1.read().range(7, 1);
}

void aes_encrypt_top::thread_grp_fu_3550_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3550_p1 = state_V_0_3_reg_3454.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3550_p1 = ap_phi_mux_state_V_0_3_phi_fu_3457_p4.read();
    } else {
        grp_fu_3550_p1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_grp_fu_3550_p4() {
    grp_fu_3550_p4 = grp_fu_3550_p1.read().range(7, 1);
}

void aes_encrypt_top::thread_grp_fu_3561_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3561_p1 = state_V_1_reg_3444.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3561_p1 = ap_phi_mux_state_V_1_phi_fu_3447_p4.read();
    } else {
        grp_fu_3561_p1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_grp_fu_3561_p4() {
    grp_fu_3561_p4 = grp_fu_3561_p1.read().range(7, 1);
}

void aes_encrypt_top::thread_grp_fu_3572_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3572_p1 = state_V_1_1_reg_3434.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3572_p1 = ap_phi_mux_state_V_1_1_phi_fu_3437_p4.read();
    } else {
        grp_fu_3572_p1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_grp_fu_3572_p4() {
    grp_fu_3572_p4 = grp_fu_3572_p1.read().range(7, 1);
}

void aes_encrypt_top::thread_grp_fu_3583_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3583_p1 = state_V_1_2_reg_3424.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3583_p1 = ap_phi_mux_state_V_1_2_phi_fu_3427_p4.read();
    } else {
        grp_fu_3583_p1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_grp_fu_3583_p4() {
    grp_fu_3583_p4 = grp_fu_3583_p1.read().range(7, 1);
}

void aes_encrypt_top::thread_grp_fu_3594_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3594_p1 = state_V_1_3_reg_3414.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3594_p1 = ap_phi_mux_state_V_1_3_phi_fu_3417_p4.read();
    } else {
        grp_fu_3594_p1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_grp_fu_3594_p4() {
    grp_fu_3594_p4 = grp_fu_3594_p1.read().range(7, 1);
}

void aes_encrypt_top::thread_grp_fu_3605_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3605_p1 = state_V_2_reg_3404.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3605_p1 = ap_phi_mux_state_V_2_phi_fu_3407_p4.read();
    } else {
        grp_fu_3605_p1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_grp_fu_3605_p4() {
    grp_fu_3605_p4 = grp_fu_3605_p1.read().range(7, 1);
}

void aes_encrypt_top::thread_grp_fu_3616_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3616_p1 = state_V_2_1_reg_3394.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3616_p1 = ap_phi_mux_state_V_2_1_phi_fu_3397_p4.read();
    } else {
        grp_fu_3616_p1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_grp_fu_3616_p4() {
    grp_fu_3616_p4 = grp_fu_3616_p1.read().range(7, 1);
}

void aes_encrypt_top::thread_grp_fu_3627_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3627_p1 = state_V_2_2_reg_3384.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3627_p1 = ap_phi_mux_state_V_2_2_phi_fu_3387_p4.read();
    } else {
        grp_fu_3627_p1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_grp_fu_3627_p4() {
    grp_fu_3627_p4 = grp_fu_3627_p1.read().range(7, 1);
}

void aes_encrypt_top::thread_grp_fu_3638_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3638_p1 = state_V_2_3_reg_3374.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3638_p1 = ap_phi_mux_state_V_2_3_phi_fu_3377_p4.read();
    } else {
        grp_fu_3638_p1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_grp_fu_3638_p4() {
    grp_fu_3638_p4 = grp_fu_3638_p1.read().range(7, 1);
}

void aes_encrypt_top::thread_grp_fu_3649_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3649_p1 = state_V_3_reg_3364.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3649_p1 = ap_phi_mux_state_V_3_phi_fu_3367_p4.read();
    } else {
        grp_fu_3649_p1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_grp_fu_3649_p4() {
    grp_fu_3649_p4 = grp_fu_3649_p1.read().range(7, 1);
}

void aes_encrypt_top::thread_grp_fu_3660_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3660_p1 = state_V_3_1_reg_3354.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3660_p1 = ap_phi_mux_state_V_3_1_phi_fu_3357_p4.read();
    } else {
        grp_fu_3660_p1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_grp_fu_3660_p4() {
    grp_fu_3660_p4 = grp_fu_3660_p1.read().range(7, 1);
}

void aes_encrypt_top::thread_grp_fu_3671_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3671_p1 = state_V_3_2_reg_3344.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3671_p1 = ap_phi_mux_state_V_3_2_phi_fu_3347_p4.read();
    } else {
        grp_fu_3671_p1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_grp_fu_3671_p4() {
    grp_fu_3671_p4 = grp_fu_3671_p1.read().range(7, 1);
}

void aes_encrypt_top::thread_grp_fu_3682_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        grp_fu_3682_p1 = state_V_3_3_reg_3334.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        grp_fu_3682_p1 = ap_phi_mux_state_V_3_3_phi_fu_3337_p4.read();
    } else {
        grp_fu_3682_p1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_grp_fu_3682_p4() {
    grp_fu_3682_p4 = grp_fu_3682_p1.read().range(7, 1);
}

void aes_encrypt_top::thread_i_1_fu_6386_p2() {
    i_1_fu_6386_p2 = (!i3_reg_3506.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i3_reg_3506.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void aes_encrypt_top::thread_i_fu_4786_p2() {
    i_fu_4786_p2 = (!i1_reg_3323.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i1_reg_3323.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void aes_encrypt_top::thread_inStream_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_4780_p2.read()))) {
        inStream_TDATA_blk_n = inStream_V_data_V_0_state.read()[0];
    } else {
        inStream_TDATA_blk_n = ap_const_logic_1;
    }
}

void aes_encrypt_top::thread_inStream_TREADY() {
    inStream_TREADY = inStream_V_last_V_0_state.read()[1];
}

void aes_encrypt_top::thread_inStream_V_data_V_0_ack_in() {
    inStream_V_data_V_0_ack_in = inStream_V_data_V_0_state.read()[1];
}

void aes_encrypt_top::thread_inStream_V_data_V_0_ack_out() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_4780_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_4780_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_data_V_0_vld_out.read())))) {
        inStream_V_data_V_0_ack_out = ap_const_logic_1;
    } else {
        inStream_V_data_V_0_ack_out = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_inStream_V_data_V_0_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, inStream_V_data_V_0_sel.read())) {
        inStream_V_data_V_0_data_out = inStream_V_data_V_0_payload_B.read();
    } else {
        inStream_V_data_V_0_data_out = inStream_V_data_V_0_payload_A.read();
    }
}

void aes_encrypt_top::thread_inStream_V_data_V_0_load_A() {
    inStream_V_data_V_0_load_A = (inStream_V_data_V_0_state_cmp_full.read() & ~inStream_V_data_V_0_sel_wr.read());
}

void aes_encrypt_top::thread_inStream_V_data_V_0_load_B() {
    inStream_V_data_V_0_load_B = (inStream_V_data_V_0_sel_wr.read() & inStream_V_data_V_0_state_cmp_full.read());
}

void aes_encrypt_top::thread_inStream_V_data_V_0_sel() {
    inStream_V_data_V_0_sel = inStream_V_data_V_0_sel_rd.read();
}

void aes_encrypt_top::thread_inStream_V_data_V_0_state_cmp_full() {
    inStream_V_data_V_0_state_cmp_full =  (sc_logic) ((!inStream_V_data_V_0_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(inStream_V_data_V_0_state.read() != ap_const_lv2_1))[0];
}

void aes_encrypt_top::thread_inStream_V_data_V_0_vld_in() {
    inStream_V_data_V_0_vld_in = inStream_TVALID.read();
}

void aes_encrypt_top::thread_inStream_V_data_V_0_vld_out() {
    inStream_V_data_V_0_vld_out = inStream_V_data_V_0_state.read()[0];
}

void aes_encrypt_top::thread_inStream_V_last_V_0_ack_out() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_4780_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_4780_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_data_V_0_vld_out.read())))) {
        inStream_V_last_V_0_ack_out = ap_const_logic_1;
    } else {
        inStream_V_last_V_0_ack_out = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_inStream_V_last_V_0_vld_in() {
    inStream_V_last_V_0_vld_in = inStream_TVALID.read();
}

void aes_encrypt_top::thread_input_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        input_V_address0 =  (sc_lv<4>) (ap_const_lv64_F);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        input_V_address0 =  (sc_lv<4>) (ap_const_lv64_D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        input_V_address0 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        input_V_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        input_V_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        input_V_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        input_V_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        input_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        input_V_address0 =  (sc_lv<4>) (tmp_4_fu_4797_p1.read());
    } else {
        input_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_input_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        input_V_address1 =  (sc_lv<4>) (ap_const_lv64_E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        input_V_address1 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        input_V_address1 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        input_V_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        input_V_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        input_V_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        input_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        input_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        input_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_input_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_4780_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_data_V_0_vld_out.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()))) {
        input_V_ce0 = ap_const_logic_1;
    } else {
        input_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_input_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()))) {
        input_V_ce1 = ap_const_logic_1;
    } else {
        input_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_input_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_4780_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_4780_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, inStream_V_data_V_0_vld_out.read())))) {
        input_V_we0 = ap_const_logic_1;
    } else {
        input_V_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_key_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        key_V_address0 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        key_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        key_V_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        key_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        key_V_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        key_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        key_V_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        key_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        key_V_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        key_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        key_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        key_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        key_V_address0 =  (sc_lv<4>) (ap_const_lv64_F);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        key_V_address0 =  (sc_lv<4>) (ap_const_lv64_E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        key_V_address0 =  (sc_lv<4>) (ap_const_lv64_D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        key_V_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else {
        key_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_key_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()))) {
        key_V_ce0 = ap_const_logic_1;
    } else {
        key_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_newIndex11_fu_4912_p1() {
    newIndex11_fu_4912_p1 = esl_zext<64,7>(grp_fu_3539_p4.read());
}

void aes_encrypt_top::thread_newIndex13_fu_6028_p1() {
    newIndex13_fu_6028_p1 = esl_zext<64,7>(grp_fu_3550_p4.read());
}

void aes_encrypt_top::thread_newIndex15_fu_4922_p1() {
    newIndex15_fu_4922_p1 = esl_zext<64,7>(grp_fu_3550_p4.read());
}

void aes_encrypt_top::thread_newIndex17_fu_6034_p1() {
    newIndex17_fu_6034_p1 = esl_zext<64,7>(grp_fu_3561_p4.read());
}

void aes_encrypt_top::thread_newIndex19_fu_5024_p1() {
    newIndex19_fu_5024_p1 = esl_zext<64,7>(newIndex18_reg_7746.read());
}

void aes_encrypt_top::thread_newIndex1_fu_6010_p1() {
    newIndex1_fu_6010_p1 = esl_zext<64,7>(grp_fu_3517_p4.read());
}

void aes_encrypt_top::thread_newIndex21_fu_6040_p1() {
    newIndex21_fu_6040_p1 = esl_zext<64,7>(grp_fu_3572_p4.read());
}

void aes_encrypt_top::thread_newIndex23_fu_5029_p1() {
    newIndex23_fu_5029_p1 = esl_zext<64,7>(newIndex22_reg_7756.read());
}

void aes_encrypt_top::thread_newIndex25_fu_6046_p1() {
    newIndex25_fu_6046_p1 = esl_zext<64,7>(grp_fu_3583_p4.read());
}

void aes_encrypt_top::thread_newIndex27_fu_5034_p1() {
    newIndex27_fu_5034_p1 = esl_zext<64,7>(newIndex26_reg_7766.read());
}

void aes_encrypt_top::thread_newIndex29_fu_6052_p1() {
    newIndex29_fu_6052_p1 = esl_zext<64,7>(grp_fu_3594_p4.read());
}

void aes_encrypt_top::thread_newIndex31_fu_5039_p1() {
    newIndex31_fu_5039_p1 = esl_zext<64,7>(newIndex30_reg_7776.read());
}

void aes_encrypt_top::thread_newIndex33_fu_6058_p1() {
    newIndex33_fu_6058_p1 = esl_zext<64,7>(grp_fu_3605_p4.read());
}

void aes_encrypt_top::thread_newIndex35_fu_5184_p1() {
    newIndex35_fu_5184_p1 = esl_zext<64,7>(newIndex34_reg_7786.read());
}

void aes_encrypt_top::thread_newIndex37_fu_6064_p1() {
    newIndex37_fu_6064_p1 = esl_zext<64,7>(grp_fu_3616_p4.read());
}

void aes_encrypt_top::thread_newIndex39_fu_5189_p1() {
    newIndex39_fu_5189_p1 = esl_zext<64,7>(newIndex38_reg_7796.read());
}

void aes_encrypt_top::thread_newIndex3_fu_4892_p1() {
    newIndex3_fu_4892_p1 = esl_zext<64,7>(grp_fu_3517_p4.read());
}

void aes_encrypt_top::thread_newIndex41_fu_6070_p1() {
    newIndex41_fu_6070_p1 = esl_zext<64,7>(grp_fu_3627_p4.read());
}

void aes_encrypt_top::thread_newIndex43_fu_5194_p1() {
    newIndex43_fu_5194_p1 = esl_zext<64,7>(newIndex42_reg_7806.read());
}

void aes_encrypt_top::thread_newIndex45_fu_6076_p1() {
    newIndex45_fu_6076_p1 = esl_zext<64,7>(grp_fu_3638_p4.read());
}

void aes_encrypt_top::thread_newIndex47_fu_5199_p1() {
    newIndex47_fu_5199_p1 = esl_zext<64,7>(newIndex46_reg_7816.read());
}

void aes_encrypt_top::thread_newIndex49_fu_6082_p1() {
    newIndex49_fu_6082_p1 = esl_zext<64,7>(grp_fu_3649_p4.read());
}

void aes_encrypt_top::thread_newIndex51_fu_5344_p1() {
    newIndex51_fu_5344_p1 = esl_zext<64,7>(newIndex50_reg_7826.read());
}

void aes_encrypt_top::thread_newIndex53_fu_6088_p1() {
    newIndex53_fu_6088_p1 = esl_zext<64,7>(grp_fu_3660_p4.read());
}

void aes_encrypt_top::thread_newIndex55_fu_5349_p1() {
    newIndex55_fu_5349_p1 = esl_zext<64,7>(newIndex54_reg_7836.read());
}

void aes_encrypt_top::thread_newIndex57_fu_6094_p1() {
    newIndex57_fu_6094_p1 = esl_zext<64,7>(grp_fu_3671_p4.read());
}

void aes_encrypt_top::thread_newIndex59_fu_5354_p1() {
    newIndex59_fu_5354_p1 = esl_zext<64,7>(newIndex58_reg_7846.read());
}

void aes_encrypt_top::thread_newIndex5_fu_6016_p1() {
    newIndex5_fu_6016_p1 = esl_zext<64,7>(grp_fu_3528_p4.read());
}

void aes_encrypt_top::thread_newIndex61_fu_6100_p1() {
    newIndex61_fu_6100_p1 = esl_zext<64,7>(grp_fu_3682_p4.read());
}

void aes_encrypt_top::thread_newIndex63_fu_5359_p1() {
    newIndex63_fu_5359_p1 = esl_zext<64,7>(newIndex62_reg_7856.read());
}

void aes_encrypt_top::thread_newIndex64_fu_4976_p1() {
    newIndex64_fu_4976_p1 = esl_zext<64,4>(round_assign_reg_3494.read());
}

void aes_encrypt_top::thread_newIndex7_fu_4902_p1() {
    newIndex7_fu_4902_p1 = esl_zext<64,7>(grp_fu_3528_p4.read());
}

void aes_encrypt_top::thread_newIndex9_fu_6022_p1() {
    newIndex9_fu_6022_p1 = esl_zext<64,7>(grp_fu_3539_p4.read());
}

void aes_encrypt_top::thread_outStream_TDATA() {
    outStream_TDATA = outStream_V_data_V_1_data_out.read();
}

void aes_encrypt_top::thread_outStream_TDATA_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_8604.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_8604_pp2_iter1_reg.read())))) {
        outStream_TDATA_blk_n = outStream_V_data_V_1_state.read()[1];
    } else {
        outStream_TDATA_blk_n = ap_const_logic_1;
    }
}

void aes_encrypt_top::thread_outStream_TKEEP() {
    outStream_TKEEP = outStream_V_keep_V_1_data_out.read();
}

void aes_encrypt_top::thread_outStream_TLAST() {
    outStream_TLAST = outStream_V_last_V_1_data_out.read();
}

void aes_encrypt_top::thread_outStream_TSTRB() {
    outStream_TSTRB = outStream_V_strb_V_1_data_out.read();
}

void aes_encrypt_top::thread_outStream_TVALID() {
    outStream_TVALID = outStream_V_last_V_1_state.read()[0];
}

void aes_encrypt_top::thread_outStream_V_data_V_1_ack_in() {
    outStream_V_data_V_1_ack_in = outStream_V_data_V_1_state.read()[1];
}

void aes_encrypt_top::thread_outStream_V_data_V_1_ack_out() {
    outStream_V_data_V_1_ack_out = outStream_TREADY.read();
}

void aes_encrypt_top::thread_outStream_V_data_V_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_data_V_1_sel.read())) {
        outStream_V_data_V_1_data_out = outStream_V_data_V_1_payload_B.read();
    } else {
        outStream_V_data_V_1_data_out = outStream_V_data_V_1_payload_A.read();
    }
}

void aes_encrypt_top::thread_outStream_V_data_V_1_load_A() {
    outStream_V_data_V_1_load_A = (outStream_V_data_V_1_state_cmp_full.read() & ~outStream_V_data_V_1_sel_wr.read());
}

void aes_encrypt_top::thread_outStream_V_data_V_1_load_B() {
    outStream_V_data_V_1_load_B = (outStream_V_data_V_1_sel_wr.read() & outStream_V_data_V_1_state_cmp_full.read());
}

void aes_encrypt_top::thread_outStream_V_data_V_1_sel() {
    outStream_V_data_V_1_sel = outStream_V_data_V_1_sel_rd.read();
}

void aes_encrypt_top::thread_outStream_V_data_V_1_state_cmp_full() {
    outStream_V_data_V_1_state_cmp_full =  (sc_logic) ((!outStream_V_data_V_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(outStream_V_data_V_1_state.read() != ap_const_lv2_1))[0];
}

void aes_encrypt_top::thread_outStream_V_data_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_8604.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0))) {
        outStream_V_data_V_1_vld_in = ap_const_logic_1;
    } else {
        outStream_V_data_V_1_vld_in = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_outStream_V_data_V_1_vld_out() {
    outStream_V_data_V_1_vld_out = outStream_V_data_V_1_state.read()[0];
}

void aes_encrypt_top::thread_outStream_V_keep_V_1_ack_in() {
    outStream_V_keep_V_1_ack_in = outStream_V_keep_V_1_state.read()[1];
}

void aes_encrypt_top::thread_outStream_V_keep_V_1_ack_out() {
    outStream_V_keep_V_1_ack_out = outStream_TREADY.read();
}

void aes_encrypt_top::thread_outStream_V_keep_V_1_data_out() {
    outStream_V_keep_V_1_data_out = ap_const_lv1_1;
}

void aes_encrypt_top::thread_outStream_V_keep_V_1_sel() {
    outStream_V_keep_V_1_sel = outStream_V_keep_V_1_sel_rd.read();
}

void aes_encrypt_top::thread_outStream_V_keep_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_8604.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0))) {
        outStream_V_keep_V_1_vld_in = ap_const_logic_1;
    } else {
        outStream_V_keep_V_1_vld_in = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_outStream_V_keep_V_1_vld_out() {
    outStream_V_keep_V_1_vld_out = outStream_V_keep_V_1_state.read()[0];
}

void aes_encrypt_top::thread_outStream_V_last_V_1_ack_in() {
    outStream_V_last_V_1_ack_in = outStream_V_last_V_1_state.read()[1];
}

void aes_encrypt_top::thread_outStream_V_last_V_1_ack_out() {
    outStream_V_last_V_1_ack_out = outStream_TREADY.read();
}

void aes_encrypt_top::thread_outStream_V_last_V_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, outStream_V_last_V_1_sel.read())) {
        outStream_V_last_V_1_data_out = outStream_V_last_V_1_payload_B.read();
    } else {
        outStream_V_last_V_1_data_out = outStream_V_last_V_1_payload_A.read();
    }
}

void aes_encrypt_top::thread_outStream_V_last_V_1_load_A() {
    outStream_V_last_V_1_load_A = (outStream_V_last_V_1_state_cmp_full.read() & ~outStream_V_last_V_1_sel_wr.read());
}

void aes_encrypt_top::thread_outStream_V_last_V_1_load_B() {
    outStream_V_last_V_1_load_B = (outStream_V_last_V_1_sel_wr.read() & outStream_V_last_V_1_state_cmp_full.read());
}

void aes_encrypt_top::thread_outStream_V_last_V_1_sel() {
    outStream_V_last_V_1_sel = outStream_V_last_V_1_sel_rd.read();
}

void aes_encrypt_top::thread_outStream_V_last_V_1_state_cmp_full() {
    outStream_V_last_V_1_state_cmp_full =  (sc_logic) ((!outStream_V_last_V_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(outStream_V_last_V_1_state.read() != ap_const_lv2_1))[0];
}

void aes_encrypt_top::thread_outStream_V_last_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_8604.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0))) {
        outStream_V_last_V_1_vld_in = ap_const_logic_1;
    } else {
        outStream_V_last_V_1_vld_in = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_outStream_V_last_V_1_vld_out() {
    outStream_V_last_V_1_vld_out = outStream_V_last_V_1_state.read()[0];
}

void aes_encrypt_top::thread_outStream_V_strb_V_1_ack_in() {
    outStream_V_strb_V_1_ack_in = outStream_V_strb_V_1_state.read()[1];
}

void aes_encrypt_top::thread_outStream_V_strb_V_1_ack_out() {
    outStream_V_strb_V_1_ack_out = outStream_TREADY.read();
}

void aes_encrypt_top::thread_outStream_V_strb_V_1_data_out() {
    outStream_V_strb_V_1_data_out = ap_const_lv1_1;
}

void aes_encrypt_top::thread_outStream_V_strb_V_1_sel() {
    outStream_V_strb_V_1_sel = outStream_V_strb_V_1_sel_rd.read();
}

void aes_encrypt_top::thread_outStream_V_strb_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_8604.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0))) {
        outStream_V_strb_V_1_vld_in = ap_const_logic_1;
    } else {
        outStream_V_strb_V_1_vld_in = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_outStream_V_strb_V_1_vld_out() {
    outStream_V_strb_V_1_vld_out = outStream_V_strb_V_1_state.read()[0];
}

void aes_encrypt_top::thread_output_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()))) {
        output_address0 =  (sc_lv<4>) (tmp_s_fu_6392_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        output_address0 =  (sc_lv<4>) (ap_const_lv64_E);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        output_address0 =  (sc_lv<4>) (ap_const_lv64_C);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read())) {
        output_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        output_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        output_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        output_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        output_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        output_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_output_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        output_address1 =  (sc_lv<4>) (ap_const_lv64_F);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        output_address1 =  (sc_lv<4>) (ap_const_lv64_D);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read())) {
        output_address1 =  (sc_lv<4>) (ap_const_lv64_B);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        output_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        output_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        output_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        output_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        output_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_output_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()))) {
        output_ce0 = ap_const_logic_1;
    } else {
        output_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_output_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()))) {
        output_ce1 = ap_const_logic_1;
    } else {
        output_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_output_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        output_d0 = state_2_3_V_1_reg_8594.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        output_d0 = state_0_3_V_2_reg_8584.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read())) {
        output_d0 = state_2_2_V_1_reg_8574.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_d0 = state_0_2_V_2_reg_8564.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        output_d0 = state_2_1_V_1_reg_8554.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        output_d0 = state_0_1_V_2_reg_8544.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        output_d0 = state_2_0_V_1_reg_8534.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        output_d0 = state_0_0_V_2_fu_6298_p2.read();
    } else {
        output_d0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_output_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        output_d1 = state_3_3_V_1_reg_8599.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        output_d1 = state_1_3_V_1_reg_8589.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read())) {
        output_d1 = state_3_2_V_1_reg_8579.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        output_d1 = state_1_2_V_1_reg_8569.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        output_d1 = state_3_1_V_1_reg_8559.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        output_d1 = state_1_1_V_1_reg_8549.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        output_d1 = state_3_0_V_1_reg_8539.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read())) {
        output_d1 = state_1_0_V_1_fu_6304_p2.read();
    } else {
        output_d1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_output_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()))) {
        output_we0 = ap_const_logic_1;
    } else {
        output_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_output_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state52.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()))) {
        output_we1 = ap_const_logic_1;
    } else {
        output_we1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_p_i10_cast_cast_fu_5434_p3() {
    p_i10_cast_cast_fu_5434_p3 = (!tmp_62_fu_5426_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_62_fu_5426_p3.read()[0].to_bool())? ap_const_lv8_1B: ap_const_lv8_0);
}

void aes_encrypt_top::thread_p_i11_cast_cast_fu_5582_p3() {
    p_i11_cast_cast_fu_5582_p3 = (!tmp_64_fu_5574_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_64_fu_5574_p3.read()[0].to_bool())? ap_const_lv8_1B: ap_const_lv8_0);
}

void aes_encrypt_top::thread_p_i12_cast_cast_fu_5142_p3() {
    p_i12_cast_cast_fu_5142_p3 = (!tmp_66_fu_5134_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_66_fu_5134_p3.read()[0].to_bool())? ap_const_lv8_1B: ap_const_lv8_0);
}

void aes_encrypt_top::thread_p_i13_cast_cast_fu_5302_p3() {
    p_i13_cast_cast_fu_5302_p3 = (!tmp_68_fu_5294_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_68_fu_5294_p3.read()[0].to_bool())? ap_const_lv8_1B: ap_const_lv8_0);
}

void aes_encrypt_top::thread_p_i14_cast_cast_fu_5462_p3() {
    p_i14_cast_cast_fu_5462_p3 = (!tmp_70_fu_5454_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_70_fu_5454_p3.read()[0].to_bool())? ap_const_lv8_1B: ap_const_lv8_0);
}

void aes_encrypt_top::thread_p_i15_cast_cast_fu_5614_p3() {
    p_i15_cast_cast_fu_5614_p3 = (!tmp_72_fu_5606_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_72_fu_5606_p3.read()[0].to_bool())? ap_const_lv8_1B: ap_const_lv8_0);
}

void aes_encrypt_top::thread_p_i1_cast_cast_fu_5218_p3() {
    p_i1_cast_cast_fu_5218_p3 = (!tmp_44_fu_5210_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_44_fu_5210_p3.read()[0].to_bool())? ap_const_lv8_1B: ap_const_lv8_0);
}

void aes_encrypt_top::thread_p_i2_cast_cast_fu_5378_p3() {
    p_i2_cast_cast_fu_5378_p3 = (!tmp_46_fu_5370_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_46_fu_5370_p3.read()[0].to_bool())? ap_const_lv8_1B: ap_const_lv8_0);
}

void aes_encrypt_top::thread_p_i3_cast_cast_fu_5518_p3() {
    p_i3_cast_cast_fu_5518_p3 = (!tmp_48_fu_5510_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_48_fu_5510_p3.read()[0].to_bool())? ap_const_lv8_1B: ap_const_lv8_0);
}

void aes_encrypt_top::thread_p_i4_cast_cast_fu_5086_p3() {
    p_i4_cast_cast_fu_5086_p3 = (!tmp_50_fu_5078_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_50_fu_5078_p3.read()[0].to_bool())? ap_const_lv8_1B: ap_const_lv8_0);
}

void aes_encrypt_top::thread_p_i5_cast_cast_fu_5246_p3() {
    p_i5_cast_cast_fu_5246_p3 = (!tmp_52_fu_5238_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_52_fu_5238_p3.read()[0].to_bool())? ap_const_lv8_1B: ap_const_lv8_0);
}

void aes_encrypt_top::thread_p_i6_cast_cast_fu_5406_p3() {
    p_i6_cast_cast_fu_5406_p3 = (!tmp_54_fu_5398_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_54_fu_5398_p3.read()[0].to_bool())? ap_const_lv8_1B: ap_const_lv8_0);
}

void aes_encrypt_top::thread_p_i7_cast_cast_fu_5550_p3() {
    p_i7_cast_cast_fu_5550_p3 = (!tmp_56_fu_5542_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_56_fu_5542_p3.read()[0].to_bool())? ap_const_lv8_1B: ap_const_lv8_0);
}

void aes_encrypt_top::thread_p_i8_cast_cast_fu_5114_p3() {
    p_i8_cast_cast_fu_5114_p3 = (!tmp_58_fu_5106_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_58_fu_5106_p3.read()[0].to_bool())? ap_const_lv8_1B: ap_const_lv8_0);
}

void aes_encrypt_top::thread_p_i9_cast_cast_fu_5274_p3() {
    p_i9_cast_cast_fu_5274_p3 = (!tmp_60_fu_5266_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_60_fu_5266_p3.read()[0].to_bool())? ap_const_lv8_1B: ap_const_lv8_0);
}

void aes_encrypt_top::thread_p_i_cast_cast_fu_5058_p3() {
    p_i_cast_cast_fu_5058_p3 = (!tmp_42_fu_5050_p3.read()[0].is_01())? sc_lv<8>(): ((tmp_42_fu_5050_p3.read()[0].to_bool())? ap_const_lv8_1B: ap_const_lv8_0);
}

void aes_encrypt_top::thread_r_V_10_fu_5420_p2() {
    r_V_10_fu_5420_p2 = (!ap_const_lv8_1.is_01())? sc_lv<8>(): temp_V_7_fu_5316_p3.read() << (unsigned short)ap_const_lv8_1.to_uint();
}

void aes_encrypt_top::thread_r_V_11_fu_5568_p2() {
    r_V_11_fu_5568_p2 = (!ap_const_lv8_1.is_01())? sc_lv<8>(): state_3_2_V_2_fu_5483_p3.read() << (unsigned short)ap_const_lv8_1.to_uint();
}

void aes_encrypt_top::thread_r_V_12_fu_5128_p2() {
    r_V_12_fu_5128_p2 = (!ap_const_lv8_1.is_01())? sc_lv<8>(): state_0_3_V_1_fu_5017_p3.read() << (unsigned short)ap_const_lv8_1.to_uint();
}

void aes_encrypt_top::thread_r_V_13_fu_5288_p2() {
    r_V_13_fu_5288_p2 = (!ap_const_lv8_1.is_01())? sc_lv<8>(): temp_V_6_fu_5156_p3.read() << (unsigned short)ap_const_lv8_1.to_uint();
}

void aes_encrypt_top::thread_r_V_14_fu_5448_p2() {
    r_V_14_fu_5448_p2 = (!ap_const_lv8_1.is_01())? sc_lv<8>(): temp1_V_2_fu_5323_p3.read() << (unsigned short)ap_const_lv8_1.to_uint();
}

void aes_encrypt_top::thread_r_V_15_fu_5600_p2() {
    r_V_15_fu_5600_p2 = (!ap_const_lv8_1.is_01())? sc_lv<8>(): state_3_3_V_2_fu_5490_p3.read() << (unsigned short)ap_const_lv8_1.to_uint();
}

void aes_encrypt_top::thread_r_V_1_fu_5204_p2() {
    r_V_1_fu_5204_p2 = (!ap_const_lv8_1.is_01())? sc_lv<8>(): state_1_0_V_2_fu_5163_p3.read() << (unsigned short)ap_const_lv8_1.to_uint();
}

void aes_encrypt_top::thread_r_V_2_fu_5364_p2() {
    r_V_2_fu_5364_p2 = (!ap_const_lv8_1.is_01())? sc_lv<8>(): state_2_0_V_2_fu_5330_p3.read() << (unsigned short)ap_const_lv8_1.to_uint();
}

void aes_encrypt_top::thread_r_V_3_fu_5504_p2() {
    r_V_3_fu_5504_p2 = (!ap_const_lv8_1.is_01())? sc_lv<8>(): temp_V_8_fu_5497_p3.read() << (unsigned short)ap_const_lv8_1.to_uint();
}

void aes_encrypt_top::thread_r_V_4_fu_5072_p2() {
    r_V_4_fu_5072_p2 = (!ap_const_lv8_1.is_01())? sc_lv<8>(): state_0_1_V_1_fu_5003_p3.read() << (unsigned short)ap_const_lv8_1.to_uint();
}

void aes_encrypt_top::thread_r_V_5_fu_5232_p2() {
    r_V_5_fu_5232_p2 = (!ap_const_lv8_1.is_01())? sc_lv<8>(): state_1_1_V_2_fu_5170_p3.read() << (unsigned short)ap_const_lv8_1.to_uint();
}

void aes_encrypt_top::thread_r_V_6_fu_5392_p2() {
    r_V_6_fu_5392_p2 = (!ap_const_lv8_1.is_01())? sc_lv<8>(): state_2_1_V_2_fu_5337_p3.read() << (unsigned short)ap_const_lv8_1.to_uint();
}

void aes_encrypt_top::thread_r_V_7_fu_5536_p2() {
    r_V_7_fu_5536_p2 = (!ap_const_lv8_1.is_01())? sc_lv<8>(): state_3_1_V_2_fu_5476_p3.read() << (unsigned short)ap_const_lv8_1.to_uint();
}

void aes_encrypt_top::thread_r_V_8_fu_5100_p2() {
    r_V_8_fu_5100_p2 = (!ap_const_lv8_1.is_01())? sc_lv<8>(): state_0_2_V_1_fu_5010_p3.read() << (unsigned short)ap_const_lv8_1.to_uint();
}

void aes_encrypt_top::thread_r_V_9_fu_5260_p2() {
    r_V_9_fu_5260_p2 = (!ap_const_lv8_1.is_01())? sc_lv<8>(): state_1_2_V_2_fu_5177_p3.read() << (unsigned short)ap_const_lv8_1.to_uint();
}

void aes_encrypt_top::thread_r_V_fu_5044_p2() {
    r_V_fu_5044_p2 = (!ap_const_lv8_1.is_01())? sc_lv<8>(): state_0_0_V_1_fu_4996_p3.read() << (unsigned short)ap_const_lv8_1.to_uint();
}

void aes_encrypt_top::thread_ret_V_1_0_1_fu_3734_p2() {
    ret_V_1_0_1_fu_3734_p2 = (reg_3703.read() ^ key_V_load_1_reg_6480.read());
}

void aes_encrypt_top::thread_ret_V_1_0_2_fu_3784_p2() {
    ret_V_1_0_2_fu_3784_p2 = (reg_3698.read() ^ key_V_load_2_reg_6492.read());
}

void aes_encrypt_top::thread_ret_V_1_0_3_fu_3827_p2() {
    ret_V_1_0_3_fu_3827_p2 = (reg_3693.read() ^ key_V_load_3_reg_6504.read());
}

void aes_encrypt_top::thread_ret_V_1_10_1_fu_3986_p2() {
    ret_V_1_10_1_fu_3986_p2 = (ret_V_1_8_1_reg_6812.read() ^ ret_V_1_2_1_reg_6630.read());
}

void aes_encrypt_top::thread_ret_V_1_10_2_fu_3961_p2() {
    ret_V_1_10_2_fu_3961_p2 = (ret_V_1_8_2_reg_6788.read() ^ ret_V_1_2_2_reg_6664.read());
}

void aes_encrypt_top::thread_ret_V_1_10_3_fu_3990_p2() {
    ret_V_1_10_3_fu_3990_p2 = (ret_V_1_8_3_reg_6796.read() ^ ret_V_1_2_3_reg_6701.read());
}

void aes_encrypt_top::thread_ret_V_1_10_fu_4030_p2() {
    ret_V_1_10_fu_4030_p2 = (ret_V_1_s_fu_4026_p2.read() ^ ret_V_1_7_reg_6733.read());
}

void aes_encrypt_top::thread_ret_V_1_11_1_fu_3994_p2() {
    ret_V_1_11_1_fu_3994_p2 = (ret_V_1_10_1_fu_3986_p2.read() ^ ret_V_1_7_1_reg_6766.read());
}

void aes_encrypt_top::thread_ret_V_1_11_2_fu_3965_p2() {
    ret_V_1_11_2_fu_3965_p2 = (ret_V_1_10_2_fu_3961_p2.read() ^ ret_V_1_7_2_reg_6772.read());
}

void aes_encrypt_top::thread_ret_V_1_11_3_fu_4000_p2() {
    ret_V_1_11_3_fu_4000_p2 = (ret_V_1_10_3_fu_3990_p2.read() ^ ret_V_1_7_3_reg_6684.read());
}

void aes_encrypt_top::thread_ret_V_1_11_fu_4082_p2() {
    ret_V_1_11_fu_4082_p2 = (ret_V_1_fu_4076_p2.read() ^ ret_V_1_8_reg_6804.read());
}

void aes_encrypt_top::thread_ret_V_1_12_1_fu_4041_p2() {
    ret_V_1_12_1_fu_4041_p2 = (reg_3693.read() ^ ret_V_1_8_1_reg_6812.read());
}

void aes_encrypt_top::thread_ret_V_1_12_2_fu_4088_p2() {
    ret_V_1_12_2_fu_4088_p2 = (reg_3698.read() ^ ret_V_1_8_2_reg_6788.read());
}

void aes_encrypt_top::thread_ret_V_1_12_3_fu_4093_p2() {
    ret_V_1_12_3_fu_4093_p2 = (sboxExp_V_q1.read() ^ ret_V_1_8_3_reg_6796.read());
}

void aes_encrypt_top::thread_ret_V_1_12_fu_4140_p2() {
    ret_V_1_12_fu_4140_p2 = (ret_V_1_reg_6895.read() ^ ret_V_1_5_reg_6725.read());
}

void aes_encrypt_top::thread_ret_V_1_13_1_fu_4046_p2() {
    ret_V_1_13_1_fu_4046_p2 = (reg_3693.read() ^ ret_V_1_5_1_reg_6750.read());
}

void aes_encrypt_top::thread_ret_V_1_13_2_fu_4098_p2() {
    ret_V_1_13_2_fu_4098_p2 = (reg_3698.read() ^ ret_V_1_5_2_reg_6758.read());
}

void aes_encrypt_top::thread_ret_V_1_13_3_fu_4103_p2() {
    ret_V_1_13_3_fu_4103_p2 = (sboxExp_V_q1.read() ^ ret_V_1_5_3_reg_6676.read());
}

void aes_encrypt_top::thread_ret_V_1_13_fu_4208_p2() {
    ret_V_1_13_fu_4208_p2 = (ret_V_1_12_reg_6963.read() ^ ret_V_1_s_reg_6856.read());
}

void aes_encrypt_top::thread_ret_V_1_14_1_fu_4163_p2() {
    ret_V_1_14_1_fu_4163_p2 = (ret_V_1_13_1_reg_6874.read() ^ ret_V_1_10_1_reg_6832.read());
}

void aes_encrypt_top::thread_ret_V_1_14_2_fu_4168_p2() {
    ret_V_1_14_2_fu_4168_p2 = (ret_V_1_13_2_reg_6913.read() ^ ret_V_1_10_2_reg_6820.read());
}

void aes_encrypt_top::thread_ret_V_1_14_3_fu_4213_p2() {
    ret_V_1_14_3_fu_4213_p2 = (ret_V_1_13_3_reg_6921.read() ^ ret_V_1_10_3_reg_6839.read());
}

void aes_encrypt_top::thread_ret_V_1_14_fu_4144_p2() {
    ret_V_1_14_fu_4144_p2 = (key_V_load_12_reg_6408.read() ^ ret_V_1_reg_6895.read());
}

void aes_encrypt_top::thread_ret_V_1_15_1_fu_4051_p2() {
    ret_V_1_15_1_fu_4051_p2 = (reg_3693.read() ^ key_V_load_13_reg_6423.read());
}

void aes_encrypt_top::thread_ret_V_1_15_2_fu_4108_p2() {
    ret_V_1_15_2_fu_4108_p2 = (reg_3698.read() ^ key_V_load_14_reg_6438.read());
}

void aes_encrypt_top::thread_ret_V_1_15_3_fu_4113_p2() {
    ret_V_1_15_3_fu_4113_p2 = (sboxExp_V_q1.read() ^ key_V_load_15_reg_6458.read());
}

void aes_encrypt_top::thread_ret_V_1_15_fu_4134_p2() {
    ret_V_1_15_fu_4134_p2 = (tmp3_fu_4128_p2.read() ^ sboxExp_V_q0.read());
}

void aes_encrypt_top::thread_ret_V_1_16_1_fu_4153_p2() {
    ret_V_1_16_1_fu_4153_p2 = (sboxExp_V_q1.read() ^ ret_V_1_12_1_reg_6868.read());
}

void aes_encrypt_top::thread_ret_V_1_16_2_fu_4158_p2() {
    ret_V_1_16_2_fu_4158_p2 = (sboxExp_V_q0.read() ^ ret_V_1_12_2_reg_6901.read());
}

void aes_encrypt_top::thread_ret_V_1_16_3_fu_4173_p2() {
    ret_V_1_16_3_fu_4173_p2 = (sboxExp_V_q1.read() ^ ret_V_1_12_3_reg_6907.read());
}

void aes_encrypt_top::thread_ret_V_1_16_fu_4218_p2() {
    ret_V_1_16_fu_4218_p2 = (ret_V_1_15_reg_6955.read() ^ ret_V_1_12_reg_6963.read());
}

void aes_encrypt_top::thread_ret_V_1_17_1_fu_4223_p2() {
    ret_V_1_17_1_fu_4223_p2 = (ret_V_1_16_1_reg_6984.read() ^ ret_V_1_13_1_reg_6874.read());
}

void aes_encrypt_top::thread_ret_V_1_17_2_fu_4284_p2() {
    ret_V_1_17_2_fu_4284_p2 = (ret_V_1_16_2_reg_6992.read() ^ ret_V_1_13_2_reg_6913.read());
}

void aes_encrypt_top::thread_ret_V_1_17_3_fu_4289_p2() {
    ret_V_1_17_3_fu_4289_p2 = (ret_V_1_16_3_reg_7000.read() ^ ret_V_1_13_3_reg_6921.read());
}

void aes_encrypt_top::thread_ret_V_1_17_fu_4228_p2() {
    ret_V_1_17_fu_4228_p2 = (ret_V_1_15_reg_6955.read() ^ ret_V_1_s_reg_6856.read());
}

void aes_encrypt_top::thread_ret_V_1_18_1_fu_4178_p2() {
    ret_V_1_18_1_fu_4178_p2 = (ret_V_1_16_1_reg_6984.read() ^ ret_V_1_10_1_reg_6832.read());
}

void aes_encrypt_top::thread_ret_V_1_18_2_fu_4182_p2() {
    ret_V_1_18_2_fu_4182_p2 = (ret_V_1_16_2_reg_6992.read() ^ ret_V_1_10_2_reg_6820.read());
}

void aes_encrypt_top::thread_ret_V_1_18_3_fu_4232_p2() {
    ret_V_1_18_3_fu_4232_p2 = (ret_V_1_16_3_reg_7000.read() ^ ret_V_1_10_3_reg_6839.read());
}

void aes_encrypt_top::thread_ret_V_1_18_fu_4236_p2() {
    ret_V_1_18_fu_4236_p2 = (ret_V_1_17_fu_4228_p2.read() ^ ret_V_1_14_reg_6971.read());
}

void aes_encrypt_top::thread_ret_V_1_19_1_fu_4186_p2() {
    ret_V_1_19_1_fu_4186_p2 = (ret_V_1_18_1_fu_4178_p2.read() ^ ret_V_1_15_1_reg_6882.read());
}

void aes_encrypt_top::thread_ret_V_1_19_2_fu_4192_p2() {
    ret_V_1_19_2_fu_4192_p2 = (ret_V_1_18_2_fu_4182_p2.read() ^ ret_V_1_15_2_reg_6929.read());
}

void aes_encrypt_top::thread_ret_V_1_19_3_fu_4242_p2() {
    ret_V_1_19_3_fu_4242_p2 = (ret_V_1_18_3_fu_4232_p2.read() ^ ret_V_1_15_3_reg_6937.read());
}

void aes_encrypt_top::thread_ret_V_1_19_fu_4264_p2() {
    ret_V_1_19_fu_4264_p2 = (ret_V_3_fu_4248_p2.read() ^ ret_V_1_15_reg_6955.read());
}

void aes_encrypt_top::thread_ret_V_1_1_1_fu_3745_p2() {
    ret_V_1_1_1_fu_3745_p2 = (key_V_load_5_reg_6529.read() ^ ret_V_1_0_1_fu_3734_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_1_2_fu_3789_p2() {
    ret_V_1_1_2_fu_3789_p2 = (key_V_load_6_reg_6542.read() ^ ret_V_1_0_2_fu_3784_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_1_3_fu_3833_p2() {
    ret_V_1_1_3_fu_3833_p2 = (key_V_load_7_reg_6560.read() ^ ret_V_1_0_3_fu_3827_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_1_fu_3739_p2() {
    ret_V_1_1_fu_3739_p2 = (key_V_load_4_reg_6516.read() ^ ret_V_s_fu_3728_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_20_1_fu_4269_p2() {
    ret_V_1_20_1_fu_4269_p2 = (sboxExp_V_q1.read() ^ ret_V_1_16_1_reg_6984.read());
}

void aes_encrypt_top::thread_ret_V_1_20_2_fu_4294_p2() {
    ret_V_1_20_2_fu_4294_p2 = (sboxExp_V_q0.read() ^ ret_V_1_16_2_reg_6992.read());
}

void aes_encrypt_top::thread_ret_V_1_20_3_fu_4299_p2() {
    ret_V_1_20_3_fu_4299_p2 = (sboxExp_V_q1.read() ^ ret_V_1_16_3_reg_7000.read());
}

void aes_encrypt_top::thread_ret_V_1_20_fu_4274_p2() {
    ret_V_1_20_fu_4274_p2 = (ret_V_3_fu_4248_p2.read() ^ ret_V_1_12_reg_6963.read());
}

void aes_encrypt_top::thread_ret_V_1_21_1_fu_4279_p2() {
    ret_V_1_21_1_fu_4279_p2 = (sboxExp_V_q1.read() ^ ret_V_1_13_1_reg_6874.read());
}

void aes_encrypt_top::thread_ret_V_1_21_2_fu_4304_p2() {
    ret_V_1_21_2_fu_4304_p2 = (sboxExp_V_q0.read() ^ ret_V_1_13_2_reg_6913.read());
}

void aes_encrypt_top::thread_ret_V_1_21_3_fu_4309_p2() {
    ret_V_1_21_3_fu_4309_p2 = (sboxExp_V_q1.read() ^ ret_V_1_13_3_reg_6921.read());
}

void aes_encrypt_top::thread_ret_V_1_21_fu_4397_p2() {
    ret_V_1_21_fu_4397_p2 = (ret_V_1_20_reg_7068.read() ^ ret_V_1_17_reg_7032.read());
}

void aes_encrypt_top::thread_ret_V_1_22_1_fu_4367_p2() {
    ret_V_1_22_1_fu_4367_p2 = (ret_V_1_21_1_reg_7077.read() ^ ret_V_1_18_1_reg_7008.read());
}

void aes_encrypt_top::thread_ret_V_1_22_2_fu_4402_p2() {
    ret_V_1_22_2_fu_4402_p2 = (ret_V_1_21_2_reg_7098.read() ^ ret_V_1_18_2_reg_7015.read());
}

void aes_encrypt_top::thread_ret_V_1_22_3_fu_4407_p2() {
    ret_V_1_22_3_fu_4407_p2 = (ret_V_1_21_3_reg_7106.read() ^ ret_V_1_18_3_reg_7039.read());
}

void aes_encrypt_top::thread_ret_V_1_22_fu_4333_p2() {
    ret_V_1_22_fu_4333_p2 = (ret_V_1_20_reg_7068.read() ^ ret_V_1_14_reg_6971.read());
}

void aes_encrypt_top::thread_ret_V_1_23_1_fu_4314_p2() {
    ret_V_1_23_1_fu_4314_p2 = (ret_V_1_21_1_reg_7077.read() ^ ret_V_1_15_1_reg_6882.read());
}

void aes_encrypt_top::thread_ret_V_1_23_2_fu_4318_p2() {
    ret_V_1_23_2_fu_4318_p2 = (ret_V_1_21_2_fu_4304_p2.read() ^ ret_V_1_15_2_reg_6929.read());
}

void aes_encrypt_top::thread_ret_V_1_23_3_fu_4337_p2() {
    ret_V_1_23_3_fu_4337_p2 = (ret_V_1_21_3_reg_7106.read() ^ ret_V_1_15_3_reg_6937.read());
}

void aes_encrypt_top::thread_ret_V_1_23_fu_4356_p2() {
    ret_V_1_23_fu_4356_p2 = (tmp4_fu_4351_p2.read() ^ sboxExp_V_q0.read());
}

void aes_encrypt_top::thread_ret_V_1_24_1_fu_4362_p2() {
    ret_V_1_24_1_fu_4362_p2 = (sboxExp_V_q1.read() ^ ret_V_1_20_1_reg_7062.read());
}

void aes_encrypt_top::thread_ret_V_1_24_2_fu_4372_p2() {
    ret_V_1_24_2_fu_4372_p2 = (sboxExp_V_q0.read() ^ ret_V_1_20_2_reg_7086.read());
}

void aes_encrypt_top::thread_ret_V_1_24_3_fu_4377_p2() {
    ret_V_1_24_3_fu_4377_p2 = (sboxExp_V_q1.read() ^ ret_V_1_20_3_reg_7092.read());
}

void aes_encrypt_top::thread_ret_V_1_24_fu_4412_p2() {
    ret_V_1_24_fu_4412_p2 = (ret_V_1_23_reg_7159.read() ^ ret_V_1_20_reg_7068.read());
}

void aes_encrypt_top::thread_ret_V_1_25_1_fu_4472_p2() {
    ret_V_1_25_1_fu_4472_p2 = (ret_V_1_24_1_reg_7167.read() ^ ret_V_1_21_1_reg_7077.read());
}

void aes_encrypt_top::thread_ret_V_1_25_2_fu_4477_p2() {
    ret_V_1_25_2_fu_4477_p2 = (ret_V_1_24_2_reg_7175.read() ^ ret_V_1_21_2_reg_7098.read());
}

void aes_encrypt_top::thread_ret_V_1_25_3_fu_4527_p2() {
    ret_V_1_25_3_fu_4527_p2 = (ret_V_1_24_3_reg_7183.read() ^ ret_V_1_21_3_reg_7106.read());
}

void aes_encrypt_top::thread_ret_V_1_25_fu_4417_p2() {
    ret_V_1_25_fu_4417_p2 = (ret_V_1_23_reg_7159.read() ^ ret_V_1_17_reg_7032.read());
}

void aes_encrypt_top::thread_ret_V_1_26_1_fu_4382_p2() {
    ret_V_1_26_1_fu_4382_p2 = (ret_V_1_24_1_reg_7167.read() ^ ret_V_1_18_1_reg_7008.read());
}

void aes_encrypt_top::thread_ret_V_1_26_2_fu_4421_p2() {
    ret_V_1_26_2_fu_4421_p2 = (ret_V_1_24_2_reg_7175.read() ^ ret_V_1_18_2_reg_7015.read());
}

void aes_encrypt_top::thread_ret_V_1_26_3_fu_4425_p2() {
    ret_V_1_26_3_fu_4425_p2 = (ret_V_1_24_3_reg_7183.read() ^ ret_V_1_18_3_reg_7039.read());
}

void aes_encrypt_top::thread_ret_V_1_26_fu_4482_p2() {
    ret_V_1_26_fu_4482_p2 = (ret_V_1_25_reg_7203.read() ^ ret_V_1_22_reg_7137.read());
}

void aes_encrypt_top::thread_ret_V_1_27_1_fu_4386_p2() {
    ret_V_1_27_1_fu_4386_p2 = (ret_V_1_26_1_fu_4382_p2.read() ^ ret_V_1_23_1_reg_7115.read());
}

void aes_encrypt_top::thread_ret_V_1_27_2_fu_4429_p2() {
    ret_V_1_27_2_fu_4429_p2 = (ret_V_1_26_2_fu_4421_p2.read() ^ ret_V_1_23_2_reg_7121.read());
}

void aes_encrypt_top::thread_ret_V_1_27_3_fu_4435_p2() {
    ret_V_1_27_3_fu_4435_p2 = (ret_V_1_26_3_fu_4425_p2.read() ^ ret_V_1_23_3_reg_7143.read());
}

void aes_encrypt_top::thread_ret_V_1_27_fu_4457_p2() {
    ret_V_1_27_fu_4457_p2 = (ret_V_6_fu_4441_p2.read() ^ ret_V_1_23_reg_7159.read());
}

void aes_encrypt_top::thread_ret_V_1_28_1_fu_4492_p2() {
    ret_V_1_28_1_fu_4492_p2 = (sboxExp_V_q1.read() ^ ret_V_1_24_1_reg_7167.read());
}

void aes_encrypt_top::thread_ret_V_1_28_2_fu_4497_p2() {
    ret_V_1_28_2_fu_4497_p2 = (sboxExp_V_q0.read() ^ ret_V_1_24_2_reg_7175.read());
}

void aes_encrypt_top::thread_ret_V_1_28_3_fu_4532_p2() {
    ret_V_1_28_3_fu_4532_p2 = (sboxExp_V_q1.read() ^ ret_V_1_24_3_reg_7183.read());
}

void aes_encrypt_top::thread_ret_V_1_28_fu_4462_p2() {
    ret_V_1_28_fu_4462_p2 = (ret_V_6_fu_4441_p2.read() ^ ret_V_1_20_reg_7068.read());
}

void aes_encrypt_top::thread_ret_V_1_29_1_fu_4502_p2() {
    ret_V_1_29_1_fu_4502_p2 = (sboxExp_V_q1.read() ^ ret_V_1_21_1_reg_7077.read());
}

void aes_encrypt_top::thread_ret_V_1_29_2_fu_4507_p2() {
    ret_V_1_29_2_fu_4507_p2 = (sboxExp_V_q0.read() ^ ret_V_1_21_2_reg_7098.read());
}

void aes_encrypt_top::thread_ret_V_1_29_3_fu_4537_p2() {
    ret_V_1_29_3_fu_4537_p2 = (sboxExp_V_q1.read() ^ ret_V_1_21_3_reg_7106.read());
}

void aes_encrypt_top::thread_ret_V_1_29_fu_4626_p2() {
    ret_V_1_29_fu_4626_p2 = (ret_V_1_28_reg_7241.read() ^ ret_V_1_25_reg_7203.read());
}

void aes_encrypt_top::thread_ret_V_1_2_1_fu_3756_p2() {
    ret_V_1_2_1_fu_3756_p2 = (key_V_q0.read() ^ ret_V_1_1_1_fu_3745_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_2_2_fu_3795_p2() {
    ret_V_1_2_2_fu_3795_p2 = (key_V_q0.read() ^ ret_V_1_1_2_fu_3789_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_2_3_fu_3839_p2() {
    ret_V_1_2_3_fu_3839_p2 = (key_V_q0.read() ^ ret_V_1_1_3_fu_3833_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_2_fu_3751_p2() {
    ret_V_1_2_fu_3751_p2 = (key_V_load_8_reg_6583.read() ^ ret_V_1_1_fu_3739_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_30_1_fu_4581_p2() {
    ret_V_1_30_1_fu_4581_p2 = (ret_V_1_29_1_reg_7274.read() ^ ret_V_1_26_1_reg_7191.read());
}

void aes_encrypt_top::thread_ret_V_1_30_2_fu_4586_p2() {
    ret_V_1_30_2_fu_4586_p2 = (ret_V_1_29_2_reg_7282.read() ^ ret_V_1_26_2_reg_7211.read());
}

void aes_encrypt_top::thread_ret_V_1_30_3_fu_4631_p2() {
    ret_V_1_30_3_fu_4631_p2 = (ret_V_1_29_3_reg_7316.read() ^ ret_V_1_26_3_reg_7218.read());
}

void aes_encrypt_top::thread_ret_V_1_30_fu_4467_p2() {
    ret_V_1_30_fu_4467_p2 = (ret_V_6_fu_4441_p2.read() ^ ret_V_1_14_reg_6971.read());
}

void aes_encrypt_top::thread_ret_V_1_31_1_fu_4512_p2() {
    ret_V_1_31_1_fu_4512_p2 = (sboxExp_V_q1.read() ^ ret_V_1_15_1_reg_6882.read());
}

void aes_encrypt_top::thread_ret_V_1_31_2_fu_4517_p2() {
    ret_V_1_31_2_fu_4517_p2 = (sboxExp_V_q0.read() ^ ret_V_1_15_2_reg_6929.read());
}

void aes_encrypt_top::thread_ret_V_1_31_3_fu_4542_p2() {
    ret_V_1_31_3_fu_4542_p2 = (sboxExp_V_q1.read() ^ ret_V_1_15_3_reg_6937.read());
}

void aes_encrypt_top::thread_ret_V_1_31_fu_4561_p2() {
    ret_V_1_31_fu_4561_p2 = (tmp5_fu_4556_p2.read() ^ sboxExp_V_q0.read());
}

void aes_encrypt_top::thread_ret_V_1_32_1_fu_4571_p2() {
    ret_V_1_32_1_fu_4571_p2 = (sboxExp_V_q1.read() ^ ret_V_1_28_1_reg_7262.read());
}

void aes_encrypt_top::thread_ret_V_1_32_2_fu_4576_p2() {
    ret_V_1_32_2_fu_4576_p2 = (sboxExp_V_q0.read() ^ ret_V_1_28_2_reg_7268.read());
}

void aes_encrypt_top::thread_ret_V_1_32_3_fu_4591_p2() {
    ret_V_1_32_3_fu_4591_p2 = (sboxExp_V_q1.read() ^ ret_V_1_28_3_reg_7310.read());
}

void aes_encrypt_top::thread_ret_V_1_32_fu_4636_p2() {
    ret_V_1_32_fu_4636_p2 = (ret_V_1_31_reg_7341.read() ^ ret_V_1_28_reg_7241.read());
}

void aes_encrypt_top::thread_ret_V_1_33_1_fu_4641_p2() {
    ret_V_1_33_1_fu_4641_p2 = (ret_V_1_32_1_reg_7354.read() ^ ret_V_1_29_1_reg_7274.read());
}

void aes_encrypt_top::thread_ret_V_1_33_2_fu_4702_p2() {
    ret_V_1_33_2_fu_4702_p2 = (ret_V_1_32_2_reg_7362.read() ^ ret_V_1_29_2_reg_7282.read());
}

void aes_encrypt_top::thread_ret_V_1_33_3_fu_4707_p2() {
    ret_V_1_33_3_fu_4707_p2 = (ret_V_1_32_3_reg_7370.read() ^ ret_V_1_29_3_reg_7316.read());
}

void aes_encrypt_top::thread_ret_V_1_33_fu_4646_p2() {
    ret_V_1_33_fu_4646_p2 = (ret_V_1_31_reg_7341.read() ^ ret_V_1_25_reg_7203.read());
}

void aes_encrypt_top::thread_ret_V_1_34_1_fu_4596_p2() {
    ret_V_1_34_1_fu_4596_p2 = (ret_V_1_32_1_reg_7354.read() ^ ret_V_1_26_1_reg_7191.read());
}

void aes_encrypt_top::thread_ret_V_1_34_2_fu_4600_p2() {
    ret_V_1_34_2_fu_4600_p2 = (ret_V_1_32_2_reg_7362.read() ^ ret_V_1_26_2_reg_7211.read());
}

void aes_encrypt_top::thread_ret_V_1_34_3_fu_4650_p2() {
    ret_V_1_34_3_fu_4650_p2 = (ret_V_1_32_3_reg_7370.read() ^ ret_V_1_26_3_reg_7218.read());
}

void aes_encrypt_top::thread_ret_V_1_34_fu_4654_p2() {
    ret_V_1_34_fu_4654_p2 = (ret_V_1_33_fu_4646_p2.read() ^ ret_V_1_30_reg_7249.read());
}

void aes_encrypt_top::thread_ret_V_1_35_1_fu_4604_p2() {
    ret_V_1_35_1_fu_4604_p2 = (ret_V_1_34_1_fu_4596_p2.read() ^ ret_V_1_31_1_reg_7290.read());
}

void aes_encrypt_top::thread_ret_V_1_35_2_fu_4610_p2() {
    ret_V_1_35_2_fu_4610_p2 = (ret_V_1_34_2_fu_4600_p2.read() ^ ret_V_1_31_2_reg_7297.read());
}

void aes_encrypt_top::thread_ret_V_1_35_3_fu_4660_p2() {
    ret_V_1_35_3_fu_4660_p2 = (ret_V_1_34_3_fu_4650_p2.read() ^ ret_V_1_31_3_reg_7324.read());
}

void aes_encrypt_top::thread_ret_V_1_35_fu_4682_p2() {
    ret_V_1_35_fu_4682_p2 = (ret_V_8_fu_4666_p2.read() ^ ret_V_1_31_reg_7341.read());
}

void aes_encrypt_top::thread_ret_V_1_36_1_fu_4687_p2() {
    ret_V_1_36_1_fu_4687_p2 = (sboxExp_V_q1.read() ^ ret_V_1_32_1_reg_7354.read());
}

void aes_encrypt_top::thread_ret_V_1_36_2_fu_4712_p2() {
    ret_V_1_36_2_fu_4712_p2 = (sboxExp_V_q0.read() ^ ret_V_1_32_2_reg_7362.read());
}

void aes_encrypt_top::thread_ret_V_1_36_3_fu_4718_p2() {
    ret_V_1_36_3_fu_4718_p2 = (sboxExp_V_q1.read() ^ ret_V_1_32_3_reg_7370.read());
}

void aes_encrypt_top::thread_ret_V_1_36_fu_4692_p2() {
    ret_V_1_36_fu_4692_p2 = (ret_V_8_fu_4666_p2.read() ^ ret_V_1_28_reg_7241.read());
}

void aes_encrypt_top::thread_ret_V_1_37_1_fu_4697_p2() {
    ret_V_1_37_1_fu_4697_p2 = (sboxExp_V_q1.read() ^ ret_V_1_29_1_reg_7274.read());
}

void aes_encrypt_top::thread_ret_V_1_37_2_fu_4724_p2() {
    ret_V_1_37_2_fu_4724_p2 = (sboxExp_V_q0.read() ^ ret_V_1_29_2_reg_7282.read());
}

void aes_encrypt_top::thread_ret_V_1_37_3_fu_4730_p2() {
    ret_V_1_37_3_fu_4730_p2 = (sboxExp_V_q1.read() ^ ret_V_1_29_3_reg_7316.read());
}

void aes_encrypt_top::thread_ret_V_1_37_fu_4736_p2() {
    ret_V_1_37_fu_4736_p2 = (ret_V_1_36_reg_7434.read() ^ ret_V_1_33_reg_7400.read());
}

void aes_encrypt_top::thread_ret_V_1_38_1_fu_4741_p2() {
    ret_V_1_38_1_fu_4741_p2 = (ret_V_1_37_1_reg_7442.read() ^ ret_V_1_34_1_reg_7378.read());
}

void aes_encrypt_top::thread_ret_V_1_38_2_fu_4746_p2() {
    ret_V_1_38_2_fu_4746_p2 = (ret_V_1_37_2_fu_4724_p2.read() ^ ret_V_1_34_2_reg_7384.read());
}

void aes_encrypt_top::thread_ret_V_1_38_3_fu_4752_p2() {
    ret_V_1_38_3_fu_4752_p2 = (ret_V_1_37_3_fu_4730_p2.read() ^ ret_V_1_34_3_reg_7406.read());
}

void aes_encrypt_top::thread_ret_V_1_38_fu_4758_p2() {
    ret_V_1_38_fu_4758_p2 = (ret_V_1_36_reg_7434.read() ^ ret_V_1_30_reg_7249.read());
}

void aes_encrypt_top::thread_ret_V_1_39_1_fu_4763_p2() {
    ret_V_1_39_1_fu_4763_p2 = (ret_V_1_37_1_reg_7442.read() ^ ret_V_1_31_1_reg_7290.read());
}

void aes_encrypt_top::thread_ret_V_1_39_2_fu_4768_p2() {
    ret_V_1_39_2_fu_4768_p2 = (ret_V_1_37_2_fu_4724_p2.read() ^ ret_V_1_31_2_reg_7297.read());
}

void aes_encrypt_top::thread_ret_V_1_39_3_fu_4774_p2() {
    ret_V_1_39_3_fu_4774_p2 = (ret_V_1_37_3_fu_4730_p2.read() ^ ret_V_1_31_3_reg_7324.read());
}

void aes_encrypt_top::thread_ret_V_1_3_1_fu_3768_p2() {
    ret_V_1_3_1_fu_3768_p2 = (key_V_load_13_reg_6423.read() ^ ret_V_1_2_1_fu_3756_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_3_2_fu_3801_p2() {
    ret_V_1_3_2_fu_3801_p2 = (key_V_load_14_reg_6438.read() ^ ret_V_1_2_2_fu_3795_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_3_3_fu_3845_p2() {
    ret_V_1_3_3_fu_3845_p2 = (key_V_load_15_reg_6458.read() ^ ret_V_1_2_3_fu_3839_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_3_fu_3762_p2() {
    ret_V_1_3_fu_3762_p2 = (key_V_load_12_reg_6408.read() ^ ret_V_1_2_fu_3751_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_4_1_fu_3888_p2() {
    ret_V_1_4_1_fu_3888_p2 = (reg_3693.read() ^ ret_V_1_0_1_reg_6617.read());
}

void aes_encrypt_top::thread_ret_V_1_4_2_fu_3893_p2() {
    ret_V_1_4_2_fu_3893_p2 = (sboxExp_V_q0.read() ^ ret_V_1_0_2_reg_6658.read());
}

void aes_encrypt_top::thread_ret_V_1_4_3_fu_3867_p2() {
    ret_V_1_4_3_fu_3867_p2 = (reg_3703.read() ^ ret_V_1_0_3_fu_3827_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_4_fu_3862_p2() {
    ret_V_1_4_fu_3862_p2 = (ret_V_4_fu_3851_p2.read() ^ ret_V_s_reg_6611.read());
}

void aes_encrypt_top::thread_ret_V_1_5_1_fu_3899_p2() {
    ret_V_1_5_1_fu_3899_p2 = (reg_3693.read() ^ key_V_load_5_reg_6529.read());
}

void aes_encrypt_top::thread_ret_V_1_5_2_fu_3904_p2() {
    ret_V_1_5_2_fu_3904_p2 = (sboxExp_V_q0.read() ^ key_V_load_6_reg_6542.read());
}

void aes_encrypt_top::thread_ret_V_1_5_3_fu_3812_p2() {
    ret_V_1_5_3_fu_3812_p2 = (sboxExp_V_q1.read() ^ key_V_load_7_reg_6560.read());
}

void aes_encrypt_top::thread_ret_V_1_5_fu_3873_p2() {
    ret_V_1_5_fu_3873_p2 = (key_V_load_4_reg_6516.read() ^ ret_V_4_fu_3851_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_6_1_fu_3976_p2() {
    ret_V_1_6_1_fu_3976_p2 = (ret_V_1_5_1_reg_6750.read() ^ ret_V_1_2_1_reg_6630.read());
}

void aes_encrypt_top::thread_ret_V_1_6_2_fu_3940_p2() {
    ret_V_1_6_2_fu_3940_p2 = (ret_V_1_5_2_reg_6758.read() ^ ret_V_1_2_2_reg_6664.read());
}

void aes_encrypt_top::thread_ret_V_1_6_3_fu_3981_p2() {
    ret_V_1_6_3_fu_3981_p2 = (ret_V_1_5_3_reg_6676.read() ^ ret_V_1_2_3_reg_6701.read());
}

void aes_encrypt_top::thread_ret_V_1_6_fu_4016_p2() {
    ret_V_1_6_fu_4016_p2 = (ret_V_1_5_reg_6725.read() ^ ret_V_1_2_reg_6623.read());
}

void aes_encrypt_top::thread_ret_V_1_7_1_fu_3909_p2() {
    ret_V_1_7_1_fu_3909_p2 = (key_V_load_13_reg_6423.read() ^ ret_V_1_5_1_fu_3899_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_7_2_fu_3914_p2() {
    ret_V_1_7_2_fu_3914_p2 = (key_V_load_14_reg_6438.read() ^ ret_V_1_5_2_fu_3904_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_7_3_fu_3817_p2() {
    ret_V_1_7_3_fu_3817_p2 = (key_V_load_15_reg_6458.read() ^ ret_V_1_5_3_fu_3812_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_7_fu_3878_p2() {
    ret_V_1_7_fu_3878_p2 = (key_V_load_12_reg_6408.read() ^ ret_V_1_5_fu_3873_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_8_1_fu_3956_p2() {
    ret_V_1_8_1_fu_3956_p2 = (sboxExp_V_q1.read() ^ ret_V_1_4_1_reg_6744.read());
}

void aes_encrypt_top::thread_ret_V_1_8_2_fu_3929_p2() {
    ret_V_1_8_2_fu_3929_p2 = (reg_3698.read() ^ ret_V_1_4_2_fu_3893_p2.read());
}

void aes_encrypt_top::thread_ret_V_1_8_3_fu_3935_p2() {
    ret_V_1_8_3_fu_3935_p2 = (sboxExp_V_q1.read() ^ ret_V_1_4_3_reg_6719.read());
}

void aes_encrypt_top::thread_ret_V_1_8_fu_3950_p2() {
    ret_V_1_8_fu_3950_p2 = (tmp2_fu_3945_p2.read() ^ sboxExp_V_q0.read());
}

void aes_encrypt_top::thread_ret_V_1_9_1_fu_4021_p2() {
    ret_V_1_9_1_fu_4021_p2 = (ret_V_1_8_1_reg_6812.read() ^ ret_V_1_5_1_reg_6750.read());
}

void aes_encrypt_top::thread_ret_V_1_9_2_fu_4066_p2() {
    ret_V_1_9_2_fu_4066_p2 = (ret_V_1_8_2_reg_6788.read() ^ ret_V_1_5_2_reg_6758.read());
}

void aes_encrypt_top::thread_ret_V_1_9_3_fu_4071_p2() {
    ret_V_1_9_3_fu_4071_p2 = (ret_V_1_8_3_reg_6796.read() ^ ret_V_1_5_3_reg_6676.read());
}

void aes_encrypt_top::thread_ret_V_1_9_fu_4061_p2() {
    ret_V_1_9_fu_4061_p2 = (ret_V_1_8_reg_6804.read() ^ ret_V_1_5_reg_6725.read());
}

void aes_encrypt_top::thread_ret_V_1_fu_4076_p2() {
    ret_V_1_fu_4076_p2 = (reg_3693.read() ^ ap_const_lv8_8);
}

void aes_encrypt_top::thread_ret_V_1_s_fu_4026_p2() {
    ret_V_1_s_fu_4026_p2 = (ret_V_1_8_reg_6804.read() ^ ret_V_1_2_reg_6623.read());
}

void aes_encrypt_top::thread_ret_V_3_fu_4248_p2() {
    ret_V_3_fu_4248_p2 = (sboxExp_V_q0.read() ^ ap_const_lv8_20);
}

void aes_encrypt_top::thread_ret_V_4_fu_3851_p2() {
    ret_V_4_fu_3851_p2 = (reg_3698.read() ^ ap_const_lv8_2);
}

void aes_encrypt_top::thread_ret_V_6_fu_4441_p2() {
    ret_V_6_fu_4441_p2 = (sboxExp_V_q0.read() ^ ap_const_lv8_80);
}

void aes_encrypt_top::thread_ret_V_8_fu_4666_p2() {
    ret_V_8_fu_4666_p2 = (sboxExp_V_q0.read() ^ ap_const_lv8_36);
}

void aes_encrypt_top::thread_ret_V_s_fu_3728_p2() {
    ret_V_s_fu_3728_p2 = (tmp1_fu_3723_p2.read() ^ reg_3698.read());
}

void aes_encrypt_top::thread_roundKeys_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        roundKeys_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        roundKeys_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        roundKeys_0_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        roundKeys_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_0_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        roundKeys_0_V_address1 =  (sc_lv<4>) (newIndex64_fu_4976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        roundKeys_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_0_V_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else {
        roundKeys_0_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_0_V_ce0 = ap_const_logic_1;
    } else {
        roundKeys_0_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        roundKeys_0_V_ce1 = ap_const_logic_1;
    } else {
        roundKeys_0_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_0_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_0_V_d0 = ret_V_1_35_reg_7422.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        roundKeys_0_V_d0 = ret_V_1_27_reg_7235.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_0_V_d0 = ret_V_1_8_reg_6804.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_0_V_d0 = ret_V_1_4_reg_6713.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        roundKeys_0_V_d0 = key_V_load_reg_6468.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        roundKeys_0_V_d0 = ret_V_s_reg_6611.read();
    } else {
        roundKeys_0_V_d0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_0_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_0_V_d1 = ret_V_1_31_reg_7341.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_0_V_d1 = ret_V_1_23_reg_7159.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        roundKeys_0_V_d1 = ret_V_1_19_reg_7056.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_0_V_d1 = ret_V_1_15_reg_6955.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_0_V_d1 = ret_V_1_11_fu_4082_p2.read();
    } else {
        roundKeys_0_V_d1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_0_V_we0 = ap_const_logic_1;
    } else {
        roundKeys_0_V_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_0_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        roundKeys_0_V_we1 = ap_const_logic_1;
    } else {
        roundKeys_0_V_we1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        roundKeys_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        roundKeys_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        roundKeys_10_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        roundKeys_10_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_10_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        roundKeys_10_V_address1 =  (sc_lv<4>) (newIndex64_fu_4976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_10_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        roundKeys_10_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_10_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        roundKeys_10_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_10_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        roundKeys_10_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_10_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_10_V_ce0 = ap_const_logic_1;
    } else {
        roundKeys_10_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        roundKeys_10_V_ce1 = ap_const_logic_1;
    } else {
        roundKeys_10_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_10_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_10_V_d0 = ret_V_1_38_2_fu_4746_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        roundKeys_10_V_d0 = ret_V_1_30_2_fu_4586_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_10_V_d0 = ret_V_1_22_2_fu_4402_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        roundKeys_10_V_d0 = ret_V_1_14_2_fu_4168_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_10_V_d0 = ret_V_1_2_2_reg_6664.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        roundKeys_10_V_d0 = key_V_load_10_reg_6647.read();
    } else {
        roundKeys_10_V_d0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_10_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_10_V_d1 = ret_V_1_34_2_reg_7384.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        roundKeys_10_V_d1 = ret_V_1_26_2_reg_7211.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_10_V_d1 = ret_V_1_18_2_reg_7015.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        roundKeys_10_V_d1 = ret_V_1_10_2_reg_6820.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_10_V_d1 = ret_V_1_6_2_fu_3940_p2.read();
    } else {
        roundKeys_10_V_d1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_10_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_10_V_we0 = ap_const_logic_1;
    } else {
        roundKeys_10_V_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_10_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_10_V_we1 = ap_const_logic_1;
    } else {
        roundKeys_10_V_we1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_11_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        roundKeys_11_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_11_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        roundKeys_11_V_address1 =  (sc_lv<4>) (newIndex64_fu_4976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_11_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_11_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_11_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_11_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_11_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        roundKeys_11_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_11_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_11_V_ce0 = ap_const_logic_1;
    } else {
        roundKeys_11_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        roundKeys_11_V_ce1 = ap_const_logic_1;
    } else {
        roundKeys_11_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_11_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_11_V_d0 = ret_V_1_38_3_fu_4752_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_11_V_d0 = ret_V_1_30_3_fu_4631_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_11_V_d0 = ret_V_1_22_3_fu_4407_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_11_V_d0 = ret_V_1_14_3_fu_4213_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_11_V_d0 = ret_V_1_2_3_reg_6701.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_11_V_d0 = key_V_load_11_reg_6695.read();
    } else {
        roundKeys_11_V_d0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_11_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_11_V_d1 = ret_V_1_34_3_reg_7406.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_11_V_d1 = ret_V_1_26_3_reg_7218.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_11_V_d1 = ret_V_1_18_3_reg_7039.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_11_V_d1 = ret_V_1_10_3_reg_6839.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_11_V_d1 = ret_V_1_6_3_fu_3981_p2.read();
    } else {
        roundKeys_11_V_d1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_11_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_11_V_we0 = ap_const_logic_1;
    } else {
        roundKeys_11_V_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_11_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_11_V_we1 = ap_const_logic_1;
    } else {
        roundKeys_11_V_we1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        roundKeys_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        roundKeys_12_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        roundKeys_12_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_12_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        roundKeys_12_V_address1 =  (sc_lv<4>) (newIndex64_fu_4976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_12_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        roundKeys_12_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_12_V_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_12_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_12_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else {
        roundKeys_12_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_12_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_12_V_ce0 = ap_const_logic_1;
    } else {
        roundKeys_12_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        roundKeys_12_V_ce1 = ap_const_logic_1;
    } else {
        roundKeys_12_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_12_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_12_V_d0 = ret_V_1_38_fu_4758_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_12_V_d0 = ret_V_1_30_reg_7249.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        roundKeys_12_V_d0 = ret_V_1_22_reg_7137.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_12_V_d0 = ret_V_1_7_reg_6733.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_12_V_d0 = key_V_load_12_reg_6408.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        roundKeys_12_V_d0 = ret_V_1_3_fu_3762_p2.read();
    } else {
        roundKeys_12_V_d0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_12_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_12_V_d1 = ret_V_1_34_fu_4654_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        roundKeys_12_V_d1 = ret_V_1_26_fu_4482_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_12_V_d1 = ret_V_1_14_reg_6971.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_12_V_d1 = ret_V_1_18_fu_4236_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_12_V_d1 = ret_V_1_10_fu_4030_p2.read();
    } else {
        roundKeys_12_V_d1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_12_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_12_V_we0 = ap_const_logic_1;
    } else {
        roundKeys_12_V_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_12_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        roundKeys_12_V_we1 = ap_const_logic_1;
    } else {
        roundKeys_12_V_we1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        roundKeys_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        roundKeys_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        roundKeys_13_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        roundKeys_13_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_13_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        roundKeys_13_V_address1 =  (sc_lv<4>) (newIndex64_fu_4976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_13_V_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        roundKeys_13_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        roundKeys_13_V_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        roundKeys_13_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_13_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else {
        roundKeys_13_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_13_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_13_V_ce0 = ap_const_logic_1;
    } else {
        roundKeys_13_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        roundKeys_13_V_ce1 = ap_const_logic_1;
    } else {
        roundKeys_13_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_13_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_13_V_d0 = ret_V_1_39_1_fu_4763_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        roundKeys_13_V_d0 = ret_V_1_35_1_fu_4604_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        roundKeys_13_V_d0 = ret_V_1_23_1_reg_7115.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_13_V_d0 = ret_V_1_7_1_reg_6766.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_13_V_d0 = key_V_load_13_reg_6423.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        roundKeys_13_V_d0 = ret_V_1_3_1_fu_3768_p2.read();
    } else {
        roundKeys_13_V_d0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_13_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_13_V_d1 = ret_V_1_31_1_reg_7290.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        roundKeys_13_V_d1 = ret_V_1_27_1_fu_4386_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        roundKeys_13_V_d1 = ret_V_1_15_1_reg_6882.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        roundKeys_13_V_d1 = ret_V_1_19_1_fu_4186_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_13_V_d1 = ret_V_1_11_1_fu_3994_p2.read();
    } else {
        roundKeys_13_V_d1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_13_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_13_V_we0 = ap_const_logic_1;
    } else {
        roundKeys_13_V_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_13_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        roundKeys_13_V_we1 = ap_const_logic_1;
    } else {
        roundKeys_13_V_we1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        roundKeys_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        roundKeys_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        roundKeys_14_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        roundKeys_14_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_14_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        roundKeys_14_V_address1 =  (sc_lv<4>) (newIndex64_fu_4976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_14_V_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_14_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        roundKeys_14_V_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        roundKeys_14_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_14_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else {
        roundKeys_14_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_14_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_14_V_ce0 = ap_const_logic_1;
    } else {
        roundKeys_14_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        roundKeys_14_V_ce1 = ap_const_logic_1;
    } else {
        roundKeys_14_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_14_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_14_V_d0 = ret_V_1_39_2_fu_4768_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        roundKeys_14_V_d0 = ret_V_1_35_2_fu_4610_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_14_V_d0 = ret_V_1_23_2_reg_7121.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_14_V_d0 = ret_V_1_7_2_reg_6772.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        roundKeys_14_V_d0 = key_V_load_14_reg_6438.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        roundKeys_14_V_d0 = ret_V_1_3_2_fu_3801_p2.read();
    } else {
        roundKeys_14_V_d0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_14_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_14_V_d1 = ret_V_1_31_2_reg_7297.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_14_V_d1 = ret_V_1_27_2_fu_4429_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        roundKeys_14_V_d1 = ret_V_1_15_2_reg_6929.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        roundKeys_14_V_d1 = ret_V_1_19_2_fu_4192_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_14_V_d1 = ret_V_1_11_2_fu_3965_p2.read();
    } else {
        roundKeys_14_V_d1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_14_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_14_V_we0 = ap_const_logic_1;
    } else {
        roundKeys_14_V_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_14_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        roundKeys_14_V_we1 = ap_const_logic_1;
    } else {
        roundKeys_14_V_we1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        roundKeys_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        roundKeys_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        roundKeys_15_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        roundKeys_15_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_15_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        roundKeys_15_V_address1 =  (sc_lv<4>) (newIndex64_fu_4976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_15_V_address1 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_15_V_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_15_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else {
        roundKeys_15_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_15_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        roundKeys_15_V_ce0 = ap_const_logic_1;
    } else {
        roundKeys_15_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        roundKeys_15_V_ce1 = ap_const_logic_1;
    } else {
        roundKeys_15_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_15_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_15_V_d0 = ret_V_1_35_3_fu_4660_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_15_V_d0 = ret_V_1_23_3_reg_7143.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        roundKeys_15_V_d0 = ret_V_1_15_3_reg_6937.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_15_V_d0 = ret_V_1_19_3_fu_4242_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_15_V_d0 = ret_V_1_11_3_fu_4000_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_15_V_d0 = ret_V_1_7_3_reg_6684.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        roundKeys_15_V_d0 = ret_V_1_3_3_fu_3845_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        roundKeys_15_V_d0 = key_V_load_15_reg_6458.read();
    } else {
        roundKeys_15_V_d0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_15_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_15_V_d1 = ret_V_1_39_3_fu_4774_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_15_V_d1 = ret_V_1_31_3_reg_7324.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_15_V_d1 = ret_V_1_27_3_fu_4435_p2.read();
    } else {
        roundKeys_15_V_d1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_15_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        roundKeys_15_V_we0 = ap_const_logic_1;
    } else {
        roundKeys_15_V_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_15_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_15_V_we1 = ap_const_logic_1;
    } else {
        roundKeys_15_V_we1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        roundKeys_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        roundKeys_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        roundKeys_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        roundKeys_1_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        roundKeys_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_1_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        roundKeys_1_V_address1 =  (sc_lv<4>) (newIndex64_fu_4976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        roundKeys_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        roundKeys_1_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        roundKeys_1_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_1_V_ce0 = ap_const_logic_1;
    } else {
        roundKeys_1_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        roundKeys_1_V_ce1 = ap_const_logic_1;
    } else {
        roundKeys_1_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_1_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_1_V_d0 = ret_V_1_36_1_reg_7428.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        roundKeys_1_V_d0 = ret_V_1_28_1_reg_7262.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        roundKeys_1_V_d0 = ret_V_1_20_1_reg_7062.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        roundKeys_1_V_d0 = ret_V_1_12_1_reg_6868.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_1_V_d0 = ret_V_1_4_1_reg_6744.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        roundKeys_1_V_d0 = key_V_load_1_reg_6480.read();
    } else {
        roundKeys_1_V_d0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_1_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_1_V_d1 = ret_V_1_32_1_reg_7354.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        roundKeys_1_V_d1 = ret_V_1_24_1_reg_7167.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_1_V_d1 = ret_V_1_16_1_reg_6984.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_1_V_d1 = ret_V_1_8_1_reg_6812.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        roundKeys_1_V_d1 = ret_V_1_0_1_reg_6617.read();
    } else {
        roundKeys_1_V_d1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_1_V_we0 = ap_const_logic_1;
    } else {
        roundKeys_1_V_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_1_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        roundKeys_1_V_we1 = ap_const_logic_1;
    } else {
        roundKeys_1_V_we1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        roundKeys_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        roundKeys_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        roundKeys_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        roundKeys_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        roundKeys_2_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        roundKeys_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_2_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        roundKeys_2_V_address1 =  (sc_lv<4>) (newIndex64_fu_4976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        roundKeys_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        roundKeys_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        roundKeys_2_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        roundKeys_2_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_2_V_ce0 = ap_const_logic_1;
    } else {
        roundKeys_2_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        roundKeys_2_V_ce1 = ap_const_logic_1;
    } else {
        roundKeys_2_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_2_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_2_V_d0 = ret_V_1_36_2_fu_4712_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        roundKeys_2_V_d0 = ret_V_1_28_2_reg_7268.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        roundKeys_2_V_d0 = ret_V_1_20_2_reg_7086.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        roundKeys_2_V_d0 = ret_V_1_12_2_reg_6901.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        roundKeys_2_V_d0 = ret_V_1_0_2_reg_6658.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        roundKeys_2_V_d0 = key_V_load_2_reg_6492.read();
    } else {
        roundKeys_2_V_d0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_2_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_2_V_d1 = ret_V_1_32_2_reg_7362.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        roundKeys_2_V_d1 = ret_V_1_24_2_reg_7175.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        roundKeys_2_V_d1 = ret_V_1_16_2_reg_6992.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_2_V_d1 = ret_V_1_8_2_reg_6788.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        roundKeys_2_V_d1 = ret_V_1_4_2_fu_3893_p2.read();
    } else {
        roundKeys_2_V_d1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_2_V_we0 = ap_const_logic_1;
    } else {
        roundKeys_2_V_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_2_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_2_V_we1 = ap_const_logic_1;
    } else {
        roundKeys_2_V_we1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        roundKeys_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        roundKeys_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        roundKeys_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        roundKeys_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        roundKeys_3_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        roundKeys_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_3_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        roundKeys_3_V_address1 =  (sc_lv<4>) (newIndex64_fu_4976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        roundKeys_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        roundKeys_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        roundKeys_3_V_address1 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        roundKeys_3_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_3_V_ce0 = ap_const_logic_1;
    } else {
        roundKeys_3_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        roundKeys_3_V_ce1 = ap_const_logic_1;
    } else {
        roundKeys_3_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_3_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_3_V_d0 = ret_V_1_36_3_fu_4718_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        roundKeys_3_V_d0 = ret_V_1_28_3_reg_7310.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        roundKeys_3_V_d0 = ret_V_1_20_3_reg_7092.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        roundKeys_3_V_d0 = ret_V_1_12_3_reg_6907.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        roundKeys_3_V_d0 = ret_V_1_4_3_reg_6719.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        roundKeys_3_V_d0 = key_V_load_3_reg_6504.read();
    } else {
        roundKeys_3_V_d0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_3_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_3_V_d1 = ret_V_1_32_3_reg_7370.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        roundKeys_3_V_d1 = ret_V_1_24_3_reg_7183.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        roundKeys_3_V_d1 = ret_V_1_16_3_reg_7000.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_3_V_d1 = ret_V_1_8_3_reg_6796.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        roundKeys_3_V_d1 = ret_V_1_0_3_fu_3827_p2.read();
    } else {
        roundKeys_3_V_d1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_3_V_we0 = ap_const_logic_1;
    } else {
        roundKeys_3_V_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_3_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_3_V_we1 = ap_const_logic_1;
    } else {
        roundKeys_3_V_we1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        roundKeys_4_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        roundKeys_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_4_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        roundKeys_4_V_address1 =  (sc_lv<4>) (newIndex64_fu_4976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        roundKeys_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_4_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else {
        roundKeys_4_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_4_V_ce0 = ap_const_logic_1;
    } else {
        roundKeys_4_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        roundKeys_4_V_ce1 = ap_const_logic_1;
    } else {
        roundKeys_4_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_4_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_4_V_d0 = ret_V_1_36_reg_7434.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_4_V_d0 = ret_V_1_28_reg_7241.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_4_V_d0 = ret_V_1_20_reg_7068.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_4_V_d0 = ret_V_1_12_reg_6963.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_4_V_d0 = key_V_load_4_reg_6516.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        roundKeys_4_V_d0 = ret_V_1_1_fu_3739_p2.read();
    } else {
        roundKeys_4_V_d0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_4_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_4_V_d1 = ret_V_1_32_fu_4636_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_4_V_d1 = ret_V_1_24_fu_4412_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_4_V_d1 = ret_V_1_16_fu_4218_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        roundKeys_4_V_d1 = ret_V_1_5_reg_6725.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_4_V_d1 = ret_V_1_9_fu_4061_p2.read();
    } else {
        roundKeys_4_V_d1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_4_V_we0 = ap_const_logic_1;
    } else {
        roundKeys_4_V_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_4_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        roundKeys_4_V_we1 = ap_const_logic_1;
    } else {
        roundKeys_4_V_we1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        roundKeys_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        roundKeys_5_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        roundKeys_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_5_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        roundKeys_5_V_address1 =  (sc_lv<4>) (newIndex64_fu_4976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        roundKeys_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_5_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else {
        roundKeys_5_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        roundKeys_5_V_ce0 = ap_const_logic_1;
    } else {
        roundKeys_5_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        roundKeys_5_V_ce1 = ap_const_logic_1;
    } else {
        roundKeys_5_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_5_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_5_V_d0 = ret_V_1_33_1_fu_4641_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        roundKeys_5_V_d0 = ret_V_1_25_1_fu_4472_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_5_V_d0 = ret_V_1_17_1_fu_4223_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_5_V_d0 = ret_V_1_5_1_reg_6750.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_5_V_d0 = key_V_load_5_reg_6529.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        roundKeys_5_V_d0 = ret_V_1_1_1_fu_3745_p2.read();
    } else {
        roundKeys_5_V_d0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_5_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_5_V_d1 = ret_V_1_37_1_reg_7442.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_5_V_d1 = ret_V_1_29_1_reg_7274.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        roundKeys_5_V_d1 = ret_V_1_21_1_reg_7077.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_5_V_d1 = ret_V_1_13_1_reg_6874.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_5_V_d1 = ret_V_1_9_1_fu_4021_p2.read();
    } else {
        roundKeys_5_V_d1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        roundKeys_5_V_we0 = ap_const_logic_1;
    } else {
        roundKeys_5_V_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_5_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_5_V_we1 = ap_const_logic_1;
    } else {
        roundKeys_5_V_we1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        roundKeys_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        roundKeys_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        roundKeys_6_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        roundKeys_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_6_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        roundKeys_6_V_address1 =  (sc_lv<4>) (newIndex64_fu_4976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        roundKeys_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        roundKeys_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_6_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else {
        roundKeys_6_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_6_V_ce0 = ap_const_logic_1;
    } else {
        roundKeys_6_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        roundKeys_6_V_ce1 = ap_const_logic_1;
    } else {
        roundKeys_6_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_6_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_6_V_d0 = ret_V_1_37_2_fu_4724_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        roundKeys_6_V_d0 = ret_V_1_25_2_fu_4477_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        roundKeys_6_V_d0 = ret_V_1_17_2_fu_4284_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_6_V_d0 = ret_V_1_5_2_reg_6758.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_6_V_d0 = key_V_load_6_reg_6542.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        roundKeys_6_V_d0 = ret_V_1_1_2_fu_3789_p2.read();
    } else {
        roundKeys_6_V_d0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_6_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_6_V_d1 = ret_V_1_33_2_fu_4702_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_6_V_d1 = ret_V_1_29_2_reg_7282.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        roundKeys_6_V_d1 = ret_V_1_21_2_reg_7098.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        roundKeys_6_V_d1 = ret_V_1_13_2_reg_6913.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_6_V_d1 = ret_V_1_9_2_fu_4066_p2.read();
    } else {
        roundKeys_6_V_d1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_6_V_we0 = ap_const_logic_1;
    } else {
        roundKeys_6_V_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_6_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_6_V_we1 = ap_const_logic_1;
    } else {
        roundKeys_6_V_we1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        roundKeys_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        roundKeys_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_2);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        roundKeys_7_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else {
        roundKeys_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_7_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        roundKeys_7_V_address1 =  (sc_lv<4>) (newIndex64_fu_4976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        roundKeys_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        roundKeys_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_7_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else {
        roundKeys_7_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_7_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_7_V_ce0 = ap_const_logic_1;
    } else {
        roundKeys_7_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        roundKeys_7_V_ce1 = ap_const_logic_1;
    } else {
        roundKeys_7_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_7_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_7_V_d0 = ret_V_1_37_3_fu_4730_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        roundKeys_7_V_d0 = ret_V_1_25_3_fu_4527_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        roundKeys_7_V_d0 = ret_V_1_17_3_fu_4289_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_7_V_d0 = ret_V_1_5_3_reg_6676.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_7_V_d0 = key_V_load_7_reg_6560.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        roundKeys_7_V_d0 = ret_V_1_1_3_fu_3833_p2.read();
    } else {
        roundKeys_7_V_d0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_7_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_7_V_d1 = ret_V_1_33_3_fu_4707_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_7_V_d1 = ret_V_1_29_3_reg_7316.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        roundKeys_7_V_d1 = ret_V_1_21_3_reg_7106.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        roundKeys_7_V_d1 = ret_V_1_13_3_reg_6921.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        roundKeys_7_V_d1 = ret_V_1_9_3_fu_4071_p2.read();
    } else {
        roundKeys_7_V_d1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_7_V_we0 = ap_const_logic_1;
    } else {
        roundKeys_7_V_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_7_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_7_V_we1 = ap_const_logic_1;
    } else {
        roundKeys_7_V_we1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_8_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        roundKeys_8_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_8_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        roundKeys_8_V_address1 =  (sc_lv<4>) (newIndex64_fu_4976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_8_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_8_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_8_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_8_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_8_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        roundKeys_8_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_8_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_8_V_ce0 = ap_const_logic_1;
    } else {
        roundKeys_8_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        roundKeys_8_V_ce1 = ap_const_logic_1;
    } else {
        roundKeys_8_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_8_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_8_V_d0 = ret_V_1_37_fu_4736_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_8_V_d0 = ret_V_1_29_fu_4626_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_8_V_d0 = ret_V_1_21_fu_4397_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_8_V_d0 = ret_V_1_13_fu_4208_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_8_V_d0 = ret_V_1_2_reg_6623.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_8_V_d0 = key_V_load_8_reg_6583.read();
    } else {
        roundKeys_8_V_d0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_8_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_8_V_d1 = ret_V_1_33_reg_7400.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        roundKeys_8_V_d1 = ret_V_1_25_reg_7203.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        roundKeys_8_V_d1 = ret_V_1_17_reg_7032.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        roundKeys_8_V_d1 = ret_V_1_s_reg_6856.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        roundKeys_8_V_d1 = ret_V_1_6_fu_4016_p2.read();
    } else {
        roundKeys_8_V_d1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_8_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_8_V_we0 = ap_const_logic_1;
    } else {
        roundKeys_8_V_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_8_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_8_V_we1 = ap_const_logic_1;
    } else {
        roundKeys_8_V_we1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_A);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        roundKeys_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_8);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        roundKeys_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_6);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        roundKeys_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_4);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_9_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        roundKeys_9_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_9_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        roundKeys_9_V_address1 =  (sc_lv<4>) (newIndex64_fu_4976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_9_V_address1 =  (sc_lv<4>) (ap_const_lv64_9);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        roundKeys_9_V_address1 =  (sc_lv<4>) (ap_const_lv64_7);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        roundKeys_9_V_address1 =  (sc_lv<4>) (ap_const_lv64_5);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        roundKeys_9_V_address1 =  (sc_lv<4>) (ap_const_lv64_3);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_9_V_address1 =  (sc_lv<4>) (ap_const_lv64_2);
    } else {
        roundKeys_9_V_address1 =  (sc_lv<4>) ("XXXX");
    }
}

void aes_encrypt_top::thread_roundKeys_9_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_9_V_ce0 = ap_const_logic_1;
    } else {
        roundKeys_9_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        roundKeys_9_V_ce1 = ap_const_logic_1;
    } else {
        roundKeys_9_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_9_V_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_9_V_d0 = ret_V_1_38_1_fu_4741_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        roundKeys_9_V_d0 = ret_V_1_30_1_fu_4581_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        roundKeys_9_V_d0 = ret_V_1_22_1_fu_4367_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        roundKeys_9_V_d0 = ret_V_1_14_1_fu_4163_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_9_V_d0 = ret_V_1_2_1_reg_6630.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        roundKeys_9_V_d0 = key_V_load_9_reg_6600.read();
    } else {
        roundKeys_9_V_d0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_9_V_d1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        roundKeys_9_V_d1 = ret_V_1_34_1_reg_7378.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        roundKeys_9_V_d1 = ret_V_1_26_1_reg_7191.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        roundKeys_9_V_d1 = ret_V_1_18_1_reg_7008.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        roundKeys_9_V_d1 = ret_V_1_10_1_reg_6832.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        roundKeys_9_V_d1 = ret_V_1_6_1_fu_3976_p2.read();
    } else {
        roundKeys_9_V_d1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_roundKeys_9_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_9_V_we0 = ap_const_logic_1;
    } else {
        roundKeys_9_V_we0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_roundKeys_9_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        roundKeys_9_V_we1 = ap_const_logic_1;
    } else {
        roundKeys_9_V_we1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_round_fu_6004_p2() {
    round_fu_6004_p2 = (!ap_const_lv4_1.is_01() || !round_assign_reg_3494.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_1) + sc_biguint<4>(round_assign_reg_3494.read()));
}

void aes_encrypt_top::thread_sboxExp_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_12_7_fu_4672_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_3_7_fu_4616_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_12_6_fu_4551_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_3_6_fu_4522_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_12_5_fu_4452_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_3_5_fu_4392_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_12_3_fu_4341_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_3_3_fu_4323_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_12_2_fu_4254_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_3_2_fu_4198_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_12_1_fu_4123_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_3_1_fu_4056_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_12_s_fu_4011_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_11_s_fu_3971_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_3_8_fu_3919_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_12_4_fu_3857_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_11_4_fu_3807_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_3_4_fu_3774_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_3_fu_3711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        sboxExp_V_address0 =  (sc_lv<8>) (tmp_7_fu_3707_p1.read());
    } else {
        sboxExp_V_address0 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_sboxExp_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_13_7_fu_4677_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_11_7_fu_4621_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_13_6_fu_4567_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_11_6_fu_4547_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_13_5_fu_4487_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_11_5_fu_4447_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_13_3_fu_4346_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_11_3_fu_4328_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_13_2_fu_4259_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_11_2_fu_4203_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_13_1_fu_4148_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_11_1_fu_4118_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_13_s_fu_4036_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_3_s_fu_4006_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_11_8_fu_3924_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_13_8_fu_3883_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_12_8_fu_3822_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_13_4_fu_3779_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_6_fu_3719_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        sboxExp_V_address1 =  (sc_lv<8>) (tmp_1_fu_3715_p1.read());
    } else {
        sboxExp_V_address1 = "XXXXXXXX";
    }
}

void aes_encrypt_top::thread_sboxExp_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        sboxExp_V_ce0 = ap_const_logic_1;
    } else {
        sboxExp_V_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxExp_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        sboxExp_V_ce1 = ap_const_logic_1;
    } else {
        sboxExp_V_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_0_address0 =  (sc_lv<7>) (newIndex1_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        sboxSub_V_0_address0 =  (sc_lv<7>) (newIndex51_fu_5344_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        sboxSub_V_0_address0 =  (sc_lv<7>) (newIndex35_fu_5184_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        sboxSub_V_0_address0 =  (sc_lv<7>) (newIndex19_fu_5024_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        sboxSub_V_0_address0 =  (sc_lv<7>) (newIndex3_fu_4892_p1.read());
    } else {
        sboxSub_V_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_0_address1 =  (sc_lv<7>) (newIndex5_fu_6016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        sboxSub_V_0_address1 =  (sc_lv<7>) (newIndex55_fu_5349_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        sboxSub_V_0_address1 =  (sc_lv<7>) (newIndex39_fu_5189_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        sboxSub_V_0_address1 =  (sc_lv<7>) (newIndex23_fu_5029_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        sboxSub_V_0_address1 =  (sc_lv<7>) (newIndex7_fu_4902_p1.read());
    } else {
        sboxSub_V_0_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_address10() {
    sboxSub_V_0_address10 =  (sc_lv<7>) (newIndex41_fu_6070_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_0_address11() {
    sboxSub_V_0_address11 =  (sc_lv<7>) (newIndex45_fu_6076_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_0_address12() {
    sboxSub_V_0_address12 =  (sc_lv<7>) (newIndex49_fu_6082_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_0_address13() {
    sboxSub_V_0_address13 =  (sc_lv<7>) (newIndex53_fu_6088_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_0_address14() {
    sboxSub_V_0_address14 =  (sc_lv<7>) (newIndex57_fu_6094_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_0_address15() {
    sboxSub_V_0_address15 =  (sc_lv<7>) (newIndex61_fu_6100_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_0_address2() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_0_address2 =  (sc_lv<7>) (newIndex9_fu_6022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        sboxSub_V_0_address2 =  (sc_lv<7>) (newIndex59_fu_5354_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        sboxSub_V_0_address2 =  (sc_lv<7>) (newIndex43_fu_5194_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        sboxSub_V_0_address2 =  (sc_lv<7>) (newIndex27_fu_5034_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        sboxSub_V_0_address2 =  (sc_lv<7>) (newIndex11_fu_4912_p1.read());
    } else {
        sboxSub_V_0_address2 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_address3() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_0_address3 =  (sc_lv<7>) (newIndex13_fu_6028_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        sboxSub_V_0_address3 =  (sc_lv<7>) (newIndex63_fu_5359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        sboxSub_V_0_address3 =  (sc_lv<7>) (newIndex47_fu_5199_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        sboxSub_V_0_address3 =  (sc_lv<7>) (newIndex31_fu_5039_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        sboxSub_V_0_address3 =  (sc_lv<7>) (newIndex15_fu_4922_p1.read());
    } else {
        sboxSub_V_0_address3 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_address4() {
    sboxSub_V_0_address4 =  (sc_lv<7>) (newIndex17_fu_6034_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_0_address5() {
    sboxSub_V_0_address5 =  (sc_lv<7>) (newIndex21_fu_6040_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_0_address6() {
    sboxSub_V_0_address6 =  (sc_lv<7>) (newIndex25_fu_6046_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_0_address7() {
    sboxSub_V_0_address7 =  (sc_lv<7>) (newIndex29_fu_6052_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_0_address8() {
    sboxSub_V_0_address8 =  (sc_lv<7>) (newIndex33_fu_6058_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_0_address9() {
    sboxSub_V_0_address9 =  (sc_lv<7>) (newIndex37_fu_6064_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        sboxSub_V_0_ce0 = ap_const_logic_1;
    } else {
        sboxSub_V_0_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        sboxSub_V_0_ce1 = ap_const_logic_1;
    } else {
        sboxSub_V_0_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_ce10() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_0_ce10 = ap_const_logic_1;
    } else {
        sboxSub_V_0_ce10 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_ce11() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_0_ce11 = ap_const_logic_1;
    } else {
        sboxSub_V_0_ce11 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_ce12() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_0_ce12 = ap_const_logic_1;
    } else {
        sboxSub_V_0_ce12 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_ce13() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_0_ce13 = ap_const_logic_1;
    } else {
        sboxSub_V_0_ce13 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_ce14() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_0_ce14 = ap_const_logic_1;
    } else {
        sboxSub_V_0_ce14 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_ce15() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_0_ce15 = ap_const_logic_1;
    } else {
        sboxSub_V_0_ce15 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_ce2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        sboxSub_V_0_ce2 = ap_const_logic_1;
    } else {
        sboxSub_V_0_ce2 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_ce3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        sboxSub_V_0_ce3 = ap_const_logic_1;
    } else {
        sboxSub_V_0_ce3 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_ce4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_0_ce4 = ap_const_logic_1;
    } else {
        sboxSub_V_0_ce4 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_ce5() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_0_ce5 = ap_const_logic_1;
    } else {
        sboxSub_V_0_ce5 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_ce6() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_0_ce6 = ap_const_logic_1;
    } else {
        sboxSub_V_0_ce6 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_ce7() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_0_ce7 = ap_const_logic_1;
    } else {
        sboxSub_V_0_ce7 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_ce8() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_0_ce8 = ap_const_logic_1;
    } else {
        sboxSub_V_0_ce8 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_0_ce9() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_0_ce9 = ap_const_logic_1;
    } else {
        sboxSub_V_0_ce9 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_1_address0 =  (sc_lv<7>) (newIndex1_fu_6010_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        sboxSub_V_1_address0 =  (sc_lv<7>) (newIndex51_fu_5344_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        sboxSub_V_1_address0 =  (sc_lv<7>) (newIndex35_fu_5184_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        sboxSub_V_1_address0 =  (sc_lv<7>) (newIndex19_fu_5024_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        sboxSub_V_1_address0 =  (sc_lv<7>) (newIndex3_fu_4892_p1.read());
    } else {
        sboxSub_V_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_1_address1 =  (sc_lv<7>) (newIndex5_fu_6016_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        sboxSub_V_1_address1 =  (sc_lv<7>) (newIndex55_fu_5349_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        sboxSub_V_1_address1 =  (sc_lv<7>) (newIndex39_fu_5189_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        sboxSub_V_1_address1 =  (sc_lv<7>) (newIndex23_fu_5029_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        sboxSub_V_1_address1 =  (sc_lv<7>) (newIndex7_fu_4902_p1.read());
    } else {
        sboxSub_V_1_address1 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_address10() {
    sboxSub_V_1_address10 =  (sc_lv<7>) (newIndex41_fu_6070_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_1_address11() {
    sboxSub_V_1_address11 =  (sc_lv<7>) (newIndex45_fu_6076_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_1_address12() {
    sboxSub_V_1_address12 =  (sc_lv<7>) (newIndex49_fu_6082_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_1_address13() {
    sboxSub_V_1_address13 =  (sc_lv<7>) (newIndex53_fu_6088_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_1_address14() {
    sboxSub_V_1_address14 =  (sc_lv<7>) (newIndex57_fu_6094_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_1_address15() {
    sboxSub_V_1_address15 =  (sc_lv<7>) (newIndex61_fu_6100_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_1_address2() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_1_address2 =  (sc_lv<7>) (newIndex9_fu_6022_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        sboxSub_V_1_address2 =  (sc_lv<7>) (newIndex59_fu_5354_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        sboxSub_V_1_address2 =  (sc_lv<7>) (newIndex43_fu_5194_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        sboxSub_V_1_address2 =  (sc_lv<7>) (newIndex27_fu_5034_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        sboxSub_V_1_address2 =  (sc_lv<7>) (newIndex11_fu_4912_p1.read());
    } else {
        sboxSub_V_1_address2 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_address3() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_1_address3 =  (sc_lv<7>) (newIndex13_fu_6028_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        sboxSub_V_1_address3 =  (sc_lv<7>) (newIndex63_fu_5359_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        sboxSub_V_1_address3 =  (sc_lv<7>) (newIndex47_fu_5199_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        sboxSub_V_1_address3 =  (sc_lv<7>) (newIndex31_fu_5039_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        sboxSub_V_1_address3 =  (sc_lv<7>) (newIndex15_fu_4922_p1.read());
    } else {
        sboxSub_V_1_address3 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_address4() {
    sboxSub_V_1_address4 =  (sc_lv<7>) (newIndex17_fu_6034_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_1_address5() {
    sboxSub_V_1_address5 =  (sc_lv<7>) (newIndex21_fu_6040_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_1_address6() {
    sboxSub_V_1_address6 =  (sc_lv<7>) (newIndex25_fu_6046_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_1_address7() {
    sboxSub_V_1_address7 =  (sc_lv<7>) (newIndex29_fu_6052_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_1_address8() {
    sboxSub_V_1_address8 =  (sc_lv<7>) (newIndex33_fu_6058_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_1_address9() {
    sboxSub_V_1_address9 =  (sc_lv<7>) (newIndex37_fu_6064_p1.read());
}

void aes_encrypt_top::thread_sboxSub_V_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        sboxSub_V_1_ce0 = ap_const_logic_1;
    } else {
        sboxSub_V_1_ce0 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        sboxSub_V_1_ce1 = ap_const_logic_1;
    } else {
        sboxSub_V_1_ce1 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_ce10() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_1_ce10 = ap_const_logic_1;
    } else {
        sboxSub_V_1_ce10 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_ce11() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_1_ce11 = ap_const_logic_1;
    } else {
        sboxSub_V_1_ce11 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_ce12() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_1_ce12 = ap_const_logic_1;
    } else {
        sboxSub_V_1_ce12 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_ce13() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_1_ce13 = ap_const_logic_1;
    } else {
        sboxSub_V_1_ce13 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_ce14() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_1_ce14 = ap_const_logic_1;
    } else {
        sboxSub_V_1_ce14 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_ce15() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_1_ce15 = ap_const_logic_1;
    } else {
        sboxSub_V_1_ce15 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_ce2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        sboxSub_V_1_ce2 = ap_const_logic_1;
    } else {
        sboxSub_V_1_ce2 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_ce3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
        sboxSub_V_1_ce3 = ap_const_logic_1;
    } else {
        sboxSub_V_1_ce3 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_ce4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_1_ce4 = ap_const_logic_1;
    } else {
        sboxSub_V_1_ce4 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_ce5() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_1_ce5 = ap_const_logic_1;
    } else {
        sboxSub_V_1_ce5 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_ce6() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_1_ce6 = ap_const_logic_1;
    } else {
        sboxSub_V_1_ce6 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_ce7() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_1_ce7 = ap_const_logic_1;
    } else {
        sboxSub_V_1_ce7 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_ce8() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_1_ce8 = ap_const_logic_1;
    } else {
        sboxSub_V_1_ce8 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_1_ce9() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        sboxSub_V_1_ce9 = ap_const_logic_1;
    } else {
        sboxSub_V_1_ce9 = ap_const_logic_0;
    }
}

void aes_encrypt_top::thread_sboxSub_V_load_0_0_p_fu_6110_p3() {
    sboxSub_V_load_0_0_p_fu_6110_p3 = (!tmp_9_fu_6106_p1.read()[0].is_01())? sc_lv<8>(): ((tmp_9_fu_6106_p1.read()[0].to_bool())? sboxSub_V_1_q0.read(): sboxSub_V_0_q0.read());
}

void aes_encrypt_top::thread_sboxSub_V_load_0_1_p_fu_6122_p3() {
    sboxSub_V_load_0_1_p_fu_6122_p3 = (!tmp_10_fu_6118_p1.read()[0].is_01())? sc_lv<8>(): ((tmp_10_fu_6118_p1.read()[0].to_bool())? sboxSub_V_1_q1.read(): sboxSub_V_0_q1.read());
}

void aes_encrypt_top::thread_sboxSub_V_load_0_2_p_fu_6134_p3() {
    sboxSub_V_load_0_2_p_fu_6134_p3 = (!tmp_11_fu_6130_p1.read()[0].is_01())? sc_lv<8>(): ((tmp_11_fu_6130_p1.read()[0].to_bool())? sboxSub_V_1_q2.read(): sboxSub_V_0_q2.read());
}

void aes_encrypt_top::thread_sboxSub_V_load_0_3_p_fu_6146_p3() {
    sboxSub_V_load_0_3_p_fu_6146_p3 = (!tmp_12_fu_6142_p1.read()[0].is_01())? sc_lv<8>(): ((tmp_12_fu_6142_p1.read()[0].to_bool())? sboxSub_V_1_q3.read(): sboxSub_V_0_q3.read());
}

void aes_encrypt_top::thread_sboxSub_V_load_1_1_p_fu_6170_p3() {
    sboxSub_V_load_1_1_p_fu_6170_p3 = (!tmp_14_fu_6166_p1.read()[0].is_01())? sc_lv<8>(): ((tmp_14_fu_6166_p1.read()[0].to_bool())? sboxSub_V_1_q5.read(): sboxSub_V_0_q5.read());
}

void aes_encrypt_top::thread_sboxSub_V_load_1_2_p_fu_6182_p3() {
    sboxSub_V_load_1_2_p_fu_6182_p3 = (!tmp_15_fu_6178_p1.read()[0].is_01())? sc_lv<8>(): ((tmp_15_fu_6178_p1.read()[0].to_bool())? sboxSub_V_1_q6.read(): sboxSub_V_0_q6.read());
}

void aes_encrypt_top::thread_sboxSub_V_load_1_3_p_fu_6194_p3() {
    sboxSub_V_load_1_3_p_fu_6194_p3 = (!tmp_16_fu_6190_p1.read()[0].is_01())? sc_lv<8>(): ((tmp_16_fu_6190_p1.read()[0].to_bool())? sboxSub_V_1_q7.read(): sboxSub_V_0_q7.read());
}

void aes_encrypt_top::thread_sboxSub_V_load_2_2_p_fu_6230_p3() {
    sboxSub_V_load_2_2_p_fu_6230_p3 = (!tmp_19_fu_6226_p1.read()[0].is_01())? sc_lv<8>(): ((tmp_19_fu_6226_p1.read()[0].to_bool())? sboxSub_V_1_q10.read(): sboxSub_V_0_q10.read());
}

void aes_encrypt_top::thread_sboxSub_V_load_2_3_p_fu_6242_p3() {
    sboxSub_V_load_2_3_p_fu_6242_p3 = (!tmp_20_fu_6238_p1.read()[0].is_01())? sc_lv<8>(): ((tmp_20_fu_6238_p1.read()[0].to_bool())? sboxSub_V_1_q11.read(): sboxSub_V_0_q11.read());
}

void aes_encrypt_top::thread_sboxSub_V_load_3_0_p_fu_6254_p3() {
    sboxSub_V_load_3_0_p_fu_6254_p3 = (!tmp_21_fu_6250_p1.read()[0].is_01())? sc_lv<8>(): ((tmp_21_fu_6250_p1.read()[0].to_bool())? sboxSub_V_1_q12.read(): sboxSub_V_0_q12.read());
}

void aes_encrypt_top::thread_sboxSub_V_load_3_1_p_fu_6266_p3() {
    sboxSub_V_load_3_1_p_fu_6266_p3 = (!tmp_22_fu_6262_p1.read()[0].is_01())? sc_lv<8>(): ((tmp_22_fu_6262_p1.read()[0].to_bool())? sboxSub_V_1_q13.read(): sboxSub_V_0_q13.read());
}

void aes_encrypt_top::thread_sboxSub_V_load_3_2_p_fu_6278_p3() {
    sboxSub_V_load_3_2_p_fu_6278_p3 = (!tmp_23_fu_6274_p1.read()[0].is_01())? sc_lv<8>(): ((tmp_23_fu_6274_p1.read()[0].to_bool())? sboxSub_V_1_q14.read(): sboxSub_V_0_q14.read());
}

void aes_encrypt_top::thread_state_0_0_V_1_fu_4996_p3() {
    state_0_0_V_1_fu_4996_p3 = (!tmp_25_reg_7681.read()[0].is_01())? sc_lv<8>(): ((tmp_25_reg_7681.read()[0].to_bool())? sboxSub_V_1_q0.read(): sboxSub_V_0_q0.read());
}

void aes_encrypt_top::thread_state_0_0_V_2_fu_6298_p2() {
    state_0_0_V_2_fu_6298_p2 = (sboxSub_V_load_0_0_p_fu_6110_p3.read() ^ ret_V_1_35_reg_7422.read());
}

void aes_encrypt_top::thread_state_0_0_V_3_fu_5651_p2() {
    state_0_0_V_3_fu_5651_p2 = (tmp8_fu_5645_p2.read() ^ tmp6_fu_5636_p2.read());
}

void aes_encrypt_top::thread_state_0_0_V_fu_4802_p2() {
    state_0_0_V_fu_4802_p2 = (input_V_q0.read() ^ key_V_load_reg_6468.read());
}

void aes_encrypt_top::thread_state_0_1_V_1_fu_5003_p3() {
    state_0_1_V_1_fu_5003_p3 = (!tmp_26_reg_7696.read()[0].is_01())? sc_lv<8>(): ((tmp_26_reg_7696.read()[0].to_bool())? sboxSub_V_1_q1.read(): sboxSub_V_0_q1.read());
}

void aes_encrypt_top::thread_state_0_1_V_2_fu_6320_p2() {
    state_0_1_V_2_fu_6320_p2 = (sboxSub_V_load_0_1_p_fu_6122_p3.read() ^ ret_V_1_36_reg_7434.read());
}

void aes_encrypt_top::thread_state_0_1_V_3_fu_5744_p2() {
    state_0_1_V_3_fu_5744_p2 = (tmp22_fu_5738_p2.read() ^ tmp20_fu_5729_p2.read());
}

void aes_encrypt_top::thread_state_0_1_V_fu_4822_p2() {
    state_0_1_V_fu_4822_p2 = (input_V_q1.read() ^ key_V_load_4_reg_6516.read());
}

void aes_encrypt_top::thread_state_0_2_V_1_fu_5010_p3() {
    state_0_2_V_1_fu_5010_p3 = (!tmp_27_reg_7711.read()[0].is_01())? sc_lv<8>(): ((tmp_27_reg_7711.read()[0].to_bool())? sboxSub_V_1_q2.read(): sboxSub_V_0_q2.read());
}

void aes_encrypt_top::thread_state_0_2_V_2_fu_6340_p2() {
    state_0_2_V_2_fu_6340_p2 = (sboxSub_V_load_0_2_p_fu_6134_p3.read() ^ ret_V_1_37_reg_7470.read());
}

void aes_encrypt_top::thread_state_0_2_V_3_fu_5837_p2() {
    state_0_2_V_3_fu_5837_p2 = (tmp36_fu_5831_p2.read() ^ tmp34_fu_5822_p2.read());
}

void aes_encrypt_top::thread_state_0_2_V_fu_4842_p2() {
    state_0_2_V_fu_4842_p2 = (input_V_q1.read() ^ key_V_load_8_reg_6583.read());
}

void aes_encrypt_top::thread_state_0_3_V_1_fu_5017_p3() {
    state_0_3_V_1_fu_5017_p3 = (!tmp_28_reg_7726.read()[0].is_01())? sc_lv<8>(): ((tmp_28_reg_7726.read()[0].to_bool())? sboxSub_V_1_q3.read(): sboxSub_V_0_q3.read());
}

void aes_encrypt_top::thread_state_0_3_V_2_fu_6360_p2() {
    state_0_3_V_2_fu_6360_p2 = (sboxSub_V_load_0_3_p_fu_6146_p3.read() ^ ret_V_1_38_reg_7490.read());
}

void aes_encrypt_top::thread_state_0_3_V_3_fu_5930_p2() {
    state_0_3_V_3_fu_5930_p2 = (tmp50_fu_5924_p2.read() ^ tmp48_fu_5915_p2.read());
}

void aes_encrypt_top::thread_state_0_3_V_fu_4862_p2() {
    state_0_3_V_fu_4862_p2 = (input_V_q1.read() ^ key_V_load_12_reg_6408.read());
}

void aes_encrypt_top::thread_state_1_0_V_1_fu_6304_p2() {
    state_1_0_V_1_fu_6304_p2 = (sboxSub_V_load_1_1_p_fu_6170_p3.read() ^ ret_V_1_36_1_reg_7428.read());
}

void aes_encrypt_top::thread_state_1_0_V_2_fu_5163_p3() {
    state_1_0_V_2_fu_5163_p3 = (!tmp_30_reg_7751.read()[0].is_01())? sc_lv<8>(): ((tmp_30_reg_7751.read()[0].to_bool())? sboxSub_V_1_q1.read(): sboxSub_V_0_q1.read());
}

void aes_encrypt_top::thread_state_1_0_V_3_fu_5676_p2() {
    state_1_0_V_3_fu_5676_p2 = (tmp12_fu_5670_p2.read() ^ tmp10_fu_5661_p2.read());
}

void aes_encrypt_top::thread_state_1_0_V_fu_4807_p2() {
    state_1_0_V_fu_4807_p2 = (input_V_q1.read() ^ key_V_load_1_reg_6480.read());
}

void aes_encrypt_top::thread_state_1_1_V_1_fu_6325_p2() {
    state_1_1_V_1_fu_6325_p2 = (sboxSub_V_load_1_2_p_fu_6182_p3.read() ^ ret_V_1_37_1_reg_7442.read());
}

void aes_encrypt_top::thread_state_1_1_V_2_fu_5170_p3() {
    state_1_1_V_2_fu_5170_p3 = (!tmp_31_reg_7761.read()[0].is_01())? sc_lv<8>(): ((tmp_31_reg_7761.read()[0].to_bool())? sboxSub_V_1_q2.read(): sboxSub_V_0_q2.read());
}

void aes_encrypt_top::thread_state_1_1_V_3_fu_5769_p2() {
    state_1_1_V_3_fu_5769_p2 = (tmp26_fu_5763_p2.read() ^ tmp24_fu_5754_p2.read());
}

void aes_encrypt_top::thread_state_1_1_V_fu_4827_p2() {
    state_1_1_V_fu_4827_p2 = (input_V_q0.read() ^ key_V_load_5_reg_6529.read());
}

void aes_encrypt_top::thread_state_1_2_V_1_fu_6345_p2() {
    state_1_2_V_1_fu_6345_p2 = (sboxSub_V_load_1_3_p_fu_6194_p3.read() ^ ret_V_1_38_1_reg_7475.read());
}

void aes_encrypt_top::thread_state_1_2_V_2_fu_5177_p3() {
    state_1_2_V_2_fu_5177_p3 = (!tmp_32_reg_7771.read()[0].is_01())? sc_lv<8>(): ((tmp_32_reg_7771.read()[0].to_bool())? sboxSub_V_1_q3.read(): sboxSub_V_0_q3.read());
}

void aes_encrypt_top::thread_state_1_2_V_3_fu_5862_p2() {
    state_1_2_V_3_fu_5862_p2 = (tmp40_fu_5856_p2.read() ^ tmp38_fu_5847_p2.read());
}

void aes_encrypt_top::thread_state_1_2_V_fu_4847_p2() {
    state_1_2_V_fu_4847_p2 = (input_V_q0.read() ^ key_V_load_9_reg_6600.read());
}

void aes_encrypt_top::thread_state_1_3_V_1_fu_6365_p2() {
    state_1_3_V_1_fu_6365_p2 = (temp_V_fu_6158_p3.read() ^ ret_V_1_39_1_reg_7495.read());
}

void aes_encrypt_top::thread_state_1_3_V_3_fu_5955_p2() {
    state_1_3_V_3_fu_5955_p2 = (tmp54_fu_5949_p2.read() ^ tmp52_fu_5940_p2.read());
}

void aes_encrypt_top::thread_state_1_3_V_fu_4867_p2() {
    state_1_3_V_fu_4867_p2 = (input_V_q0.read() ^ key_V_load_13_reg_6423.read());
}

void aes_encrypt_top::thread_state_2_0_V_1_fu_6310_p2() {
    state_2_0_V_1_fu_6310_p2 = (sboxSub_V_load_2_2_p_fu_6230_p3.read() ^ ret_V_1_36_2_reg_7450.read());
}

void aes_encrypt_top::thread_state_2_0_V_2_fu_5330_p3() {
    state_2_0_V_2_fu_5330_p3 = (!tmp_35_reg_7801.read()[0].is_01())? sc_lv<8>(): ((tmp_35_reg_7801.read()[0].to_bool())? sboxSub_V_1_q2.read(): sboxSub_V_0_q2.read());
}

void aes_encrypt_top::thread_state_2_0_V_3_fu_5698_p2() {
    state_2_0_V_3_fu_5698_p2 = (tmp15_fu_5692_p2.read() ^ tmp14_fu_5682_p2.read());
}

void aes_encrypt_top::thread_state_2_0_V_fu_4812_p2() {
    state_2_0_V_fu_4812_p2 = (input_V_q1.read() ^ key_V_load_2_reg_6492.read());
}

void aes_encrypt_top::thread_state_2_1_V_1_fu_6330_p2() {
    state_2_1_V_1_fu_6330_p2 = (sboxSub_V_load_2_3_p_fu_6242_p3.read() ^ ret_V_1_37_2_reg_7460.read());
}

void aes_encrypt_top::thread_state_2_1_V_2_fu_5337_p3() {
    state_2_1_V_2_fu_5337_p3 = (!tmp_36_reg_7811.read()[0].is_01())? sc_lv<8>(): ((tmp_36_reg_7811.read()[0].to_bool())? sboxSub_V_1_q3.read(): sboxSub_V_0_q3.read());
}

void aes_encrypt_top::thread_state_2_1_V_3_fu_5791_p2() {
    state_2_1_V_3_fu_5791_p2 = (tmp29_fu_5785_p2.read() ^ tmp28_fu_5775_p2.read());
}

void aes_encrypt_top::thread_state_2_1_V_fu_4832_p2() {
    state_2_1_V_fu_4832_p2 = (input_V_q1.read() ^ key_V_load_6_reg_6542.read());
}

void aes_encrypt_top::thread_state_2_2_V_1_fu_6350_p2() {
    state_2_2_V_1_fu_6350_p2 = (temp_V_1_fu_6206_p3.read() ^ ret_V_1_38_2_reg_7480.read());
}

void aes_encrypt_top::thread_state_2_2_V_3_fu_5884_p2() {
    state_2_2_V_3_fu_5884_p2 = (tmp43_fu_5878_p2.read() ^ tmp42_fu_5868_p2.read());
}

void aes_encrypt_top::thread_state_2_2_V_fu_4852_p2() {
    state_2_2_V_fu_4852_p2 = (input_V_q1.read() ^ key_V_load_10_reg_6647.read());
}

void aes_encrypt_top::thread_state_2_3_V_1_fu_6370_p2() {
    state_2_3_V_1_fu_6370_p2 = (temp1_V_fu_6218_p3.read() ^ ret_V_1_39_2_reg_7500.read());
}

void aes_encrypt_top::thread_state_2_3_V_3_fu_5977_p2() {
    state_2_3_V_3_fu_5977_p2 = (tmp57_fu_5971_p2.read() ^ tmp56_fu_5961_p2.read());
}

void aes_encrypt_top::thread_state_2_3_V_fu_4872_p2() {
    state_2_3_V_fu_4872_p2 = (input_V_q1.read() ^ key_V_load_14_reg_6438.read());
}

void aes_encrypt_top::thread_state_3_0_V_1_fu_6315_p2() {
    state_3_0_V_1_fu_6315_p2 = (temp_V_2_fu_6290_p3.read() ^ ret_V_1_36_3_reg_7455.read());
}

void aes_encrypt_top::thread_state_3_0_V_3_fu_5719_p2() {
    state_3_0_V_3_fu_5719_p2 = (tmp18_fu_5713_p2.read() ^ tmp17_fu_5704_p2.read());
}

void aes_encrypt_top::thread_state_3_0_V_fu_4817_p2() {
    state_3_0_V_fu_4817_p2 = (input_V_q0.read() ^ key_V_load_3_reg_6504.read());
}

void aes_encrypt_top::thread_state_3_1_V_1_fu_6335_p2() {
    state_3_1_V_1_fu_6335_p2 = (sboxSub_V_load_3_0_p_fu_6254_p3.read() ^ ret_V_1_37_3_reg_7465.read());
}

void aes_encrypt_top::thread_state_3_1_V_2_fu_5476_p3() {
    state_3_1_V_2_fu_5476_p3 = (!tmp_37_reg_7821.read()[0].is_01())? sc_lv<8>(): ((tmp_37_reg_7821.read()[0].to_bool())? sboxSub_V_1_q0.read(): sboxSub_V_0_q0.read());
}

void aes_encrypt_top::thread_state_3_1_V_3_fu_5812_p2() {
    state_3_1_V_3_fu_5812_p2 = (tmp32_fu_5806_p2.read() ^ tmp31_fu_5797_p2.read());
}

void aes_encrypt_top::thread_state_3_1_V_fu_4837_p2() {
    state_3_1_V_fu_4837_p2 = (input_V_q0.read() ^ key_V_load_7_reg_6560.read());
}

void aes_encrypt_top::thread_state_3_2_V_1_fu_6355_p2() {
    state_3_2_V_1_fu_6355_p2 = (sboxSub_V_load_3_1_p_fu_6266_p3.read() ^ ret_V_1_38_3_reg_7485.read());
}

void aes_encrypt_top::thread_state_3_2_V_2_fu_5483_p3() {
    state_3_2_V_2_fu_5483_p3 = (!tmp_38_reg_7831.read()[0].is_01())? sc_lv<8>(): ((tmp_38_reg_7831.read()[0].to_bool())? sboxSub_V_1_q1.read(): sboxSub_V_0_q1.read());
}

void aes_encrypt_top::thread_state_3_2_V_3_fu_5905_p2() {
    state_3_2_V_3_fu_5905_p2 = (tmp46_fu_5899_p2.read() ^ tmp45_fu_5890_p2.read());
}

void aes_encrypt_top::thread_state_3_2_V_fu_4857_p2() {
    state_3_2_V_fu_4857_p2 = (input_V_q0.read() ^ key_V_load_11_reg_6695.read());
}

void aes_encrypt_top::thread_state_3_3_V_1_fu_6375_p2() {
    state_3_3_V_1_fu_6375_p2 = (sboxSub_V_load_3_2_p_fu_6278_p3.read() ^ ret_V_1_39_3_reg_7505.read());
}

void aes_encrypt_top::thread_state_3_3_V_2_fu_5490_p3() {
    state_3_3_V_2_fu_5490_p3 = (!tmp_39_reg_7841.read()[0].is_01())? sc_lv<8>(): ((tmp_39_reg_7841.read()[0].to_bool())? sboxSub_V_1_q2.read(): sboxSub_V_0_q2.read());
}

void aes_encrypt_top::thread_state_3_3_V_3_fu_5998_p2() {
    state_3_3_V_3_fu_5998_p2 = (tmp60_fu_5992_p2.read() ^ tmp59_fu_5983_p2.read());
}

void aes_encrypt_top::thread_state_3_3_V_fu_4877_p2() {
    state_3_3_V_fu_4877_p2 = (input_V_q0.read() ^ key_V_load_15_reg_6458.read());
}

void aes_encrypt_top::thread_temp1_V_2_fu_5323_p3() {
    temp1_V_2_fu_5323_p3 = (!tmp_34_reg_7791.read()[0].is_01())? sc_lv<8>(): ((tmp_34_reg_7791.read()[0].to_bool())? sboxSub_V_1_q1.read(): sboxSub_V_0_q1.read());
}

void aes_encrypt_top::thread_temp1_V_fu_6218_p3() {
    temp1_V_fu_6218_p3 = (!tmp_18_fu_6214_p1.read()[0].is_01())? sc_lv<8>(): ((tmp_18_fu_6214_p1.read()[0].to_bool())? sboxSub_V_1_q9.read(): sboxSub_V_0_q9.read());
}

void aes_encrypt_top::thread_temp_V_1_fu_6206_p3() {
    temp_V_1_fu_6206_p3 = (!tmp_17_fu_6202_p1.read()[0].is_01())? sc_lv<8>(): ((tmp_17_fu_6202_p1.read()[0].to_bool())? sboxSub_V_1_q8.read(): sboxSub_V_0_q8.read());
}

void aes_encrypt_top::thread_temp_V_2_fu_6290_p3() {
    temp_V_2_fu_6290_p3 = (!tmp_24_fu_6286_p1.read()[0].is_01())? sc_lv<8>(): ((tmp_24_fu_6286_p1.read()[0].to_bool())? sboxSub_V_1_q15.read(): sboxSub_V_0_q15.read());
}

void aes_encrypt_top::thread_temp_V_6_fu_5156_p3() {
    temp_V_6_fu_5156_p3 = (!tmp_29_reg_7741.read()[0].is_01())? sc_lv<8>(): ((tmp_29_reg_7741.read()[0].to_bool())? sboxSub_V_1_q0.read(): sboxSub_V_0_q0.read());
}

void aes_encrypt_top::thread_temp_V_7_fu_5316_p3() {
    temp_V_7_fu_5316_p3 = (!tmp_33_reg_7781.read()[0].is_01())? sc_lv<8>(): ((tmp_33_reg_7781.read()[0].to_bool())? sboxSub_V_1_q0.read(): sboxSub_V_0_q0.read());
}

void aes_encrypt_top::thread_temp_V_8_fu_5497_p3() {
    temp_V_8_fu_5497_p3 = (!tmp_40_reg_7851.read()[0].is_01())? sc_lv<8>(): ((tmp_40_reg_7851.read()[0].to_bool())? sboxSub_V_1_q3.read(): sboxSub_V_0_q3.read());
}

void aes_encrypt_top::thread_temp_V_fu_6158_p3() {
    temp_V_fu_6158_p3 = (!tmp_13_fu_6154_p1.read()[0].is_01())? sc_lv<8>(): ((tmp_13_fu_6154_p1.read()[0].to_bool())? sboxSub_V_1_q4.read(): sboxSub_V_0_q4.read());
}

void aes_encrypt_top::thread_tmp10_fu_5661_p2() {
    tmp10_fu_5661_p2 = (tmp11_fu_5657_p2.read() ^ roundKeys_1_V_load_reg_8034.read());
}

void aes_encrypt_top::thread_tmp11_fu_5657_p2() {
    tmp11_fu_5657_p2 = (state_2_0_V_2_reg_8211.read() ^ state_0_0_V_1_reg_7941.read());
}

void aes_encrypt_top::thread_tmp12_fu_5670_p2() {
    tmp12_fu_5670_p2 = (tmp13_fu_5666_p2.read() ^ temp_V_8_fu_5497_p3.read());
}

void aes_encrypt_top::thread_tmp13_fu_5666_p2() {
    tmp13_fu_5666_p2 = (agg_result_V_i1_reg_8173.read() ^ agg_result_V_i2_reg_8265.read());
}

void aes_encrypt_top::thread_tmp14_fu_5682_p2() {
    tmp14_fu_5682_p2 = (roundKeys_2_V_load_reg_8039.read() ^ temp_V_8_fu_5497_p3.read());
}

void aes_encrypt_top::thread_tmp15_fu_5692_p2() {
    tmp15_fu_5692_p2 = (tmp16_fu_5687_p2.read() ^ tmp_8_fu_5532_p2.read());
}

void aes_encrypt_top::thread_tmp16_fu_5687_p2() {
    tmp16_fu_5687_p2 = (agg_result_V_i2_reg_8265.read() ^ agg_result_V_i3_fu_5526_p2.read());
}

void aes_encrypt_top::thread_tmp17_fu_5704_p2() {
    tmp17_fu_5704_p2 = (roundKeys_3_V_load_reg_8044.read() ^ state_2_0_V_2_reg_8211.read());
}

void aes_encrypt_top::thread_tmp18_fu_5713_p2() {
    tmp18_fu_5713_p2 = (tmp19_fu_5708_p2.read() ^ tmp_8_fu_5532_p2.read());
}

void aes_encrypt_top::thread_tmp19_fu_5708_p2() {
    tmp19_fu_5708_p2 = (agg_result_V_i_reg_8005.read() ^ agg_result_V_i3_fu_5526_p2.read());
}

void aes_encrypt_top::thread_tmp1_fu_3723_p2() {
    tmp1_fu_3723_p2 = (key_V_load_reg_6468.read() ^ ap_const_lv8_1);
}

void aes_encrypt_top::thread_tmp20_fu_5729_p2() {
    tmp20_fu_5729_p2 = (tmp21_fu_5725_p2.read() ^ roundKeys_4_V_load_reg_8049.read());
}

void aes_encrypt_top::thread_tmp21_fu_5725_p2() {
    tmp21_fu_5725_p2 = (state_2_1_V_2_reg_8218.read() ^ state_1_1_V_2_reg_8121.read());
}

void aes_encrypt_top::thread_tmp22_fu_5738_p2() {
    tmp22_fu_5738_p2 = (tmp23_fu_5734_p2.read() ^ state_3_1_V_2_fu_5476_p3.read());
}

void aes_encrypt_top::thread_tmp23_fu_5734_p2() {
    tmp23_fu_5734_p2 = (agg_result_V_i4_reg_8011.read() ^ agg_result_V_i5_reg_8179.read());
}

void aes_encrypt_top::thread_tmp24_fu_5754_p2() {
    tmp24_fu_5754_p2 = (tmp25_fu_5750_p2.read() ^ roundKeys_5_V_load_reg_8054.read());
}

void aes_encrypt_top::thread_tmp25_fu_5750_p2() {
    tmp25_fu_5750_p2 = (state_2_1_V_2_reg_8218.read() ^ state_0_1_V_1_reg_7947.read());
}

void aes_encrypt_top::thread_tmp26_fu_5763_p2() {
    tmp26_fu_5763_p2 = (tmp27_fu_5759_p2.read() ^ state_3_1_V_2_fu_5476_p3.read());
}

void aes_encrypt_top::thread_tmp27_fu_5759_p2() {
    tmp27_fu_5759_p2 = (agg_result_V_i5_reg_8179.read() ^ agg_result_V_i6_reg_8271.read());
}

void aes_encrypt_top::thread_tmp28_fu_5775_p2() {
    tmp28_fu_5775_p2 = (roundKeys_6_V_load_reg_8059.read() ^ state_3_1_V_2_fu_5476_p3.read());
}

void aes_encrypt_top::thread_tmp29_fu_5785_p2() {
    tmp29_fu_5785_p2 = (tmp30_fu_5780_p2.read() ^ tmp_45_1_fu_5564_p2.read());
}

void aes_encrypt_top::thread_tmp2_fu_3945_p2() {
    tmp2_fu_3945_p2 = (ret_V_1_4_reg_6713.read() ^ ap_const_lv8_4);
}

void aes_encrypt_top::thread_tmp30_fu_5780_p2() {
    tmp30_fu_5780_p2 = (agg_result_V_i6_reg_8271.read() ^ agg_result_V_i7_fu_5558_p2.read());
}

void aes_encrypt_top::thread_tmp31_fu_5797_p2() {
    tmp31_fu_5797_p2 = (roundKeys_7_V_load_reg_8064.read() ^ state_2_1_V_2_reg_8218.read());
}

void aes_encrypt_top::thread_tmp32_fu_5806_p2() {
    tmp32_fu_5806_p2 = (tmp33_fu_5801_p2.read() ^ tmp_45_1_fu_5564_p2.read());
}

void aes_encrypt_top::thread_tmp33_fu_5801_p2() {
    tmp33_fu_5801_p2 = (agg_result_V_i4_reg_8011.read() ^ agg_result_V_i7_fu_5558_p2.read());
}

void aes_encrypt_top::thread_tmp34_fu_5822_p2() {
    tmp34_fu_5822_p2 = (tmp35_fu_5818_p2.read() ^ roundKeys_8_V_load_reg_8069.read());
}

void aes_encrypt_top::thread_tmp35_fu_5818_p2() {
    tmp35_fu_5818_p2 = (temp_V_7_reg_8197.read() ^ state_1_2_V_2_reg_8127.read());
}

void aes_encrypt_top::thread_tmp36_fu_5831_p2() {
    tmp36_fu_5831_p2 = (tmp37_fu_5827_p2.read() ^ state_3_2_V_2_fu_5483_p3.read());
}

void aes_encrypt_top::thread_tmp37_fu_5827_p2() {
    tmp37_fu_5827_p2 = (agg_result_V_i8_reg_8017.read() ^ agg_result_V_i9_reg_8185.read());
}

void aes_encrypt_top::thread_tmp38_fu_5847_p2() {
    tmp38_fu_5847_p2 = (tmp39_fu_5843_p2.read() ^ roundKeys_9_V_load_reg_8074.read());
}

void aes_encrypt_top::thread_tmp39_fu_5843_p2() {
    tmp39_fu_5843_p2 = (temp_V_7_reg_8197.read() ^ state_0_2_V_1_reg_7953.read());
}

void aes_encrypt_top::thread_tmp3_fu_4128_p2() {
    tmp3_fu_4128_p2 = (ret_V_1_11_fu_4082_p2.read() ^ ap_const_lv8_10);
}

void aes_encrypt_top::thread_tmp40_fu_5856_p2() {
    tmp40_fu_5856_p2 = (tmp41_fu_5852_p2.read() ^ state_3_2_V_2_fu_5483_p3.read());
}

void aes_encrypt_top::thread_tmp41_fu_5852_p2() {
    tmp41_fu_5852_p2 = (agg_result_V_i9_reg_8185.read() ^ agg_result_V_i10_reg_8277.read());
}

void aes_encrypt_top::thread_tmp42_fu_5868_p2() {
    tmp42_fu_5868_p2 = (roundKeys_10_V_load_reg_8079.read() ^ state_3_2_V_2_fu_5483_p3.read());
}

void aes_encrypt_top::thread_tmp43_fu_5878_p2() {
    tmp43_fu_5878_p2 = (tmp44_fu_5873_p2.read() ^ tmp_45_2_fu_5596_p2.read());
}

void aes_encrypt_top::thread_tmp44_fu_5873_p2() {
    tmp44_fu_5873_p2 = (agg_result_V_i10_reg_8277.read() ^ agg_result_V_i11_fu_5590_p2.read());
}

void aes_encrypt_top::thread_tmp45_fu_5890_p2() {
    tmp45_fu_5890_p2 = (roundKeys_11_V_load_reg_8084.read() ^ temp_V_7_reg_8197.read());
}

void aes_encrypt_top::thread_tmp46_fu_5899_p2() {
    tmp46_fu_5899_p2 = (tmp47_fu_5894_p2.read() ^ tmp_45_2_fu_5596_p2.read());
}

void aes_encrypt_top::thread_tmp47_fu_5894_p2() {
    tmp47_fu_5894_p2 = (agg_result_V_i8_reg_8017.read() ^ agg_result_V_i11_fu_5590_p2.read());
}

void aes_encrypt_top::thread_tmp48_fu_5915_p2() {
    tmp48_fu_5915_p2 = (tmp49_fu_5911_p2.read() ^ roundKeys_12_V_load_reg_8089.read());
}

void aes_encrypt_top::thread_tmp49_fu_5911_p2() {
    tmp49_fu_5911_p2 = (temp1_V_2_reg_8204.read() ^ temp_V_6_reg_8109.read());
}

void aes_encrypt_top::thread_tmp4_fu_4351_p2() {
    tmp4_fu_4351_p2 = (ret_V_1_19_reg_7056.read() ^ ap_const_lv8_40);
}

void aes_encrypt_top::thread_tmp50_fu_5924_p2() {
    tmp50_fu_5924_p2 = (tmp51_fu_5920_p2.read() ^ state_3_3_V_2_fu_5490_p3.read());
}

void aes_encrypt_top::thread_tmp51_fu_5920_p2() {
    tmp51_fu_5920_p2 = (agg_result_V_i12_reg_8023.read() ^ agg_result_V_i13_reg_8191.read());
}

void aes_encrypt_top::thread_tmp52_fu_5940_p2() {
    tmp52_fu_5940_p2 = (tmp53_fu_5936_p2.read() ^ roundKeys_13_V_load_reg_8094.read());
}

void aes_encrypt_top::thread_tmp53_fu_5936_p2() {
    tmp53_fu_5936_p2 = (temp1_V_2_reg_8204.read() ^ state_0_3_V_1_reg_7959.read());
}

void aes_encrypt_top::thread_tmp54_fu_5949_p2() {
    tmp54_fu_5949_p2 = (tmp55_fu_5945_p2.read() ^ state_3_3_V_2_fu_5490_p3.read());
}

void aes_encrypt_top::thread_tmp55_fu_5945_p2() {
    tmp55_fu_5945_p2 = (agg_result_V_i13_reg_8191.read() ^ agg_result_V_i14_reg_8283.read());
}

void aes_encrypt_top::thread_tmp56_fu_5961_p2() {
    tmp56_fu_5961_p2 = (roundKeys_14_V_load_reg_8099.read() ^ state_3_3_V_2_fu_5490_p3.read());
}

void aes_encrypt_top::thread_tmp57_fu_5971_p2() {
    tmp57_fu_5971_p2 = (tmp58_fu_5966_p2.read() ^ tmp_45_3_fu_5628_p2.read());
}

void aes_encrypt_top::thread_tmp58_fu_5966_p2() {
    tmp58_fu_5966_p2 = (agg_result_V_i14_reg_8283.read() ^ agg_result_V_i15_fu_5622_p2.read());
}

void aes_encrypt_top::thread_tmp59_fu_5983_p2() {
    tmp59_fu_5983_p2 = (roundKeys_15_V_load_reg_8104.read() ^ temp1_V_2_reg_8204.read());
}

void aes_encrypt_top::thread_tmp5_fu_4556_p2() {
    tmp5_fu_4556_p2 = (ret_V_1_27_reg_7235.read() ^ ap_const_lv8_1B);
}

void aes_encrypt_top::thread_tmp60_fu_5992_p2() {
    tmp60_fu_5992_p2 = (tmp61_fu_5987_p2.read() ^ tmp_45_3_fu_5628_p2.read());
}

void aes_encrypt_top::thread_tmp61_fu_5987_p2() {
    tmp61_fu_5987_p2 = (agg_result_V_i12_reg_8023.read() ^ agg_result_V_i15_fu_5622_p2.read());
}

void aes_encrypt_top::thread_tmp6_fu_5636_p2() {
    tmp6_fu_5636_p2 = (tmp7_fu_5632_p2.read() ^ roundKeys_0_V_load_reg_8029.read());
}

void aes_encrypt_top::thread_tmp7_fu_5632_p2() {
    tmp7_fu_5632_p2 = (state_2_0_V_2_reg_8211.read() ^ state_1_0_V_2_reg_8115.read());
}

void aes_encrypt_top::thread_tmp8_fu_5645_p2() {
    tmp8_fu_5645_p2 = (tmp9_fu_5641_p2.read() ^ temp_V_8_fu_5497_p3.read());
}

void aes_encrypt_top::thread_tmp9_fu_5641_p2() {
    tmp9_fu_5641_p2 = (agg_result_V_i_reg_8005.read() ^ agg_result_V_i1_reg_8173.read());
}

void aes_encrypt_top::thread_tmp_10_fu_6118_p1() {
    tmp_10_fu_6118_p1 = state_V_0_1_reg_3474.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_11_1_fu_4118_p1() {
    tmp_11_1_fu_4118_p1 = esl_zext<64,8>(ret_V_1_15_2_fu_4108_p2.read());
}

void aes_encrypt_top::thread_tmp_11_2_fu_4203_p1() {
    tmp_11_2_fu_4203_p1 = esl_zext<64,8>(ret_V_1_19_2_fu_4192_p2.read());
}

void aes_encrypt_top::thread_tmp_11_3_fu_4328_p1() {
    tmp_11_3_fu_4328_p1 = esl_zext<64,8>(ret_V_1_23_2_fu_4318_p2.read());
}

void aes_encrypt_top::thread_tmp_11_4_fu_3807_p1() {
    tmp_11_4_fu_3807_p1 = esl_zext<64,8>(ret_V_1_3_2_fu_3801_p2.read());
}

void aes_encrypt_top::thread_tmp_11_5_fu_4447_p1() {
    tmp_11_5_fu_4447_p1 = esl_zext<64,8>(ret_V_1_27_2_fu_4429_p2.read());
}

void aes_encrypt_top::thread_tmp_11_6_fu_4547_p1() {
    tmp_11_6_fu_4547_p1 = esl_zext<64,8>(ret_V_1_31_2_reg_7297.read());
}

void aes_encrypt_top::thread_tmp_11_7_fu_4621_p1() {
    tmp_11_7_fu_4621_p1 = esl_zext<64,8>(ret_V_1_35_2_fu_4610_p2.read());
}

void aes_encrypt_top::thread_tmp_11_8_fu_3924_p1() {
    tmp_11_8_fu_3924_p1 = esl_zext<64,8>(ret_V_1_7_2_fu_3914_p2.read());
}

void aes_encrypt_top::thread_tmp_11_fu_6130_p1() {
    tmp_11_fu_6130_p1 = state_V_0_2_reg_3464.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_11_s_fu_3971_p1() {
    tmp_11_s_fu_3971_p1 = esl_zext<64,8>(ret_V_1_11_2_fu_3965_p2.read());
}

void aes_encrypt_top::thread_tmp_12_1_fu_4123_p1() {
    tmp_12_1_fu_4123_p1 = esl_zext<64,8>(ret_V_1_15_3_fu_4113_p2.read());
}

void aes_encrypt_top::thread_tmp_12_2_fu_4254_p1() {
    tmp_12_2_fu_4254_p1 = esl_zext<64,8>(ret_V_1_19_3_fu_4242_p2.read());
}

void aes_encrypt_top::thread_tmp_12_3_fu_4341_p1() {
    tmp_12_3_fu_4341_p1 = esl_zext<64,8>(ret_V_1_23_3_fu_4337_p2.read());
}

void aes_encrypt_top::thread_tmp_12_4_fu_3857_p1() {
    tmp_12_4_fu_3857_p1 = esl_zext<64,8>(ret_V_1_3_3_fu_3845_p2.read());
}

void aes_encrypt_top::thread_tmp_12_5_fu_4452_p1() {
    tmp_12_5_fu_4452_p1 = esl_zext<64,8>(ret_V_1_27_3_fu_4435_p2.read());
}

void aes_encrypt_top::thread_tmp_12_6_fu_4551_p1() {
    tmp_12_6_fu_4551_p1 = esl_zext<64,8>(ret_V_1_31_3_fu_4542_p2.read());
}

void aes_encrypt_top::thread_tmp_12_7_fu_4672_p1() {
    tmp_12_7_fu_4672_p1 = esl_zext<64,8>(ret_V_1_35_3_fu_4660_p2.read());
}

void aes_encrypt_top::thread_tmp_12_8_fu_3822_p1() {
    tmp_12_8_fu_3822_p1 = esl_zext<64,8>(ret_V_1_7_3_fu_3817_p2.read());
}

void aes_encrypt_top::thread_tmp_12_fu_6142_p1() {
    tmp_12_fu_6142_p1 = state_V_0_3_reg_3454.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_12_s_fu_4011_p1() {
    tmp_12_s_fu_4011_p1 = esl_zext<64,8>(ret_V_1_11_3_fu_4000_p2.read());
}

void aes_encrypt_top::thread_tmp_13_1_fu_4148_p1() {
    tmp_13_1_fu_4148_p1 = esl_zext<64,8>(ret_V_1_14_fu_4144_p2.read());
}

void aes_encrypt_top::thread_tmp_13_2_fu_4259_p1() {
    tmp_13_2_fu_4259_p1 = esl_zext<64,8>(ret_V_1_18_fu_4236_p2.read());
}

void aes_encrypt_top::thread_tmp_13_3_fu_4346_p1() {
    tmp_13_3_fu_4346_p1 = esl_zext<64,8>(ret_V_1_22_fu_4333_p2.read());
}

void aes_encrypt_top::thread_tmp_13_4_fu_3779_p1() {
    tmp_13_4_fu_3779_p1 = esl_zext<64,8>(ret_V_1_3_fu_3762_p2.read());
}

void aes_encrypt_top::thread_tmp_13_5_fu_4487_p1() {
    tmp_13_5_fu_4487_p1 = esl_zext<64,8>(ret_V_1_26_fu_4482_p2.read());
}

void aes_encrypt_top::thread_tmp_13_6_fu_4567_p1() {
    tmp_13_6_fu_4567_p1 = esl_zext<64,8>(ret_V_1_30_reg_7249.read());
}

void aes_encrypt_top::thread_tmp_13_7_fu_4677_p1() {
    tmp_13_7_fu_4677_p1 = esl_zext<64,8>(ret_V_1_34_fu_4654_p2.read());
}

void aes_encrypt_top::thread_tmp_13_8_fu_3883_p1() {
    tmp_13_8_fu_3883_p1 = esl_zext<64,8>(ret_V_1_7_fu_3878_p2.read());
}

void aes_encrypt_top::thread_tmp_13_fu_6154_p1() {
    tmp_13_fu_6154_p1 = state_V_1_reg_3444.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_13_s_fu_4036_p1() {
    tmp_13_s_fu_4036_p1 = esl_zext<64,8>(ret_V_1_10_fu_4030_p2.read());
}

void aes_encrypt_top::thread_tmp_14_fu_6166_p1() {
    tmp_14_fu_6166_p1 = state_V_1_1_reg_3434.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_15_fu_6178_p1() {
    tmp_15_fu_6178_p1 = state_V_1_2_reg_3424.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_16_fu_6190_p1() {
    tmp_16_fu_6190_p1 = state_V_1_3_reg_3414.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_17_fu_6202_p1() {
    tmp_17_fu_6202_p1 = state_V_2_reg_3404.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_18_fu_6214_p1() {
    tmp_18_fu_6214_p1 = state_V_2_1_reg_3394.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_19_fu_6226_p1() {
    tmp_19_fu_6226_p1 = state_V_2_2_reg_3384.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_1_fu_3715_p1() {
    tmp_1_fu_3715_p1 = esl_zext<64,8>(key_V_load_14_reg_6438.read());
}

void aes_encrypt_top::thread_tmp_20_fu_6238_p1() {
    tmp_20_fu_6238_p1 = state_V_2_3_reg_3374.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_21_fu_6250_p1() {
    tmp_21_fu_6250_p1 = state_V_3_reg_3364.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_22_fu_6262_p1() {
    tmp_22_fu_6262_p1 = state_V_3_1_reg_3354.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_23_fu_6274_p1() {
    tmp_23_fu_6274_p1 = state_V_3_2_reg_3344.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_24_fu_6286_p1() {
    tmp_24_fu_6286_p1 = state_V_3_3_reg_3334.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_25_fu_4888_p1() {
    tmp_25_fu_4888_p1 = state_V_reg_3484.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_26_fu_4898_p1() {
    tmp_26_fu_4898_p1 = state_V_0_1_reg_3474.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_27_fu_4908_p1() {
    tmp_27_fu_4908_p1 = state_V_0_2_reg_3464.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_28_fu_4918_p1() {
    tmp_28_fu_4918_p1 = state_V_0_3_reg_3454.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_29_fu_4928_p1() {
    tmp_29_fu_4928_p1 = state_V_1_reg_3444.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_30_fu_4932_p1() {
    tmp_30_fu_4932_p1 = state_V_1_1_reg_3434.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_31_fu_4936_p1() {
    tmp_31_fu_4936_p1 = state_V_1_2_reg_3424.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_32_fu_4940_p1() {
    tmp_32_fu_4940_p1 = state_V_1_3_reg_3414.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_33_fu_4944_p1() {
    tmp_33_fu_4944_p1 = state_V_2_reg_3404.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_34_fu_4948_p1() {
    tmp_34_fu_4948_p1 = state_V_2_1_reg_3394.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_35_fu_4952_p1() {
    tmp_35_fu_4952_p1 = state_V_2_2_reg_3384.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_36_fu_4956_p1() {
    tmp_36_fu_4956_p1 = state_V_2_3_reg_3374.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_37_fu_4960_p1() {
    tmp_37_fu_4960_p1 = state_V_3_reg_3364.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_38_fu_4964_p1() {
    tmp_38_fu_4964_p1 = state_V_3_1_reg_3354.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_39_fu_4968_p1() {
    tmp_39_fu_4968_p1 = state_V_3_2_reg_3344.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_3_1_fu_4056_p1() {
    tmp_3_1_fu_4056_p1 = esl_zext<64,8>(ret_V_1_15_1_fu_4051_p2.read());
}

void aes_encrypt_top::thread_tmp_3_2_fu_4198_p1() {
    tmp_3_2_fu_4198_p1 = esl_zext<64,8>(ret_V_1_19_1_fu_4186_p2.read());
}

void aes_encrypt_top::thread_tmp_3_3_fu_4323_p1() {
    tmp_3_3_fu_4323_p1 = esl_zext<64,8>(ret_V_1_23_1_fu_4314_p2.read());
}

void aes_encrypt_top::thread_tmp_3_4_fu_3774_p1() {
    tmp_3_4_fu_3774_p1 = esl_zext<64,8>(ret_V_1_3_1_fu_3768_p2.read());
}

void aes_encrypt_top::thread_tmp_3_5_fu_4392_p1() {
    tmp_3_5_fu_4392_p1 = esl_zext<64,8>(ret_V_1_27_1_fu_4386_p2.read());
}

void aes_encrypt_top::thread_tmp_3_6_fu_4522_p1() {
    tmp_3_6_fu_4522_p1 = esl_zext<64,8>(ret_V_1_31_1_fu_4512_p2.read());
}

void aes_encrypt_top::thread_tmp_3_7_fu_4616_p1() {
    tmp_3_7_fu_4616_p1 = esl_zext<64,8>(ret_V_1_35_1_fu_4604_p2.read());
}

void aes_encrypt_top::thread_tmp_3_8_fu_3919_p1() {
    tmp_3_8_fu_3919_p1 = esl_zext<64,8>(ret_V_1_7_1_fu_3909_p2.read());
}

void aes_encrypt_top::thread_tmp_3_fu_3711_p1() {
    tmp_3_fu_3711_p1 = esl_zext<64,8>(key_V_load_13_reg_6423.read());
}

void aes_encrypt_top::thread_tmp_3_s_fu_4006_p1() {
    tmp_3_s_fu_4006_p1 = esl_zext<64,8>(ret_V_1_11_1_fu_3994_p2.read());
}

void aes_encrypt_top::thread_tmp_40_fu_4972_p1() {
    tmp_40_fu_4972_p1 = state_V_3_3_reg_3334.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_42_fu_5050_p3() {
    tmp_42_fu_5050_p3 = state_0_0_V_1_fu_4996_p3.read().range(7, 7);
}

void aes_encrypt_top::thread_tmp_44_fu_5210_p3() {
    tmp_44_fu_5210_p3 = state_1_0_V_2_fu_5163_p3.read().range(7, 7);
}

void aes_encrypt_top::thread_tmp_45_1_fu_5564_p2() {
    tmp_45_1_fu_5564_p2 = (state_1_1_V_2_reg_8121.read() ^ state_0_1_V_1_reg_7947.read());
}

void aes_encrypt_top::thread_tmp_45_2_fu_5596_p2() {
    tmp_45_2_fu_5596_p2 = (state_1_2_V_2_reg_8127.read() ^ state_0_2_V_1_reg_7953.read());
}

void aes_encrypt_top::thread_tmp_45_3_fu_5628_p2() {
    tmp_45_3_fu_5628_p2 = (temp_V_6_reg_8109.read() ^ state_0_3_V_1_reg_7959.read());
}

void aes_encrypt_top::thread_tmp_46_fu_5370_p3() {
    tmp_46_fu_5370_p3 = state_2_0_V_2_fu_5330_p3.read().range(7, 7);
}

void aes_encrypt_top::thread_tmp_48_fu_5510_p3() {
    tmp_48_fu_5510_p3 = temp_V_8_fu_5497_p3.read().range(7, 7);
}

void aes_encrypt_top::thread_tmp_4_fu_4797_p1() {
    tmp_4_fu_4797_p1 = esl_zext<64,5>(i1_reg_3323.read());
}

void aes_encrypt_top::thread_tmp_50_fu_5078_p3() {
    tmp_50_fu_5078_p3 = state_0_1_V_1_fu_5003_p3.read().range(7, 7);
}

void aes_encrypt_top::thread_tmp_52_fu_5238_p3() {
    tmp_52_fu_5238_p3 = state_1_1_V_2_fu_5170_p3.read().range(7, 7);
}

void aes_encrypt_top::thread_tmp_54_fu_5398_p3() {
    tmp_54_fu_5398_p3 = state_2_1_V_2_fu_5337_p3.read().range(7, 7);
}

void aes_encrypt_top::thread_tmp_56_fu_5542_p3() {
    tmp_56_fu_5542_p3 = state_3_1_V_2_fu_5476_p3.read().range(7, 7);
}

void aes_encrypt_top::thread_tmp_58_fu_5106_p3() {
    tmp_58_fu_5106_p3 = state_0_2_V_1_fu_5010_p3.read().range(7, 7);
}

void aes_encrypt_top::thread_tmp_60_fu_5266_p3() {
    tmp_60_fu_5266_p3 = state_1_2_V_2_fu_5177_p3.read().range(7, 7);
}

void aes_encrypt_top::thread_tmp_62_fu_5426_p3() {
    tmp_62_fu_5426_p3 = temp_V_7_fu_5316_p3.read().range(7, 7);
}

void aes_encrypt_top::thread_tmp_64_fu_5574_p3() {
    tmp_64_fu_5574_p3 = state_3_2_V_2_fu_5483_p3.read().range(7, 7);
}

void aes_encrypt_top::thread_tmp_66_fu_5134_p3() {
    tmp_66_fu_5134_p3 = state_0_3_V_1_fu_5017_p3.read().range(7, 7);
}

void aes_encrypt_top::thread_tmp_68_fu_5294_p3() {
    tmp_68_fu_5294_p3 = temp_V_6_fu_5156_p3.read().range(7, 7);
}

void aes_encrypt_top::thread_tmp_6_fu_3719_p1() {
    tmp_6_fu_3719_p1 = esl_zext<64,8>(key_V_load_15_reg_6458.read());
}

void aes_encrypt_top::thread_tmp_70_fu_5454_p3() {
    tmp_70_fu_5454_p3 = temp1_V_2_fu_5323_p3.read().range(7, 7);
}

void aes_encrypt_top::thread_tmp_72_fu_5606_p3() {
    tmp_72_fu_5606_p3 = state_3_3_V_2_fu_5490_p3.read().range(7, 7);
}

void aes_encrypt_top::thread_tmp_7_fu_3707_p1() {
    tmp_7_fu_3707_p1 = esl_zext<64,8>(key_V_load_12_reg_6408.read());
}

void aes_encrypt_top::thread_tmp_8_fu_5532_p2() {
    tmp_8_fu_5532_p2 = (state_1_0_V_2_reg_8115.read() ^ state_0_0_V_1_reg_7941.read());
}

void aes_encrypt_top::thread_tmp_9_fu_6106_p1() {
    tmp_9_fu_6106_p1 = state_V_reg_3484.read().range(1-1, 0);
}

void aes_encrypt_top::thread_tmp_s_fu_6392_p1() {
    tmp_s_fu_6392_p1 = esl_zext<64,5>(i3_reg_3506.read());
}

void aes_encrypt_top::thread_val_last_V_fu_6397_p2() {
    val_last_V_fu_6397_p2 = (!i3_reg_3506.read().is_01() || !ap_const_lv5_F.is_01())? sc_lv<1>(): sc_lv<1>(i3_reg_3506.read() == ap_const_lv5_F);
}

}

