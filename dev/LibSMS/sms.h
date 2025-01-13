/* -------------------------------------------

	Copyright Amlal EL Mahrouss.

	FILE: sms.h
	PURPOSE: Standard DDK message struct.

------------------------------------------- */

#pragma once

#include <LibDDK/ddk.h>

/// \brief Simple Message Struct.
/// \file sms.h

struct DDK_SMS_STRUCT DK_FINAL
{
	char	s_msg[DDK_SMS_MAX_SZ];
	int32_t s_type;
	int64_t s_sender;
	int64_t s_receiver;
};
