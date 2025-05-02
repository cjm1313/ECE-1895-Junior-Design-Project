// ==============================================================
// File generated on Mon Apr 21 20:48:57 -0400 2025
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xaes_encrypt_top.h"

extern XAes_encrypt_top_Config XAes_encrypt_top_ConfigTable[];

XAes_encrypt_top_Config *XAes_encrypt_top_LookupConfig(u16 DeviceId) {
	XAes_encrypt_top_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XAES_ENCRYPT_TOP_NUM_INSTANCES; Index++) {
		if (XAes_encrypt_top_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XAes_encrypt_top_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XAes_encrypt_top_Initialize(XAes_encrypt_top *InstancePtr, u16 DeviceId) {
	XAes_encrypt_top_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XAes_encrypt_top_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XAes_encrypt_top_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

