# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 1
set hasByteEnable 0
set MemName aes_encrypt_top_sbkb
set CoreName ap_simcore_mem
set PortList { 1 1 }
set DataWd 8
set AddrRange 256
set AddrWd 8
set impl_style auto
set TrueReset 0
set IsROM 1
set ROMData { "01100011" "01111100" "01110111" "01111011" "11110010" "01101011" "01101111" "11000101" "00110000" "00000001" "01100111" "00101011" "11111110" "11010111" "10101011" "01110110" "11001010" "10000010" "11001001" "01111101" "11111010" "01011001" "01000111" "11110000" "10101101" "11010100" "10100010" "10101111" "10011100" "10100100" "01110010" "11000000" "10110111" "11111101" "10010011" "00100110" "00110110" "00111111" "11110111" "11001100" "00110100" "10100101" "11100101" "11110001" "01110001" "11011000" "00110001" "00010101" "00000100" "11000111" "00100011" "11000011" "00011000" "10010110" "00000101" "10011010" "00000111" "00010010" "10000000" "11100010" "11101011" "00100111" "10110010" "01110101" "00001001" "10000011" "00101100" "00011010" "00011011" "01101110" "01011010" "10100000" "01010010" "00111011" "11010110" "10110011" "00101001" "11100011" "00101111" "10000100" "01010011" "11010001" "00000000" "11101101" "00100000" "11111100" "10110001" "01011011" "01101010" "11001011" "10111110" "00111001" "01001010" "01001100" "01011000" "11001111" "11010000" "11101111" "10101010" "11111011" "01000011" "01001101" "00110011" "10000101" "01000101" "11111001" "00000010" "01111111" "01010000" "00111100" "10011111" "10101000" "01010001" "10100011" "01000000" "10001111" "10010010" "10011101" "00111000" "11110101" "10111100" "10110110" "11011010" "00100001" "00010000" "11111111" "11110011" "11010010" "11001101" "00001100" "00010011" "11101100" "01011111" "10010111" "01000100" "00010111" "11000100" "10100111" "01111110" "00111101" "01100100" "01011101" "00011001" "01110011" "01100000" "10000001" "01001111" "11011100" "00100010" "00101010" "10010000" "10001000" "01000110" "11101110" "10111000" "00010100" "11011110" "01011110" "00001011" "11011011" "11100000" "00110010" "00111010" "00001010" "01001001" "00000110" "00100100" "01011100" "11000010" "11010011" "10101100" "01100010" "10010001" "10010101" "11100100" "01111001" "11100111" "11001000" "00110111" "01101101" "10001101" "11010101" "01001110" "10101001" "01101100" "01010110" "11110100" "11101010" "01100101" "01111010" "10101110" "00001000" "10111010" "01111000" "00100101" "00101110" "00011100" "10100110" "10110100" "11000110" "11101000" "11011101" "01110100" "00011111" "01001011" "10111101" "10001011" "10001010" "01110000" "00111110" "10110101" "01100110" "01001000" "00000011" "11110110" "00001110" "01100001" "00110101" "01010111" "10111001" "10000110" "11000001" "00011101" "10011110" "11100001" "11111000" "10011000" "00010001" "01101001" "11011001" "10001110" "10010100" "10011011" "00011110" "10000111" "11101001" "11001110" "01010101" "00101000" "11011111" "10001100" "10100001" "10001001" "00001101" "10111111" "11100110" "01000010" "01101000" "01000001" "10011001" "00101101" "00001111" "10110000" "01010100" "10111011" "00010110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_2P
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 2
set hasByteEnable 0
set MemName aes_encrypt_top_scud
set CoreName ap_simcore_mem
set PortList { 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 }
set DataWd 8
set AddrRange 128
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "01111100" "01111011" "01101011" "11000101" "00000001" "00101011" "11010111" "01110110" "10000010" "01111101" "01011001" "11110000" "11010100" "10101111" "10100100" "11000000" "11111101" "00100110" "00111111" "11001100" "10100101" "11110001" "11011000" "00010101" "11000111" "11000011" "10010110" "10011010" "00010010" "11100010" "00100111" "01110101" "10000011" "00011010" "01101110" "10100000" "00111011" "10110011" "11100011" "10000100" "11010001" "11101101" "11111100" "01011011" "11001011" "00111001" "01001100" "11001111" "11101111" "11111011" "01001101" "10000101" "11111001" "01111111" "00111100" "10101000" "10100011" "10001111" "10011101" "11110101" "10110110" "00100001" "11111111" "11010010" "00001100" "11101100" "10010111" "00010111" "10100111" "00111101" "01011101" "01110011" "10000001" "11011100" "00101010" "10001000" "11101110" "00010100" "01011110" "11011011" "00110010" "00001010" "00000110" "01011100" "11010011" "01100010" "10010101" "01111001" "11001000" "01101101" "11010101" "10101001" "01010110" "11101010" "01111010" "00001000" "01111000" "00101110" "10100110" "11000110" "11011101" "00011111" "10111101" "10001010" "00111110" "01100110" "00000011" "00001110" "00110101" "10111001" "11000001" "10011110" "11111000" "00010001" "11011001" "10010100" "00011110" "11101001" "01010101" "11011111" "10100001" "00001101" "11100110" "01101000" "10011001" "00001111" "01010100" "00010110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 16 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 16 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 3
set hasByteEnable 0
set MemName aes_encrypt_top_sdEe
set CoreName ap_simcore_mem
set PortList { 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 }
set DataWd 8
set AddrRange 128
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "01100011" "01110111" "11110010" "01101111" "00110000" "01100111" "11111110" "10101011" "11001010" "11001001" "11111010" "01000111" "10101101" "10100010" "10011100" "01110010" "10110111" "10010011" "00110110" "11110111" "00110100" "11100101" "01110001" "00110001" "00000100" "00100011" "00011000" "00000101" "00000111" "10000000" "11101011" "10110010" "00001001" "00101100" "00011011" "01011010" "01010010" "11010110" "00101001" "00101111" "01010011" "00000000" "00100000" "10110001" "01101010" "10111110" "01001010" "01011000" "11010000" "10101010" "01000011" "00110011" "01000101" "00000010" "01010000" "10011111" "01010001" "01000000" "10010010" "00111000" "10111100" "11011010" "00010000" "11110011" "11001101" "00010011" "01011111" "01000100" "11000100" "01111110" "01100100" "00011001" "01100000" "01001111" "00100010" "10010000" "01000110" "10111000" "11011110" "00001011" "11100000" "00111010" "01001001" "00100100" "11000010" "10101100" "10010001" "11100100" "11100111" "00110111" "10001101" "01001110" "01101100" "11110100" "01100101" "10101110" "10111010" "00100101" "00011100" "10110100" "11101000" "01110100" "01001011" "10001011" "01110000" "10110101" "01001000" "11110110" "01100001" "01010111" "10000110" "00011101" "11100001" "10011000" "01101001" "10001110" "10011011" "10000111" "11001110" "00101000" "10001100" "10001001" "10111111" "01000010" "01000001" "00101101" "10110000" "10111011" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 16 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 16 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 4
set hasByteEnable 0
set MemName aes_encrypt_top_ieOg
set CoreName ap_simcore_mem
set PortList { 2 1 }
set DataWd 8
set AddrRange 16
set AddrWd 4
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.322
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 5
set hasByteEnable 0
set MemName aes_encrypt_top_ofYi
set CoreName ap_simcore_mem
set PortList { 2 0 }
set DataWd 8
set AddrRange 16
set AddrWd 4
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.322
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 6
set hasByteEnable 0
set MemName aes_encrypt_top_rg8j
set CoreName ap_simcore_mem
set PortList { 0 2 }
set DataWd 8
set AddrRange 11
set AddrWd 4
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.322
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

set port_AXILiteS {
ap_start { }
ap_done { }
ap_ready { }
ap_idle { }
key_V { 
	dir I
	width 8
	depth 16
	mode ap_memory
	offset 16
	offset_end 31
}
}


# Native S_AXILite:
if {${::AESL::PGuard_simmodel_gen}} {
	if {[info proc ::AESL_LIB_XILADAPTER::s_axilite_gen] == "::AESL_LIB_XILADAPTER::s_axilite_gen"} {
		eval "::AESL_LIB_XILADAPTER::s_axilite_gen { \
			id 7 \
			corename aes_encrypt_top_AXILiteS_axilite \
			name aes_encrypt_top_AXILiteS_s_axi \
			ports {$port_AXILiteS} \
			op interface \
			is_flushable 0 \ 
		} "
	} else {
		puts "@W \[IMPL-110\] Cannot find AXI Lite interface model in the library. Ignored generation of AXI Lite  interface for 'AXILiteS'"
	}
}

