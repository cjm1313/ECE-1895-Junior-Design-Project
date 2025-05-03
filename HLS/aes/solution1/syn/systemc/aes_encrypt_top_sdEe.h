// ==============================================================
// File generated on Tue Apr 22 00:07:37 -0400 2025
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __aes_encrypt_top_sdEe_H__
#define __aes_encrypt_top_sdEe_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct aes_encrypt_top_sdEe_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
  static const unsigned AddressRange = 128;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in <sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in <sc_lv<AddressWidth> > address2;
sc_core::sc_in <sc_logic> ce2;
sc_core::sc_out <sc_lv<DataWidth> > q2;
sc_core::sc_in <sc_lv<AddressWidth> > address3;
sc_core::sc_in <sc_logic> ce3;
sc_core::sc_out <sc_lv<DataWidth> > q3;
sc_core::sc_in <sc_lv<AddressWidth> > address4;
sc_core::sc_in <sc_logic> ce4;
sc_core::sc_out <sc_lv<DataWidth> > q4;
sc_core::sc_in <sc_lv<AddressWidth> > address5;
sc_core::sc_in <sc_logic> ce5;
sc_core::sc_out <sc_lv<DataWidth> > q5;
sc_core::sc_in <sc_lv<AddressWidth> > address6;
sc_core::sc_in <sc_logic> ce6;
sc_core::sc_out <sc_lv<DataWidth> > q6;
sc_core::sc_in <sc_lv<AddressWidth> > address7;
sc_core::sc_in <sc_logic> ce7;
sc_core::sc_out <sc_lv<DataWidth> > q7;
sc_core::sc_in <sc_lv<AddressWidth> > address8;
sc_core::sc_in <sc_logic> ce8;
sc_core::sc_out <sc_lv<DataWidth> > q8;
sc_core::sc_in <sc_lv<AddressWidth> > address9;
sc_core::sc_in <sc_logic> ce9;
sc_core::sc_out <sc_lv<DataWidth> > q9;
sc_core::sc_in <sc_lv<AddressWidth> > address10;
sc_core::sc_in <sc_logic> ce10;
sc_core::sc_out <sc_lv<DataWidth> > q10;
sc_core::sc_in <sc_lv<AddressWidth> > address11;
sc_core::sc_in <sc_logic> ce11;
sc_core::sc_out <sc_lv<DataWidth> > q11;
sc_core::sc_in <sc_lv<AddressWidth> > address12;
sc_core::sc_in <sc_logic> ce12;
sc_core::sc_out <sc_lv<DataWidth> > q12;
sc_core::sc_in <sc_lv<AddressWidth> > address13;
sc_core::sc_in <sc_logic> ce13;
sc_core::sc_out <sc_lv<DataWidth> > q13;
sc_core::sc_in <sc_lv<AddressWidth> > address14;
sc_core::sc_in <sc_logic> ce14;
sc_core::sc_out <sc_lv<DataWidth> > q14;
sc_core::sc_in <sc_lv<AddressWidth> > address15;
sc_core::sc_in <sc_logic> ce15;
sc_core::sc_out <sc_lv<DataWidth> > q15;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(aes_encrypt_top_sdEe_ram) {
        ram[0] = "0b01100011";
        ram[1] = "0b01110111";
        ram[2] = "0b11110010";
        ram[3] = "0b01101111";
        ram[4] = "0b00110000";
        ram[5] = "0b01100111";
        ram[6] = "0b11111110";
        ram[7] = "0b10101011";
        ram[8] = "0b11001010";
        ram[9] = "0b11001001";
        ram[10] = "0b11111010";
        ram[11] = "0b01000111";
        ram[12] = "0b10101101";
        ram[13] = "0b10100010";
        ram[14] = "0b10011100";
        ram[15] = "0b01110010";
        ram[16] = "0b10110111";
        ram[17] = "0b10010011";
        ram[18] = "0b00110110";
        ram[19] = "0b11110111";
        ram[20] = "0b00110100";
        ram[21] = "0b11100101";
        ram[22] = "0b01110001";
        ram[23] = "0b00110001";
        ram[24] = "0b00000100";
        ram[25] = "0b00100011";
        ram[26] = "0b00011000";
        ram[27] = "0b00000101";
        ram[28] = "0b00000111";
        ram[29] = "0b10000000";
        ram[30] = "0b11101011";
        ram[31] = "0b10110010";
        ram[32] = "0b00001001";
        ram[33] = "0b00101100";
        ram[34] = "0b00011011";
        ram[35] = "0b01011010";
        ram[36] = "0b01010010";
        ram[37] = "0b11010110";
        ram[38] = "0b00101001";
        ram[39] = "0b00101111";
        ram[40] = "0b01010011";
        ram[41] = "0b00000000";
        ram[42] = "0b00100000";
        ram[43] = "0b10110001";
        ram[44] = "0b01101010";
        ram[45] = "0b10111110";
        ram[46] = "0b01001010";
        ram[47] = "0b01011000";
        ram[48] = "0b11010000";
        ram[49] = "0b10101010";
        ram[50] = "0b01000011";
        ram[51] = "0b00110011";
        ram[52] = "0b01000101";
        ram[53] = "0b00000010";
        ram[54] = "0b01010000";
        ram[55] = "0b10011111";
        ram[56] = "0b01010001";
        ram[57] = "0b01000000";
        ram[58] = "0b10010010";
        ram[59] = "0b00111000";
        ram[60] = "0b10111100";
        ram[61] = "0b11011010";
        ram[62] = "0b00010000";
        ram[63] = "0b11110011";
        ram[64] = "0b11001101";
        ram[65] = "0b00010011";
        ram[66] = "0b01011111";
        ram[67] = "0b01000100";
        ram[68] = "0b11000100";
        ram[69] = "0b01111110";
        ram[70] = "0b01100100";
        ram[71] = "0b00011001";
        ram[72] = "0b01100000";
        ram[73] = "0b01001111";
        ram[74] = "0b00100010";
        ram[75] = "0b10010000";
        ram[76] = "0b01000110";
        ram[77] = "0b10111000";
        ram[78] = "0b11011110";
        ram[79] = "0b00001011";
        ram[80] = "0b11100000";
        ram[81] = "0b00111010";
        ram[82] = "0b01001001";
        ram[83] = "0b00100100";
        ram[84] = "0b11000010";
        ram[85] = "0b10101100";
        ram[86] = "0b10010001";
        ram[87] = "0b11100100";
        ram[88] = "0b11100111";
        ram[89] = "0b00110111";
        ram[90] = "0b10001101";
        ram[91] = "0b01001110";
        ram[92] = "0b01101100";
        ram[93] = "0b11110100";
        ram[94] = "0b01100101";
        ram[95] = "0b10101110";
        ram[96] = "0b10111010";
        ram[97] = "0b00100101";
        ram[98] = "0b00011100";
        ram[99] = "0b10110100";
        ram[100] = "0b11101000";
        ram[101] = "0b01110100";
        ram[102] = "0b01001011";
        ram[103] = "0b10001011";
        ram[104] = "0b01110000";
        ram[105] = "0b10110101";
        ram[106] = "0b01001000";
        ram[107] = "0b11110110";
        ram[108] = "0b01100001";
        ram[109] = "0b01010111";
        ram[110] = "0b10000110";
        ram[111] = "0b00011101";
        ram[112] = "0b11100001";
        ram[113] = "0b10011000";
        ram[114] = "0b01101001";
        ram[115] = "0b10001110";
        ram[116] = "0b10011011";
        ram[117] = "0b10000111";
        ram[118] = "0b11001110";
        ram[119] = "0b00101000";
        ram[120] = "0b10001100";
        ram[121] = "0b10001001";
        ram[122] = "0b10111111";
        ram[123] = "0b01000010";
        ram[124] = "0b01000001";
        ram[125] = "0b00101101";
        ram[126] = "0b10110000";
        ram[127] = "0b10111011";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();


SC_METHOD(prc_write_1);
  sensitive<<clk.pos();


SC_METHOD(prc_write_2);
  sensitive<<clk.pos();


SC_METHOD(prc_write_3);
  sensitive<<clk.pos();


SC_METHOD(prc_write_4);
  sensitive<<clk.pos();


SC_METHOD(prc_write_5);
  sensitive<<clk.pos();


SC_METHOD(prc_write_6);
  sensitive<<clk.pos();


SC_METHOD(prc_write_7);
  sensitive<<clk.pos();


SC_METHOD(prc_write_8);
  sensitive<<clk.pos();


SC_METHOD(prc_write_9);
  sensitive<<clk.pos();


SC_METHOD(prc_write_10);
  sensitive<<clk.pos();


SC_METHOD(prc_write_11);
  sensitive<<clk.pos();


SC_METHOD(prc_write_12);
  sensitive<<clk.pos();


SC_METHOD(prc_write_13);
  sensitive<<clk.pos();


SC_METHOD(prc_write_14);
  sensitive<<clk.pos();


SC_METHOD(prc_write_15);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


void prc_write_1()
{
    if (ce1.read() == sc_dt::Log_1) 
    {
            if(address1.read().is_01() && address1.read().to_uint()<AddressRange)
              q1 = ram[address1.read().to_uint()];
            else
              q1 = sc_lv<DataWidth>();
    }
}


void prc_write_2()
{
    if (ce2.read() == sc_dt::Log_1) 
    {
            if(address2.read().is_01() && address2.read().to_uint()<AddressRange)
              q2 = ram[address2.read().to_uint()];
            else
              q2 = sc_lv<DataWidth>();
    }
}


void prc_write_3()
{
    if (ce3.read() == sc_dt::Log_1) 
    {
            if(address3.read().is_01() && address3.read().to_uint()<AddressRange)
              q3 = ram[address3.read().to_uint()];
            else
              q3 = sc_lv<DataWidth>();
    }
}


void prc_write_4()
{
    if (ce4.read() == sc_dt::Log_1) 
    {
            if(address4.read().is_01() && address4.read().to_uint()<AddressRange)
              q4 = ram[address4.read().to_uint()];
            else
              q4 = sc_lv<DataWidth>();
    }
}


void prc_write_5()
{
    if (ce5.read() == sc_dt::Log_1) 
    {
            if(address5.read().is_01() && address5.read().to_uint()<AddressRange)
              q5 = ram[address5.read().to_uint()];
            else
              q5 = sc_lv<DataWidth>();
    }
}


void prc_write_6()
{
    if (ce6.read() == sc_dt::Log_1) 
    {
            if(address6.read().is_01() && address6.read().to_uint()<AddressRange)
              q6 = ram[address6.read().to_uint()];
            else
              q6 = sc_lv<DataWidth>();
    }
}


void prc_write_7()
{
    if (ce7.read() == sc_dt::Log_1) 
    {
            if(address7.read().is_01() && address7.read().to_uint()<AddressRange)
              q7 = ram[address7.read().to_uint()];
            else
              q7 = sc_lv<DataWidth>();
    }
}


void prc_write_8()
{
    if (ce8.read() == sc_dt::Log_1) 
    {
            if(address8.read().is_01() && address8.read().to_uint()<AddressRange)
              q8 = ram[address8.read().to_uint()];
            else
              q8 = sc_lv<DataWidth>();
    }
}


void prc_write_9()
{
    if (ce9.read() == sc_dt::Log_1) 
    {
            if(address9.read().is_01() && address9.read().to_uint()<AddressRange)
              q9 = ram[address9.read().to_uint()];
            else
              q9 = sc_lv<DataWidth>();
    }
}


void prc_write_10()
{
    if (ce10.read() == sc_dt::Log_1) 
    {
            if(address10.read().is_01() && address10.read().to_uint()<AddressRange)
              q10 = ram[address10.read().to_uint()];
            else
              q10 = sc_lv<DataWidth>();
    }
}


void prc_write_11()
{
    if (ce11.read() == sc_dt::Log_1) 
    {
            if(address11.read().is_01() && address11.read().to_uint()<AddressRange)
              q11 = ram[address11.read().to_uint()];
            else
              q11 = sc_lv<DataWidth>();
    }
}


void prc_write_12()
{
    if (ce12.read() == sc_dt::Log_1) 
    {
            if(address12.read().is_01() && address12.read().to_uint()<AddressRange)
              q12 = ram[address12.read().to_uint()];
            else
              q12 = sc_lv<DataWidth>();
    }
}


void prc_write_13()
{
    if (ce13.read() == sc_dt::Log_1) 
    {
            if(address13.read().is_01() && address13.read().to_uint()<AddressRange)
              q13 = ram[address13.read().to_uint()];
            else
              q13 = sc_lv<DataWidth>();
    }
}


void prc_write_14()
{
    if (ce14.read() == sc_dt::Log_1) 
    {
            if(address14.read().is_01() && address14.read().to_uint()<AddressRange)
              q14 = ram[address14.read().to_uint()];
            else
              q14 = sc_lv<DataWidth>();
    }
}


void prc_write_15()
{
    if (ce15.read() == sc_dt::Log_1) 
    {
            if(address15.read().is_01() && address15.read().to_uint()<AddressRange)
              q15 = ram[address15.read().to_uint()];
            else
              q15 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(aes_encrypt_top_sdEe) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 128;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in<sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in <sc_lv<AddressWidth> > address2;
sc_core::sc_in<sc_logic> ce2;
sc_core::sc_out <sc_lv<DataWidth> > q2;
sc_core::sc_in <sc_lv<AddressWidth> > address3;
sc_core::sc_in<sc_logic> ce3;
sc_core::sc_out <sc_lv<DataWidth> > q3;
sc_core::sc_in <sc_lv<AddressWidth> > address4;
sc_core::sc_in<sc_logic> ce4;
sc_core::sc_out <sc_lv<DataWidth> > q4;
sc_core::sc_in <sc_lv<AddressWidth> > address5;
sc_core::sc_in<sc_logic> ce5;
sc_core::sc_out <sc_lv<DataWidth> > q5;
sc_core::sc_in <sc_lv<AddressWidth> > address6;
sc_core::sc_in<sc_logic> ce6;
sc_core::sc_out <sc_lv<DataWidth> > q6;
sc_core::sc_in <sc_lv<AddressWidth> > address7;
sc_core::sc_in<sc_logic> ce7;
sc_core::sc_out <sc_lv<DataWidth> > q7;
sc_core::sc_in <sc_lv<AddressWidth> > address8;
sc_core::sc_in<sc_logic> ce8;
sc_core::sc_out <sc_lv<DataWidth> > q8;
sc_core::sc_in <sc_lv<AddressWidth> > address9;
sc_core::sc_in<sc_logic> ce9;
sc_core::sc_out <sc_lv<DataWidth> > q9;
sc_core::sc_in <sc_lv<AddressWidth> > address10;
sc_core::sc_in<sc_logic> ce10;
sc_core::sc_out <sc_lv<DataWidth> > q10;
sc_core::sc_in <sc_lv<AddressWidth> > address11;
sc_core::sc_in<sc_logic> ce11;
sc_core::sc_out <sc_lv<DataWidth> > q11;
sc_core::sc_in <sc_lv<AddressWidth> > address12;
sc_core::sc_in<sc_logic> ce12;
sc_core::sc_out <sc_lv<DataWidth> > q12;
sc_core::sc_in <sc_lv<AddressWidth> > address13;
sc_core::sc_in<sc_logic> ce13;
sc_core::sc_out <sc_lv<DataWidth> > q13;
sc_core::sc_in <sc_lv<AddressWidth> > address14;
sc_core::sc_in<sc_logic> ce14;
sc_core::sc_out <sc_lv<DataWidth> > q14;
sc_core::sc_in <sc_lv<AddressWidth> > address15;
sc_core::sc_in<sc_logic> ce15;
sc_core::sc_out <sc_lv<DataWidth> > q15;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


aes_encrypt_top_sdEe_ram* meminst;


SC_CTOR(aes_encrypt_top_sdEe) {
meminst = new aes_encrypt_top_sdEe_ram("aes_encrypt_top_sdEe_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->address1(address1);
meminst->ce1(ce1);
meminst->q1(q1);

meminst->address2(address2);
meminst->ce2(ce2);
meminst->q2(q2);

meminst->address3(address3);
meminst->ce3(ce3);
meminst->q3(q3);

meminst->address4(address4);
meminst->ce4(ce4);
meminst->q4(q4);

meminst->address5(address5);
meminst->ce5(ce5);
meminst->q5(q5);

meminst->address6(address6);
meminst->ce6(ce6);
meminst->q6(q6);

meminst->address7(address7);
meminst->ce7(ce7);
meminst->q7(q7);

meminst->address8(address8);
meminst->ce8(ce8);
meminst->q8(q8);

meminst->address9(address9);
meminst->ce9(ce9);
meminst->q9(q9);

meminst->address10(address10);
meminst->ce10(ce10);
meminst->q10(q10);

meminst->address11(address11);
meminst->ce11(ce11);
meminst->q11(q11);

meminst->address12(address12);
meminst->ce12(ce12);
meminst->q12(q12);

meminst->address13(address13);
meminst->ce13(ce13);
meminst->q13(q13);

meminst->address14(address14);
meminst->ce14(ce14);
meminst->q14(q14);

meminst->address15(address15);
meminst->ce15(ce15);
meminst->q15(q15);

meminst->reset(reset);
meminst->clk(clk);
}
~aes_encrypt_top_sdEe() {
    delete meminst;
}


};//endmodule
#endif
