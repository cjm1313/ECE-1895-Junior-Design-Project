// ==============================================================
// File generated on Mon Apr 21 20:48:57 -0400 2025
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xaes_encrypt_top.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XAes_encrypt_top_CfgInitialize(XAes_encrypt_top *InstancePtr, XAes_encrypt_top_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XAes_encrypt_top_Start(XAes_encrypt_top *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAes_encrypt_top_ReadReg(InstancePtr->Axilites_BaseAddress, XAES_ENCRYPT_TOP_AXILITES_ADDR_AP_CTRL) & 0x80;
    XAes_encrypt_top_WriteReg(InstancePtr->Axilites_BaseAddress, XAES_ENCRYPT_TOP_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XAes_encrypt_top_IsDone(XAes_encrypt_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAes_encrypt_top_ReadReg(InstancePtr->Axilites_BaseAddress, XAES_ENCRYPT_TOP_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XAes_encrypt_top_IsIdle(XAes_encrypt_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAes_encrypt_top_ReadReg(InstancePtr->Axilites_BaseAddress, XAES_ENCRYPT_TOP_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XAes_encrypt_top_IsReady(XAes_encrypt_top *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XAes_encrypt_top_ReadReg(InstancePtr->Axilites_BaseAddress, XAES_ENCRYPT_TOP_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XAes_encrypt_top_EnableAutoRestart(XAes_encrypt_top *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAes_encrypt_top_WriteReg(InstancePtr->Axilites_BaseAddress, XAES_ENCRYPT_TOP_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XAes_encrypt_top_DisableAutoRestart(XAes_encrypt_top *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAes_encrypt_top_WriteReg(InstancePtr->Axilites_BaseAddress, XAES_ENCRYPT_TOP_AXILITES_ADDR_AP_CTRL, 0);
}

u32 XAes_encrypt_top_Get_key_V_BaseAddress(XAes_encrypt_top *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XAES_ENCRYPT_TOP_AXILITES_ADDR_KEY_V_BASE);
}

u32 XAes_encrypt_top_Get_key_V_HighAddress(XAes_encrypt_top *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XAES_ENCRYPT_TOP_AXILITES_ADDR_KEY_V_HIGH);
}

u32 XAes_encrypt_top_Get_key_V_TotalBytes(XAes_encrypt_top *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XAES_ENCRYPT_TOP_AXILITES_ADDR_KEY_V_HIGH - XAES_ENCRYPT_TOP_AXILITES_ADDR_KEY_V_BASE + 1);
}

u32 XAes_encrypt_top_Get_key_V_BitWidth(XAes_encrypt_top *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XAES_ENCRYPT_TOP_AXILITES_WIDTH_KEY_V;
}

u32 XAes_encrypt_top_Get_key_V_Depth(XAes_encrypt_top *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XAES_ENCRYPT_TOP_AXILITES_DEPTH_KEY_V;
}

u32 XAes_encrypt_top_Write_key_V_Words(XAes_encrypt_top *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XAES_ENCRYPT_TOP_AXILITES_ADDR_KEY_V_HIGH - XAES_ENCRYPT_TOP_AXILITES_ADDR_KEY_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XAES_ENCRYPT_TOP_AXILITES_ADDR_KEY_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XAes_encrypt_top_Read_key_V_Words(XAes_encrypt_top *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XAES_ENCRYPT_TOP_AXILITES_ADDR_KEY_V_HIGH - XAES_ENCRYPT_TOP_AXILITES_ADDR_KEY_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XAES_ENCRYPT_TOP_AXILITES_ADDR_KEY_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XAes_encrypt_top_Write_key_V_Bytes(XAes_encrypt_top *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XAES_ENCRYPT_TOP_AXILITES_ADDR_KEY_V_HIGH - XAES_ENCRYPT_TOP_AXILITES_ADDR_KEY_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XAES_ENCRYPT_TOP_AXILITES_ADDR_KEY_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XAes_encrypt_top_Read_key_V_Bytes(XAes_encrypt_top *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XAES_ENCRYPT_TOP_AXILITES_ADDR_KEY_V_HIGH - XAES_ENCRYPT_TOP_AXILITES_ADDR_KEY_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XAES_ENCRYPT_TOP_AXILITES_ADDR_KEY_V_BASE + offset + i);
    }
    return length;
}

void XAes_encrypt_top_InterruptGlobalEnable(XAes_encrypt_top *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAes_encrypt_top_WriteReg(InstancePtr->Axilites_BaseAddress, XAES_ENCRYPT_TOP_AXILITES_ADDR_GIE, 1);
}

void XAes_encrypt_top_InterruptGlobalDisable(XAes_encrypt_top *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAes_encrypt_top_WriteReg(InstancePtr->Axilites_BaseAddress, XAES_ENCRYPT_TOP_AXILITES_ADDR_GIE, 0);
}

void XAes_encrypt_top_InterruptEnable(XAes_encrypt_top *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XAes_encrypt_top_ReadReg(InstancePtr->Axilites_BaseAddress, XAES_ENCRYPT_TOP_AXILITES_ADDR_IER);
    XAes_encrypt_top_WriteReg(InstancePtr->Axilites_BaseAddress, XAES_ENCRYPT_TOP_AXILITES_ADDR_IER, Register | Mask);
}

void XAes_encrypt_top_InterruptDisable(XAes_encrypt_top *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XAes_encrypt_top_ReadReg(InstancePtr->Axilites_BaseAddress, XAES_ENCRYPT_TOP_AXILITES_ADDR_IER);
    XAes_encrypt_top_WriteReg(InstancePtr->Axilites_BaseAddress, XAES_ENCRYPT_TOP_AXILITES_ADDR_IER, Register & (~Mask));
}

void XAes_encrypt_top_InterruptClear(XAes_encrypt_top *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XAes_encrypt_top_WriteReg(InstancePtr->Axilites_BaseAddress, XAES_ENCRYPT_TOP_AXILITES_ADDR_ISR, Mask);
}

u32 XAes_encrypt_top_InterruptGetEnabled(XAes_encrypt_top *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XAes_encrypt_top_ReadReg(InstancePtr->Axilites_BaseAddress, XAES_ENCRYPT_TOP_AXILITES_ADDR_IER);
}

u32 XAes_encrypt_top_InterruptGetStatus(XAes_encrypt_top *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XAes_encrypt_top_ReadReg(InstancePtr->Axilites_BaseAddress, XAES_ENCRYPT_TOP_AXILITES_ADDR_ISR);
}

