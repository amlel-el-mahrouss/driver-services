/* -------------------------------------------

	Copyright Amlal EL Mahrouss.

	Purpose: DDK Text I/O.

------------------------------------------- */

#include <LibDDK/dev.h>
#include <LibDDK/str.h>

/// @brief Open a new binary device from path.
DK_EXTERN DDK_DEVICE_PTR KernelOpenDevice(const char* devicePath)
{
	if (!devicePath)
		return nil;

	return KernelCall("ZkOpenDevice", 1, (void*)devicePath, KernelStringLength(devicePath));
}

/// @brief Close any device.
/// @param device valid device.
DK_EXTERN void KernelCloseDevice(DDK_DEVICE_PTR device)
{
	if (!device)
		return;

	KernelCall("ZkCloseDevice", 1, device, sizeof(DDK_DEVICE));
}