if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler aes_encrypt_top_AXILiteS_s_axi
}

# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 8 \
    name inStream_V_data_V \
    reset_level 0 \
    sync_rst true \
    corename {inStream} \
    metadata {  } \
    op interface \
    ports { inStream_TDATA { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'inStream_V_data_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 9 \
    name inStream_V_keep_V \
    reset_level 0 \
    sync_rst true \
    corename {inStream} \
    metadata {  } \
    op interface \
    ports { inStream_TKEEP { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'inStream_V_keep_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 10 \
    name inStream_V_strb_V \
    reset_level 0 \
    sync_rst true \
    corename {inStream} \
    metadata {  } \
    op interface \
    ports { inStream_TSTRB { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'inStream_V_strb_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 11 \
    name inStream_V_last_V \
    reset_level 0 \
    sync_rst true \
    corename {inStream} \
    metadata {  } \
    op interface \
    ports { inStream_TVALID { I 1 bit } inStream_TREADY { O 1 bit } inStream_TLAST { I 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'inStream_V_last_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 12 \
    name outStream_V_data_V \
    reset_level 0 \
    sync_rst true \
    corename {outStream} \
    metadata {  } \
    op interface \
    ports { outStream_TDATA { O 8 vector } outStream_TREADY { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'outStream_V_data_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 13 \
    name outStream_V_keep_V \
    reset_level 0 \
    sync_rst true \
    corename {outStream} \
    metadata {  } \
    op interface \
    ports { outStream_TKEEP { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'outStream_V_keep_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 14 \
    name outStream_V_strb_V \
    reset_level 0 \
    sync_rst true \
    corename {outStream} \
    metadata {  } \
    op interface \
    ports { outStream_TSTRB { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'outStream_V_strb_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 15 \
    name outStream_V_last_V \
    reset_level 0 \
    sync_rst true \
    corename {outStream} \
    metadata {  } \
    op interface \
    ports { outStream_TVALID { O 1 bit } outStream_TLAST { O 1 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'outStream_V_last_V'"
}
}



# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -1 \
    name ${PortName} \
    reset_level 0 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst_n
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -2 \
    name ${PortName} \
    reset_level 0 \
    sync_rst true \
    corename apif_ap_rst_n \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


