/* -------------------------------------------

	Copyright Amlal EL Mahrouss.

	Purpose: DDK versioning.

------------------------------------------- */

#include <LibDDK/ddk.h>

#ifndef cDDKVersionHighest
#define cDDKVersionHighest 1
#endif // !cDDKVersionHighest

#ifndef cDDKVersionLowest
#define cDDKVersionLowest 1
#endif // !cDDKVersionLowest

#ifndef cDDKVersion
#define cDDKVersion 1
#endif // !cDDKVersion

int32_t c_api_version_highest = cDDKVersionHighest;
int32_t c_api_version_least	  = cDDKVersionLowest;
int32_t c_api_version		  = cDDKVersion;
