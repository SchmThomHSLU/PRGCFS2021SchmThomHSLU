#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[] )
{

	//falls nicht 4 Argumente  --> hier hinein  Zeile 7-10
	if( argc != 4 )
	{
		//input is not valid
		printf("Usage:\n");
		printf("logicOperators Input1 Input2 Input3\n");
	}
	else
	
	{	
		// Input is valid  --> genau 1+3 Argumente erhalten
		int val1 = atoi(argv[1]); 
		int val2 = atoi(argv[2]); 
		int val3 = atoi(argv[3]); 
		int sum = 0;
		float avg = 0.0f;
		
		printf("%d, %d, %d\n", val1, val2, val3);
		
		
		// find the greatest
		if( !(val1 > 0) || !(val2 > 0) || !(val3 > 0))
		{
			// Fehlerfall
			printf("All inputs must be strictly greater than zero.\n");
		}
		else
		{
			if(val1 >= val2 )
			{
				if( val1 >= val3 )
				{
					// val1 is the greatest
					printf("%d is the greatest\n", val1);
				}
				else
				{
					// val3 is the gratest
					printf("%d is the greatest\n", val3);
				}
			}
			else
			{
				if( val2 >= val3 )
				{
					// val2 is the greatest
					printf("%d is the greatest\n", val2);
				}
				else
				{
					// val3 is the gratest
					printf("%d is the greatest\n", val3);
				}
			}
		
			// find the smalest
			if(val1 <= val2 && val1 <= val3)
			{
			 printf("%d is the smallest\n", val1);
			}
			else if(val2 <= val1 && val2 <= val3)
			{
			 printf("%d is the smallest\n", val2);
			}
			else
			{
			 printf("%d is the smallest\n", val3);
			}
			
			//summe of al values
			sum = (val1 + val2 + val3);
			printf("The sum is: %d\n", sum );
			
			//average of all values
			avg = (float)sum/3;
			printf("The average is: %.2f\n", avg );
		}
	}
	
	
		
#if 0		//auskommentieren mit Präprozessor		
		
		
		printf("Number of input arguments: %d\n", argc );	//Anzahl args. printen
	
	//Die drei Elemente in der For-Loop Deklaration:
	//----------------------------------------	
	//nimm eine Variable i und starte mit 0.
	//führe folgenden Code aus, solange i<argc.
	//inkrementiere i bei jedem Durchlauf um 1 (++).
	
	for( int i =0; i < argc; i++ )
	{
		printf("Argument %d was %s\n", i,  argv[i]);
		
		// argv:	- ./logicOperators
		// 		- 23
		//		- 12cd ..ge
	}
}
#endif
	
	return 0;
}	
