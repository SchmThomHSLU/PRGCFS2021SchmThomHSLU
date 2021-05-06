#include <stdio.h>

#include "bitOps.h"



void setBitNinByte( unsigned char* data, unsigned char bitN)
{
	unsigned char CalculateByte = ( 1 << (bitN-1));
	
	*data = *data | CalculateByte;

}



void clearBitNinByte( unsigned char* data, unsigned char bitN)
{
	unsigned char CalculateByte = ( 1 << (bitN-1));
	
	*data = *data & (~CalculateByte);
}



void toggleBitNinByte( unsigned char* data, unsigned char bitN)
{
	unsigned char CalculateByte = ( 1 << (bitN-1));
	
	*data = *data ^ CalculateByte;
}



unsigned char BitNisSet( unsigned char data)
{
	
	
	
}











