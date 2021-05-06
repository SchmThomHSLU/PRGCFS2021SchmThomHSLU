#include "bitOps.h"
#include <stdio.h>




int main ( void)
{

	unsigned char Input1 = 0xD3;
	unsigned char BitNumber= 0;
	
	for ( int i = BitNumber ; i <= 8; i++)
	{
		
		if ((BitNumber == 2)||(BitNumber == 3)||(BitNumber == 5))
		{
		setBitNinByte( &Input1, BitNumber);
		//printf("Der wert von 0xD3 mit Bit %d auf 1 ist: %d.\n",BitNumber, Input1);
		}
	BitNumber= BitNumber +1;
	}
	BitNumber = 0;
	printf("Der wert von 0xD3 mit Bit 2,3 und5 auf 1 ist: %d.\n", Input1);

	
	
	unsigned char Input2 = 0xD3;
	
	for ( int i = BitNumber ; i <= 8; i++)
	{
		
		if ((BitNumber == 4)||(BitNumber == 6)||(BitNumber == 7))
		{
		clearBitNinByte( &Input2, BitNumber);
		//printf("Der wert von 0xD3 mit Bit %d auf 0 ist: %d.\n",BitNumber, Input2);
		}
	BitNumber= BitNumber +1;
	}
	BitNumber = 0;
	printf("Der wert von 0xD3 mit Bit 4,6 und 7 auf 0 ist: %d.\n", Input2);
	
	
	unsigned char Input3 = 0xD3;
	
	for ( int i = BitNumber ; i <= 8; i++)
	{
		
		if ((BitNumber == 1)||(BitNumber == 4)||(BitNumber == 6))
		{
		toggleBitNinByte( &Input3, BitNumber);
		//printf("Der wert von 0xD3 mit Bit %d gewechselt ist: %d.\n",BitNumber, Input3);
		}
	BitNumber= BitNumber +1;
	}
	BitNumber = 0;
	printf("Der wert von 0xD3 mit Bit 4,6 und 7 gewechselt ist: %d.\n", Input3);
	
	
	




	return 0;
}
















