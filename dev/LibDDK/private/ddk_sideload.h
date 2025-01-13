/* -------------------------------------------

	Copyright Amlal EL Mahrouss.

	File: sideload.h
	Purpose: DDK sideload support.

------------------------------------------- */

#pragma once

#include <LibDDK/ddk.h>

/// \brief Sideload support.
/// \file ddk_sideload.h

typedef int32_t (*DFunc)(struct DDK_OBJECT_MANIFEST* self, struct DDK_OBJECT_MANIFEST* arg, struct DDK_OBJECT_MANIFEST* opt);

int32_t KernelSideLoad(struct DDK_OBJECT_MANIFEST* self,
					   DFunc					   init,
					   DFunc					   dispose,
					   DFunc					   pnp_opt,
					   DFunc					   status_opt,
					   DFunc					   crash_opt);

int32_t KernelDisableSideLoad(struct DDK_OBJECT_MANIFEST* self);

int32_t KernelRemoveSideLoad(struct DDK_OBJECT_MANIFEST* self);