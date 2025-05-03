-- ==============================================================
-- File generated on Tue Apr 22 00:07:37 -0400 2025
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
-- SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
-- IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity aes_encrypt_top_sdEe_rom is 
    generic(
             DWIDTH     : integer := 8; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 128
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          addr1      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce1       : in std_logic; 
          q1         : out std_logic_vector(DWIDTH-1 downto 0);
          addr2      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce2       : in std_logic; 
          q2         : out std_logic_vector(DWIDTH-1 downto 0);
          addr3      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce3       : in std_logic; 
          q3         : out std_logic_vector(DWIDTH-1 downto 0);
          addr4      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce4       : in std_logic; 
          q4         : out std_logic_vector(DWIDTH-1 downto 0);
          addr5      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce5       : in std_logic; 
          q5         : out std_logic_vector(DWIDTH-1 downto 0);
          addr6      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce6       : in std_logic; 
          q6         : out std_logic_vector(DWIDTH-1 downto 0);
          addr7      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce7       : in std_logic; 
          q7         : out std_logic_vector(DWIDTH-1 downto 0);
          addr8      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce8       : in std_logic; 
          q8         : out std_logic_vector(DWIDTH-1 downto 0);
          addr9      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce9       : in std_logic; 
          q9         : out std_logic_vector(DWIDTH-1 downto 0);
          addr10      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce10       : in std_logic; 
          q10         : out std_logic_vector(DWIDTH-1 downto 0);
          addr11      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce11       : in std_logic; 
          q11         : out std_logic_vector(DWIDTH-1 downto 0);
          addr12      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce12       : in std_logic; 
          q12         : out std_logic_vector(DWIDTH-1 downto 0);
          addr13      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce13       : in std_logic; 
          q13         : out std_logic_vector(DWIDTH-1 downto 0);
          addr14      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce14       : in std_logic; 
          q14         : out std_logic_vector(DWIDTH-1 downto 0);
          addr15      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce15       : in std_logic; 
          q15         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of aes_encrypt_top_sdEe_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr1_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr2_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr3_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr4_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr5_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr6_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr7_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr8_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr9_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr10_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr11_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr12_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr13_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr14_tmp : std_logic_vector(AWIDTH-1 downto 0); 
signal addr15_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem0 : mem_array := (
    0 => "01100011", 1 => "01110111", 2 => "11110010", 3 => "01101111", 
    4 => "00110000", 5 => "01100111", 6 => "11111110", 7 => "10101011", 
    8 => "11001010", 9 => "11001001", 10 => "11111010", 11 => "01000111", 
    12 => "10101101", 13 => "10100010", 14 => "10011100", 15 => "01110010", 
    16 => "10110111", 17 => "10010011", 18 => "00110110", 19 => "11110111", 
    20 => "00110100", 21 => "11100101", 22 => "01110001", 23 => "00110001", 
    24 => "00000100", 25 => "00100011", 26 => "00011000", 27 => "00000101", 
    28 => "00000111", 29 => "10000000", 30 => "11101011", 31 => "10110010", 
    32 => "00001001", 33 => "00101100", 34 => "00011011", 35 => "01011010", 
    36 => "01010010", 37 => "11010110", 38 => "00101001", 39 => "00101111", 
    40 => "01010011", 41 => "00000000", 42 => "00100000", 43 => "10110001", 
    44 => "01101010", 45 => "10111110", 46 => "01001010", 47 => "01011000", 
    48 => "11010000", 49 => "10101010", 50 => "01000011", 51 => "00110011", 
    52 => "01000101", 53 => "00000010", 54 => "01010000", 55 => "10011111", 
    56 => "01010001", 57 => "01000000", 58 => "10010010", 59 => "00111000", 
    60 => "10111100", 61 => "11011010", 62 => "00010000", 63 => "11110011", 
    64 => "11001101", 65 => "00010011", 66 => "01011111", 67 => "01000100", 
    68 => "11000100", 69 => "01111110", 70 => "01100100", 71 => "00011001", 
    72 => "01100000", 73 => "01001111", 74 => "00100010", 75 => "10010000", 
    76 => "01000110", 77 => "10111000", 78 => "11011110", 79 => "00001011", 
    80 => "11100000", 81 => "00111010", 82 => "01001001", 83 => "00100100", 
    84 => "11000010", 85 => "10101100", 86 => "10010001", 87 => "11100100", 
    88 => "11100111", 89 => "00110111", 90 => "10001101", 91 => "01001110", 
    92 => "01101100", 93 => "11110100", 94 => "01100101", 95 => "10101110", 
    96 => "10111010", 97 => "00100101", 98 => "00011100", 99 => "10110100", 
    100 => "11101000", 101 => "01110100", 102 => "01001011", 103 => "10001011", 
    104 => "01110000", 105 => "10110101", 106 => "01001000", 107 => "11110110", 
    108 => "01100001", 109 => "01010111", 110 => "10000110", 111 => "00011101", 
    112 => "11100001", 113 => "10011000", 114 => "01101001", 115 => "10001110", 
    116 => "10011011", 117 => "10000111", 118 => "11001110", 119 => "00101000", 
    120 => "10001100", 121 => "10001001", 122 => "10111111", 123 => "01000010", 
    124 => "01000001", 125 => "00101101", 126 => "10110000", 127 => "10111011" );
signal mem1 : mem_array := (
    0 => "01100011", 1 => "01110111", 2 => "11110010", 3 => "01101111", 
    4 => "00110000", 5 => "01100111", 6 => "11111110", 7 => "10101011", 
    8 => "11001010", 9 => "11001001", 10 => "11111010", 11 => "01000111", 
    12 => "10101101", 13 => "10100010", 14 => "10011100", 15 => "01110010", 
    16 => "10110111", 17 => "10010011", 18 => "00110110", 19 => "11110111", 
    20 => "00110100", 21 => "11100101", 22 => "01110001", 23 => "00110001", 
    24 => "00000100", 25 => "00100011", 26 => "00011000", 27 => "00000101", 
    28 => "00000111", 29 => "10000000", 30 => "11101011", 31 => "10110010", 
    32 => "00001001", 33 => "00101100", 34 => "00011011", 35 => "01011010", 
    36 => "01010010", 37 => "11010110", 38 => "00101001", 39 => "00101111", 
    40 => "01010011", 41 => "00000000", 42 => "00100000", 43 => "10110001", 
    44 => "01101010", 45 => "10111110", 46 => "01001010", 47 => "01011000", 
    48 => "11010000", 49 => "10101010", 50 => "01000011", 51 => "00110011", 
    52 => "01000101", 53 => "00000010", 54 => "01010000", 55 => "10011111", 
    56 => "01010001", 57 => "01000000", 58 => "10010010", 59 => "00111000", 
    60 => "10111100", 61 => "11011010", 62 => "00010000", 63 => "11110011", 
    64 => "11001101", 65 => "00010011", 66 => "01011111", 67 => "01000100", 
    68 => "11000100", 69 => "01111110", 70 => "01100100", 71 => "00011001", 
    72 => "01100000", 73 => "01001111", 74 => "00100010", 75 => "10010000", 
    76 => "01000110", 77 => "10111000", 78 => "11011110", 79 => "00001011", 
    80 => "11100000", 81 => "00111010", 82 => "01001001", 83 => "00100100", 
    84 => "11000010", 85 => "10101100", 86 => "10010001", 87 => "11100100", 
    88 => "11100111", 89 => "00110111", 90 => "10001101", 91 => "01001110", 
    92 => "01101100", 93 => "11110100", 94 => "01100101", 95 => "10101110", 
    96 => "10111010", 97 => "00100101", 98 => "00011100", 99 => "10110100", 
    100 => "11101000", 101 => "01110100", 102 => "01001011", 103 => "10001011", 
    104 => "01110000", 105 => "10110101", 106 => "01001000", 107 => "11110110", 
    108 => "01100001", 109 => "01010111", 110 => "10000110", 111 => "00011101", 
    112 => "11100001", 113 => "10011000", 114 => "01101001", 115 => "10001110", 
    116 => "10011011", 117 => "10000111", 118 => "11001110", 119 => "00101000", 
    120 => "10001100", 121 => "10001001", 122 => "10111111", 123 => "01000010", 
    124 => "01000001", 125 => "00101101", 126 => "10110000", 127 => "10111011" );
signal mem2 : mem_array := (
    0 => "01100011", 1 => "01110111", 2 => "11110010", 3 => "01101111", 
    4 => "00110000", 5 => "01100111", 6 => "11111110", 7 => "10101011", 
    8 => "11001010", 9 => "11001001", 10 => "11111010", 11 => "01000111", 
    12 => "10101101", 13 => "10100010", 14 => "10011100", 15 => "01110010", 
    16 => "10110111", 17 => "10010011", 18 => "00110110", 19 => "11110111", 
    20 => "00110100", 21 => "11100101", 22 => "01110001", 23 => "00110001", 
    24 => "00000100", 25 => "00100011", 26 => "00011000", 27 => "00000101", 
    28 => "00000111", 29 => "10000000", 30 => "11101011", 31 => "10110010", 
    32 => "00001001", 33 => "00101100", 34 => "00011011", 35 => "01011010", 
    36 => "01010010", 37 => "11010110", 38 => "00101001", 39 => "00101111", 
    40 => "01010011", 41 => "00000000", 42 => "00100000", 43 => "10110001", 
    44 => "01101010", 45 => "10111110", 46 => "01001010", 47 => "01011000", 
    48 => "11010000", 49 => "10101010", 50 => "01000011", 51 => "00110011", 
    52 => "01000101", 53 => "00000010", 54 => "01010000", 55 => "10011111", 
    56 => "01010001", 57 => "01000000", 58 => "10010010", 59 => "00111000", 
    60 => "10111100", 61 => "11011010", 62 => "00010000", 63 => "11110011", 
    64 => "11001101", 65 => "00010011", 66 => "01011111", 67 => "01000100", 
    68 => "11000100", 69 => "01111110", 70 => "01100100", 71 => "00011001", 
    72 => "01100000", 73 => "01001111", 74 => "00100010", 75 => "10010000", 
    76 => "01000110", 77 => "10111000", 78 => "11011110", 79 => "00001011", 
    80 => "11100000", 81 => "00111010", 82 => "01001001", 83 => "00100100", 
    84 => "11000010", 85 => "10101100", 86 => "10010001", 87 => "11100100", 
    88 => "11100111", 89 => "00110111", 90 => "10001101", 91 => "01001110", 
    92 => "01101100", 93 => "11110100", 94 => "01100101", 95 => "10101110", 
    96 => "10111010", 97 => "00100101", 98 => "00011100", 99 => "10110100", 
    100 => "11101000", 101 => "01110100", 102 => "01001011", 103 => "10001011", 
    104 => "01110000", 105 => "10110101", 106 => "01001000", 107 => "11110110", 
    108 => "01100001", 109 => "01010111", 110 => "10000110", 111 => "00011101", 
    112 => "11100001", 113 => "10011000", 114 => "01101001", 115 => "10001110", 
    116 => "10011011", 117 => "10000111", 118 => "11001110", 119 => "00101000", 
    120 => "10001100", 121 => "10001001", 122 => "10111111", 123 => "01000010", 
    124 => "01000001", 125 => "00101101", 126 => "10110000", 127 => "10111011" );
signal mem3 : mem_array := (
    0 => "01100011", 1 => "01110111", 2 => "11110010", 3 => "01101111", 
    4 => "00110000", 5 => "01100111", 6 => "11111110", 7 => "10101011", 
    8 => "11001010", 9 => "11001001", 10 => "11111010", 11 => "01000111", 
    12 => "10101101", 13 => "10100010", 14 => "10011100", 15 => "01110010", 
    16 => "10110111", 17 => "10010011", 18 => "00110110", 19 => "11110111", 
    20 => "00110100", 21 => "11100101", 22 => "01110001", 23 => "00110001", 
    24 => "00000100", 25 => "00100011", 26 => "00011000", 27 => "00000101", 
    28 => "00000111", 29 => "10000000", 30 => "11101011", 31 => "10110010", 
    32 => "00001001", 33 => "00101100", 34 => "00011011", 35 => "01011010", 
    36 => "01010010", 37 => "11010110", 38 => "00101001", 39 => "00101111", 
    40 => "01010011", 41 => "00000000", 42 => "00100000", 43 => "10110001", 
    44 => "01101010", 45 => "10111110", 46 => "01001010", 47 => "01011000", 
    48 => "11010000", 49 => "10101010", 50 => "01000011", 51 => "00110011", 
    52 => "01000101", 53 => "00000010", 54 => "01010000", 55 => "10011111", 
    56 => "01010001", 57 => "01000000", 58 => "10010010", 59 => "00111000", 
    60 => "10111100", 61 => "11011010", 62 => "00010000", 63 => "11110011", 
    64 => "11001101", 65 => "00010011", 66 => "01011111", 67 => "01000100", 
    68 => "11000100", 69 => "01111110", 70 => "01100100", 71 => "00011001", 
    72 => "01100000", 73 => "01001111", 74 => "00100010", 75 => "10010000", 
    76 => "01000110", 77 => "10111000", 78 => "11011110", 79 => "00001011", 
    80 => "11100000", 81 => "00111010", 82 => "01001001", 83 => "00100100", 
    84 => "11000010", 85 => "10101100", 86 => "10010001", 87 => "11100100", 
    88 => "11100111", 89 => "00110111", 90 => "10001101", 91 => "01001110", 
    92 => "01101100", 93 => "11110100", 94 => "01100101", 95 => "10101110", 
    96 => "10111010", 97 => "00100101", 98 => "00011100", 99 => "10110100", 
    100 => "11101000", 101 => "01110100", 102 => "01001011", 103 => "10001011", 
    104 => "01110000", 105 => "10110101", 106 => "01001000", 107 => "11110110", 
    108 => "01100001", 109 => "01010111", 110 => "10000110", 111 => "00011101", 
    112 => "11100001", 113 => "10011000", 114 => "01101001", 115 => "10001110", 
    116 => "10011011", 117 => "10000111", 118 => "11001110", 119 => "00101000", 
    120 => "10001100", 121 => "10001001", 122 => "10111111", 123 => "01000010", 
    124 => "01000001", 125 => "00101101", 126 => "10110000", 127 => "10111011" );
signal mem4 : mem_array := (
    0 => "01100011", 1 => "01110111", 2 => "11110010", 3 => "01101111", 
    4 => "00110000", 5 => "01100111", 6 => "11111110", 7 => "10101011", 
    8 => "11001010", 9 => "11001001", 10 => "11111010", 11 => "01000111", 
    12 => "10101101", 13 => "10100010", 14 => "10011100", 15 => "01110010", 
    16 => "10110111", 17 => "10010011", 18 => "00110110", 19 => "11110111", 
    20 => "00110100", 21 => "11100101", 22 => "01110001", 23 => "00110001", 
    24 => "00000100", 25 => "00100011", 26 => "00011000", 27 => "00000101", 
    28 => "00000111", 29 => "10000000", 30 => "11101011", 31 => "10110010", 
    32 => "00001001", 33 => "00101100", 34 => "00011011", 35 => "01011010", 
    36 => "01010010", 37 => "11010110", 38 => "00101001", 39 => "00101111", 
    40 => "01010011", 41 => "00000000", 42 => "00100000", 43 => "10110001", 
    44 => "01101010", 45 => "10111110", 46 => "01001010", 47 => "01011000", 
    48 => "11010000", 49 => "10101010", 50 => "01000011", 51 => "00110011", 
    52 => "01000101", 53 => "00000010", 54 => "01010000", 55 => "10011111", 
    56 => "01010001", 57 => "01000000", 58 => "10010010", 59 => "00111000", 
    60 => "10111100", 61 => "11011010", 62 => "00010000", 63 => "11110011", 
    64 => "11001101", 65 => "00010011", 66 => "01011111", 67 => "01000100", 
    68 => "11000100", 69 => "01111110", 70 => "01100100", 71 => "00011001", 
    72 => "01100000", 73 => "01001111", 74 => "00100010", 75 => "10010000", 
    76 => "01000110", 77 => "10111000", 78 => "11011110", 79 => "00001011", 
    80 => "11100000", 81 => "00111010", 82 => "01001001", 83 => "00100100", 
    84 => "11000010", 85 => "10101100", 86 => "10010001", 87 => "11100100", 
    88 => "11100111", 89 => "00110111", 90 => "10001101", 91 => "01001110", 
    92 => "01101100", 93 => "11110100", 94 => "01100101", 95 => "10101110", 
    96 => "10111010", 97 => "00100101", 98 => "00011100", 99 => "10110100", 
    100 => "11101000", 101 => "01110100", 102 => "01001011", 103 => "10001011", 
    104 => "01110000", 105 => "10110101", 106 => "01001000", 107 => "11110110", 
    108 => "01100001", 109 => "01010111", 110 => "10000110", 111 => "00011101", 
    112 => "11100001", 113 => "10011000", 114 => "01101001", 115 => "10001110", 
    116 => "10011011", 117 => "10000111", 118 => "11001110", 119 => "00101000", 
    120 => "10001100", 121 => "10001001", 122 => "10111111", 123 => "01000010", 
    124 => "01000001", 125 => "00101101", 126 => "10110000", 127 => "10111011" );
signal mem5 : mem_array := (
    0 => "01100011", 1 => "01110111", 2 => "11110010", 3 => "01101111", 
    4 => "00110000", 5 => "01100111", 6 => "11111110", 7 => "10101011", 
    8 => "11001010", 9 => "11001001", 10 => "11111010", 11 => "01000111", 
    12 => "10101101", 13 => "10100010", 14 => "10011100", 15 => "01110010", 
    16 => "10110111", 17 => "10010011", 18 => "00110110", 19 => "11110111", 
    20 => "00110100", 21 => "11100101", 22 => "01110001", 23 => "00110001", 
    24 => "00000100", 25 => "00100011", 26 => "00011000", 27 => "00000101", 
    28 => "00000111", 29 => "10000000", 30 => "11101011", 31 => "10110010", 
    32 => "00001001", 33 => "00101100", 34 => "00011011", 35 => "01011010", 
    36 => "01010010", 37 => "11010110", 38 => "00101001", 39 => "00101111", 
    40 => "01010011", 41 => "00000000", 42 => "00100000", 43 => "10110001", 
    44 => "01101010", 45 => "10111110", 46 => "01001010", 47 => "01011000", 
    48 => "11010000", 49 => "10101010", 50 => "01000011", 51 => "00110011", 
    52 => "01000101", 53 => "00000010", 54 => "01010000", 55 => "10011111", 
    56 => "01010001", 57 => "01000000", 58 => "10010010", 59 => "00111000", 
    60 => "10111100", 61 => "11011010", 62 => "00010000", 63 => "11110011", 
    64 => "11001101", 65 => "00010011", 66 => "01011111", 67 => "01000100", 
    68 => "11000100", 69 => "01111110", 70 => "01100100", 71 => "00011001", 
    72 => "01100000", 73 => "01001111", 74 => "00100010", 75 => "10010000", 
    76 => "01000110", 77 => "10111000", 78 => "11011110", 79 => "00001011", 
    80 => "11100000", 81 => "00111010", 82 => "01001001", 83 => "00100100", 
    84 => "11000010", 85 => "10101100", 86 => "10010001", 87 => "11100100", 
    88 => "11100111", 89 => "00110111", 90 => "10001101", 91 => "01001110", 
    92 => "01101100", 93 => "11110100", 94 => "01100101", 95 => "10101110", 
    96 => "10111010", 97 => "00100101", 98 => "00011100", 99 => "10110100", 
    100 => "11101000", 101 => "01110100", 102 => "01001011", 103 => "10001011", 
    104 => "01110000", 105 => "10110101", 106 => "01001000", 107 => "11110110", 
    108 => "01100001", 109 => "01010111", 110 => "10000110", 111 => "00011101", 
    112 => "11100001", 113 => "10011000", 114 => "01101001", 115 => "10001110", 
    116 => "10011011", 117 => "10000111", 118 => "11001110", 119 => "00101000", 
    120 => "10001100", 121 => "10001001", 122 => "10111111", 123 => "01000010", 
    124 => "01000001", 125 => "00101101", 126 => "10110000", 127 => "10111011" );
signal mem6 : mem_array := (
    0 => "01100011", 1 => "01110111", 2 => "11110010", 3 => "01101111", 
    4 => "00110000", 5 => "01100111", 6 => "11111110", 7 => "10101011", 
    8 => "11001010", 9 => "11001001", 10 => "11111010", 11 => "01000111", 
    12 => "10101101", 13 => "10100010", 14 => "10011100", 15 => "01110010", 
    16 => "10110111", 17 => "10010011", 18 => "00110110", 19 => "11110111", 
    20 => "00110100", 21 => "11100101", 22 => "01110001", 23 => "00110001", 
    24 => "00000100", 25 => "00100011", 26 => "00011000", 27 => "00000101", 
    28 => "00000111", 29 => "10000000", 30 => "11101011", 31 => "10110010", 
    32 => "00001001", 33 => "00101100", 34 => "00011011", 35 => "01011010", 
    36 => "01010010", 37 => "11010110", 38 => "00101001", 39 => "00101111", 
    40 => "01010011", 41 => "00000000", 42 => "00100000", 43 => "10110001", 
    44 => "01101010", 45 => "10111110", 46 => "01001010", 47 => "01011000", 
    48 => "11010000", 49 => "10101010", 50 => "01000011", 51 => "00110011", 
    52 => "01000101", 53 => "00000010", 54 => "01010000", 55 => "10011111", 
    56 => "01010001", 57 => "01000000", 58 => "10010010", 59 => "00111000", 
    60 => "10111100", 61 => "11011010", 62 => "00010000", 63 => "11110011", 
    64 => "11001101", 65 => "00010011", 66 => "01011111", 67 => "01000100", 
    68 => "11000100", 69 => "01111110", 70 => "01100100", 71 => "00011001", 
    72 => "01100000", 73 => "01001111", 74 => "00100010", 75 => "10010000", 
    76 => "01000110", 77 => "10111000", 78 => "11011110", 79 => "00001011", 
    80 => "11100000", 81 => "00111010", 82 => "01001001", 83 => "00100100", 
    84 => "11000010", 85 => "10101100", 86 => "10010001", 87 => "11100100", 
    88 => "11100111", 89 => "00110111", 90 => "10001101", 91 => "01001110", 
    92 => "01101100", 93 => "11110100", 94 => "01100101", 95 => "10101110", 
    96 => "10111010", 97 => "00100101", 98 => "00011100", 99 => "10110100", 
    100 => "11101000", 101 => "01110100", 102 => "01001011", 103 => "10001011", 
    104 => "01110000", 105 => "10110101", 106 => "01001000", 107 => "11110110", 
    108 => "01100001", 109 => "01010111", 110 => "10000110", 111 => "00011101", 
    112 => "11100001", 113 => "10011000", 114 => "01101001", 115 => "10001110", 
    116 => "10011011", 117 => "10000111", 118 => "11001110", 119 => "00101000", 
    120 => "10001100", 121 => "10001001", 122 => "10111111", 123 => "01000010", 
    124 => "01000001", 125 => "00101101", 126 => "10110000", 127 => "10111011" );
signal mem7 : mem_array := (
    0 => "01100011", 1 => "01110111", 2 => "11110010", 3 => "01101111", 
    4 => "00110000", 5 => "01100111", 6 => "11111110", 7 => "10101011", 
    8 => "11001010", 9 => "11001001", 10 => "11111010", 11 => "01000111", 
    12 => "10101101", 13 => "10100010", 14 => "10011100", 15 => "01110010", 
    16 => "10110111", 17 => "10010011", 18 => "00110110", 19 => "11110111", 
    20 => "00110100", 21 => "11100101", 22 => "01110001", 23 => "00110001", 
    24 => "00000100", 25 => "00100011", 26 => "00011000", 27 => "00000101", 
    28 => "00000111", 29 => "10000000", 30 => "11101011", 31 => "10110010", 
    32 => "00001001", 33 => "00101100", 34 => "00011011", 35 => "01011010", 
    36 => "01010010", 37 => "11010110", 38 => "00101001", 39 => "00101111", 
    40 => "01010011", 41 => "00000000", 42 => "00100000", 43 => "10110001", 
    44 => "01101010", 45 => "10111110", 46 => "01001010", 47 => "01011000", 
    48 => "11010000", 49 => "10101010", 50 => "01000011", 51 => "00110011", 
    52 => "01000101", 53 => "00000010", 54 => "01010000", 55 => "10011111", 
    56 => "01010001", 57 => "01000000", 58 => "10010010", 59 => "00111000", 
    60 => "10111100", 61 => "11011010", 62 => "00010000", 63 => "11110011", 
    64 => "11001101", 65 => "00010011", 66 => "01011111", 67 => "01000100", 
    68 => "11000100", 69 => "01111110", 70 => "01100100", 71 => "00011001", 
    72 => "01100000", 73 => "01001111", 74 => "00100010", 75 => "10010000", 
    76 => "01000110", 77 => "10111000", 78 => "11011110", 79 => "00001011", 
    80 => "11100000", 81 => "00111010", 82 => "01001001", 83 => "00100100", 
    84 => "11000010", 85 => "10101100", 86 => "10010001", 87 => "11100100", 
    88 => "11100111", 89 => "00110111", 90 => "10001101", 91 => "01001110", 
    92 => "01101100", 93 => "11110100", 94 => "01100101", 95 => "10101110", 
    96 => "10111010", 97 => "00100101", 98 => "00011100", 99 => "10110100", 
    100 => "11101000", 101 => "01110100", 102 => "01001011", 103 => "10001011", 
    104 => "01110000", 105 => "10110101", 106 => "01001000", 107 => "11110110", 
    108 => "01100001", 109 => "01010111", 110 => "10000110", 111 => "00011101", 
    112 => "11100001", 113 => "10011000", 114 => "01101001", 115 => "10001110", 
    116 => "10011011", 117 => "10000111", 118 => "11001110", 119 => "00101000", 
    120 => "10001100", 121 => "10001001", 122 => "10111111", 123 => "01000010", 
    124 => "01000001", 125 => "00101101", 126 => "10110000", 127 => "10111011" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem0 : signal is "block_rom";
attribute syn_rom_style of mem1 : signal is "block_rom";
attribute syn_rom_style of mem2 : signal is "block_rom";
attribute syn_rom_style of mem3 : signal is "block_rom";
attribute syn_rom_style of mem4 : signal is "block_rom";
attribute syn_rom_style of mem5 : signal is "block_rom";
attribute syn_rom_style of mem6 : signal is "block_rom";
attribute syn_rom_style of mem7 : signal is "block_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem0 : signal is "block";
attribute ROM_STYLE of mem1 : signal is "block";
attribute ROM_STYLE of mem2 : signal is "block";
attribute ROM_STYLE of mem3 : signal is "block";
attribute ROM_STYLE of mem4 : signal is "block";
attribute ROM_STYLE of mem5 : signal is "block";
attribute ROM_STYLE of mem6 : signal is "block";
attribute ROM_STYLE of mem7 : signal is "block";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

memory_access_guard_1: process (addr1) 
begin
      addr1_tmp <= addr1;
--synthesis translate_off
      if (CONV_INTEGER(addr1) > mem_size-1) then
           addr1_tmp <= (others => '0');
      else 
           addr1_tmp <= addr1;
      end if;
--synthesis translate_on
end process;

memory_access_guard_2: process (addr2) 
begin
      addr2_tmp <= addr2;
--synthesis translate_off
      if (CONV_INTEGER(addr2) > mem_size-1) then
           addr2_tmp <= (others => '0');
      else 
           addr2_tmp <= addr2;
      end if;
--synthesis translate_on
end process;

memory_access_guard_3: process (addr3) 
begin
      addr3_tmp <= addr3;
--synthesis translate_off
      if (CONV_INTEGER(addr3) > mem_size-1) then
           addr3_tmp <= (others => '0');
      else 
           addr3_tmp <= addr3;
      end if;
--synthesis translate_on
end process;

memory_access_guard_4: process (addr4) 
begin
      addr4_tmp <= addr4;
--synthesis translate_off
      if (CONV_INTEGER(addr4) > mem_size-1) then
           addr4_tmp <= (others => '0');
      else 
           addr4_tmp <= addr4;
      end if;
--synthesis translate_on
end process;

memory_access_guard_5: process (addr5) 
begin
      addr5_tmp <= addr5;
--synthesis translate_off
      if (CONV_INTEGER(addr5) > mem_size-1) then
           addr5_tmp <= (others => '0');
      else 
           addr5_tmp <= addr5;
      end if;
--synthesis translate_on
end process;

memory_access_guard_6: process (addr6) 
begin
      addr6_tmp <= addr6;
--synthesis translate_off
      if (CONV_INTEGER(addr6) > mem_size-1) then
           addr6_tmp <= (others => '0');
      else 
           addr6_tmp <= addr6;
      end if;
--synthesis translate_on
end process;

memory_access_guard_7: process (addr7) 
begin
      addr7_tmp <= addr7;
--synthesis translate_off
      if (CONV_INTEGER(addr7) > mem_size-1) then
           addr7_tmp <= (others => '0');
      else 
           addr7_tmp <= addr7;
      end if;
--synthesis translate_on
end process;

memory_access_guard_8: process (addr8) 
begin
      addr8_tmp <= addr8;
--synthesis translate_off
      if (CONV_INTEGER(addr8) > mem_size-1) then
           addr8_tmp <= (others => '0');
      else 
           addr8_tmp <= addr8;
      end if;
--synthesis translate_on
end process;

memory_access_guard_9: process (addr9) 
begin
      addr9_tmp <= addr9;
--synthesis translate_off
      if (CONV_INTEGER(addr9) > mem_size-1) then
           addr9_tmp <= (others => '0');
      else 
           addr9_tmp <= addr9;
      end if;
--synthesis translate_on
end process;

memory_access_guard_10: process (addr10) 
begin
      addr10_tmp <= addr10;
--synthesis translate_off
      if (CONV_INTEGER(addr10) > mem_size-1) then
           addr10_tmp <= (others => '0');
      else 
           addr10_tmp <= addr10;
      end if;
--synthesis translate_on
end process;

memory_access_guard_11: process (addr11) 
begin
      addr11_tmp <= addr11;
--synthesis translate_off
      if (CONV_INTEGER(addr11) > mem_size-1) then
           addr11_tmp <= (others => '0');
      else 
           addr11_tmp <= addr11;
      end if;
--synthesis translate_on
end process;

memory_access_guard_12: process (addr12) 
begin
      addr12_tmp <= addr12;
--synthesis translate_off
      if (CONV_INTEGER(addr12) > mem_size-1) then
           addr12_tmp <= (others => '0');
      else 
           addr12_tmp <= addr12;
      end if;
--synthesis translate_on
end process;

memory_access_guard_13: process (addr13) 
begin
      addr13_tmp <= addr13;
--synthesis translate_off
      if (CONV_INTEGER(addr13) > mem_size-1) then
           addr13_tmp <= (others => '0');
      else 
           addr13_tmp <= addr13;
      end if;
--synthesis translate_on
end process;

memory_access_guard_14: process (addr14) 
begin
      addr14_tmp <= addr14;
--synthesis translate_off
      if (CONV_INTEGER(addr14) > mem_size-1) then
           addr14_tmp <= (others => '0');
      else 
           addr14_tmp <= addr14;
      end if;
--synthesis translate_on
end process;

memory_access_guard_15: process (addr15) 
begin
      addr15_tmp <= addr15;
--synthesis translate_off
      if (CONV_INTEGER(addr15) > mem_size-1) then
           addr15_tmp <= (others => '0');
      else 
           addr15_tmp <= addr15;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem0(CONV_INTEGER(addr0_tmp)); 
        end if;
        if (ce1 = '1') then 
            q1 <= mem0(CONV_INTEGER(addr1_tmp)); 
        end if;
        if (ce2 = '1') then 
            q2 <= mem1(CONV_INTEGER(addr2_tmp)); 
        end if;
        if (ce3 = '1') then 
            q3 <= mem1(CONV_INTEGER(addr3_tmp)); 
        end if;
        if (ce4 = '1') then 
            q4 <= mem2(CONV_INTEGER(addr4_tmp)); 
        end if;
        if (ce5 = '1') then 
            q5 <= mem2(CONV_INTEGER(addr5_tmp)); 
        end if;
        if (ce6 = '1') then 
            q6 <= mem3(CONV_INTEGER(addr6_tmp)); 
        end if;
        if (ce7 = '1') then 
            q7 <= mem3(CONV_INTEGER(addr7_tmp)); 
        end if;
        if (ce8 = '1') then 
            q8 <= mem4(CONV_INTEGER(addr8_tmp)); 
        end if;
        if (ce9 = '1') then 
            q9 <= mem4(CONV_INTEGER(addr9_tmp)); 
        end if;
        if (ce10 = '1') then 
            q10 <= mem5(CONV_INTEGER(addr10_tmp)); 
        end if;
        if (ce11 = '1') then 
            q11 <= mem5(CONV_INTEGER(addr11_tmp)); 
        end if;
        if (ce12 = '1') then 
            q12 <= mem6(CONV_INTEGER(addr12_tmp)); 
        end if;
        if (ce13 = '1') then 
            q13 <= mem6(CONV_INTEGER(addr13_tmp)); 
        end if;
        if (ce14 = '1') then 
            q14 <= mem7(CONV_INTEGER(addr14_tmp)); 
        end if;
        if (ce15 = '1') then 
            q15 <= mem7(CONV_INTEGER(addr15_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity aes_encrypt_top_sdEe is
    generic (
        DataWidth : INTEGER := 8;
        AddressRange : INTEGER := 128;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address1 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce1 : IN STD_LOGIC;
        q1 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address2 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce2 : IN STD_LOGIC;
        q2 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address3 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce3 : IN STD_LOGIC;
        q3 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address4 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce4 : IN STD_LOGIC;
        q4 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address5 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce5 : IN STD_LOGIC;
        q5 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address6 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce6 : IN STD_LOGIC;
        q6 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address7 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce7 : IN STD_LOGIC;
        q7 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address8 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce8 : IN STD_LOGIC;
        q8 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address9 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce9 : IN STD_LOGIC;
        q9 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address10 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce10 : IN STD_LOGIC;
        q10 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address11 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce11 : IN STD_LOGIC;
        q11 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address12 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce12 : IN STD_LOGIC;
        q12 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address13 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce13 : IN STD_LOGIC;
        q13 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address14 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce14 : IN STD_LOGIC;
        q14 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0);
        address15 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce15 : IN STD_LOGIC;
        q15 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of aes_encrypt_top_sdEe is
    component aes_encrypt_top_sdEe_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR;
            addr1 : IN STD_LOGIC_VECTOR;
            ce1 : IN STD_LOGIC;
            q1 : OUT STD_LOGIC_VECTOR;
            addr2 : IN STD_LOGIC_VECTOR;
            ce2 : IN STD_LOGIC;
            q2 : OUT STD_LOGIC_VECTOR;
            addr3 : IN STD_LOGIC_VECTOR;
            ce3 : IN STD_LOGIC;
            q3 : OUT STD_LOGIC_VECTOR;
            addr4 : IN STD_LOGIC_VECTOR;
            ce4 : IN STD_LOGIC;
            q4 : OUT STD_LOGIC_VECTOR;
            addr5 : IN STD_LOGIC_VECTOR;
            ce5 : IN STD_LOGIC;
            q5 : OUT STD_LOGIC_VECTOR;
            addr6 : IN STD_LOGIC_VECTOR;
            ce6 : IN STD_LOGIC;
            q6 : OUT STD_LOGIC_VECTOR;
            addr7 : IN STD_LOGIC_VECTOR;
            ce7 : IN STD_LOGIC;
            q7 : OUT STD_LOGIC_VECTOR;
            addr8 : IN STD_LOGIC_VECTOR;
            ce8 : IN STD_LOGIC;
            q8 : OUT STD_LOGIC_VECTOR;
            addr9 : IN STD_LOGIC_VECTOR;
            ce9 : IN STD_LOGIC;
            q9 : OUT STD_LOGIC_VECTOR;
            addr10 : IN STD_LOGIC_VECTOR;
            ce10 : IN STD_LOGIC;
            q10 : OUT STD_LOGIC_VECTOR;
            addr11 : IN STD_LOGIC_VECTOR;
            ce11 : IN STD_LOGIC;
            q11 : OUT STD_LOGIC_VECTOR;
            addr12 : IN STD_LOGIC_VECTOR;
            ce12 : IN STD_LOGIC;
            q12 : OUT STD_LOGIC_VECTOR;
            addr13 : IN STD_LOGIC_VECTOR;
            ce13 : IN STD_LOGIC;
            q13 : OUT STD_LOGIC_VECTOR;
            addr14 : IN STD_LOGIC_VECTOR;
            ce14 : IN STD_LOGIC;
            q14 : OUT STD_LOGIC_VECTOR;
            addr15 : IN STD_LOGIC_VECTOR;
            ce15 : IN STD_LOGIC;
            q15 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    aes_encrypt_top_sdEe_rom_U :  component aes_encrypt_top_sdEe_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0,
        addr1 => address1,
        ce1 => ce1,
        q1 => q1,
        addr2 => address2,
        ce2 => ce2,
        q2 => q2,
        addr3 => address3,
        ce3 => ce3,
        q3 => q3,
        addr4 => address4,
        ce4 => ce4,
        q4 => q4,
        addr5 => address5,
        ce5 => ce5,
        q5 => q5,
        addr6 => address6,
        ce6 => ce6,
        q6 => q6,
        addr7 => address7,
        ce7 => ce7,
        q7 => q7,
        addr8 => address8,
        ce8 => ce8,
        q8 => q8,
        addr9 => address9,
        ce9 => ce9,
        q9 => q9,
        addr10 => address10,
        ce10 => ce10,
        q10 => q10,
        addr11 => address11,
        ce11 => ce11,
        q11 => q11,
        addr12 => address12,
        ce12 => ce12,
        q12 => q12,
        addr13 => address13,
        ce13 => ce13,
        q13 => q13,
        addr14 => address14,
        ce14 => ce14,
        q14 => q14,
        addr15 => address15,
        ce15 => ce15,
        q15 => q15);

end architecture;


