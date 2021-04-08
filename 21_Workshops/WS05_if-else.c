#include <stdio.h>


int main ()
{

	//Aufgabe1
	printf("Aufgabe 1:\n");
	int start = 1;
	int end = 500;
	
	for( int i = start; i <= end; i++)
	{
	
		if((i % 19) == 0)
		{
		printf("%d\n",i);
		}
	
	}

	//Aufgabe 2
	printf("Aufgabe 2:\n");
	for( int i = 1; i <= 200; i++)
	{
	
		if((i % 7) == 0 & (i % 11) == 0 )
		{
		printf("7 and 11: %d\n",i);
		
		}
		
		if( (i % 17) == 0)
		{
		printf("17: %d\n",i);
		}
	
	}
	
	
	//Aufgabe 3
	printf("Aufgabe 3:\n");
	for( int i = 1; i <= 200; i++)
	{
	
		if((i % 11) == 0 )
		{
			if((i % 7) == 0 )
			{
			printf("11 and 7: %d\n",i);
			}
			
		
		printf("11 but not 7: %d\n",i);
		
		}
	}

















	return 0;
}



