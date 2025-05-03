############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project aes
set_top aes_encrypt_top
add_files aes/aes_encrypt.cpp
add_files -tb aes/aes_encrypt_tb.cpp -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020clg400-1} -tool vivado
create_clock -period 10 -name default
config_export -format ip_catalog -rtl vhdl
#source "./aes/solution1/directives.tcl"
csim_design -clean
csynth_design
cosim_design -rtl vhdl
export_design -rtl vhdl -format ip_catalog
