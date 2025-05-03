// ==============================================================
// File generated on Tue Apr 22 00:07:37 -0400 2025
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XAES_ENCRYPT_TOP_H
#define XAES_ENCRYPT_TOP_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xaes_encrypt_top_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XAes_encrypt_top_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XAes_encrypt_top;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XAes_encrypt_top_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XAes_encrypt_top_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XAes_encrypt_top_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XAes_encrypt_top_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XAes_encrypt_top_Initialize(XAes_encrypt_top *InstancePtr, u16 DeviceId);
XAes_encrypt_top_Config* XAes_encrypt_top_LookupConfig(u16 DeviceId);
int XAes_encrypt_top_CfgInitialize(XAes_encrypt_top *InstancePtr, XAes_encrypt_top_Config *ConfigPtr);
#else
int XAes_encrypt_top_Initialize(XAes_encrypt_top *InstancePtr, const char* InstanceName);
int XAes_encrypt_top_Release(XAes_encrypt_top *InstancePtr);
#endif

void XAes_encrypt_top_Start(XAes_encrypt_top *InstancePtr);
u32 XAes_encrypt_top_IsDone(XAes_encrypt_top *InstancePtr);
u32 XAes_encrypt_top_IsIdle(XAes_encrypt_top *InstancePtr);
u32 XAes_encrypt_top_IsReady(XAes_encrypt_top *InstancePtr);
void XAes_encrypt_top_EnableAutoRestart(XAes_encrypt_top *InstancePtr);
void XAes_encrypt_top_DisableAutoRestart(XAes_encrypt_top *InstancePtr);

u32 XAes_encrypt_top_Get_key_V_BaseAddress(XAes_encrypt_top *InstancePtr);
u32 XAes_encrypt_top_Get_key_V_HighAddress(XAes_encrypt_top *InstancePtr);
u32 XAes_encrypt_top_Get_key_V_TotalBytes(XAes_encrypt_top *InstancePtr);
u32 XAes_encrypt_top_Get_key_V_BitWidth(XAes_encrypt_top *InstancePtr);
u32 XAes_encrypt_top_Get_key_V_Depth(XAes_encrypt_top *InstancePtr);
u32 XAes_encrypt_top_Write_key_V_Words(XAes_encrypt_top *InstancePtr, int offset, int *data, int length);
u32 XAes_encrypt_top_Read_key_V_Words(XAes_encrypt_top *InstancePtr, int offset, int *data, int length);
u32 XAes_encrypt_top_Write_key_V_Bytes(XAes_encrypt_top *InstancePtr, int offset, char *data, int length);
u32 XAes_encrypt_top_Read_key_V_Bytes(XAes_encrypt_top *InstancePtr, int offset, char *data, int length);

void XAes_encrypt_top_InterruptGlobalEnable(XAes_encrypt_top *InstancePtr);
void XAes_encrypt_top_InterruptGlobalDisable(XAes_encrypt_top *InstancePtr);
void XAes_encrypt_top_InterruptEnable(XAes_encrypt_top *InstancePtr, u32 Mask);
void XAes_encrypt_top_InterruptDisable(XAes_encrypt_top *InstancePtr, u32 Mask);
void XAes_encrypt_top_InterruptClear(XAes_encrypt_top *InstancePtr, u32 Mask);
u32 XAes_encrypt_top_InterruptGetEnabled(XAes_encrypt_top *InstancePtr);
u32 XAes_encrypt_top_InterruptGetStatus(XAes_encrypt_top *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
