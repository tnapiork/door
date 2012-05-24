// *************************************************************************************************
// 16-bit CRC checksum calculation
// *************************************************************************************************

// *************************************************************************************************
// Include section
#include "driver/crc.h"

// *************************************************************************************************
// Prototype section
u16 crc_compute(u8 *data, u16 length);

// *************************************************************************************************
// @fn          crc_compute
// @brief       Compute crc checksum for given data
// @param       data and its length
// @return      16-bit CRC checksum
// *************************************************************************************************
u16 crc_compute(u8 *data, u16 length)
{
	u16 i = 0;
	u16 crc = 0;
	
	RNDL = 0xFF;
	RNDL = 0xFF;
	
	for (i = 0; i < length; ++i)
	{
		RNDH = data[i];
	}
	crc = RNDL;
	crc |= RNDH << 8;
	return crc;
}
