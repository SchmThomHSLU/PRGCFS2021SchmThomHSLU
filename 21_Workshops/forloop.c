#include <stdio.h>


int main()  
{
	int sum = 0;
	int start = 0;
	int end = 10;

	for( int i = start; i <= end; i= i+2)
	{
		sum = sum +i;
	}

	printf("The sum fron %d to %d is equal to %d.\n", start, end, sum);
	
	
	printf("\n");
	//Aufgabe 3
	printf("Aufgbe 3:\n");
	
	int start3 =40;
	int end3 =25;
	
	for( int k = start3; k >= end3; k--)
	{
		printf("%d\n",k);
	}
	
	
	printf("\n");
	//Aufgbe 4
	printf("Aufgbe 4:\n");
	
	float num = 3;
	int start4 = 1;
	int end4 =729;
	
	for( int j = start4; j <= end4; )
	{
		printf("%d\n",j);
		j = j*3;
	}
	
	printf("\n");
	//Aufgabe 5
	printf("Aufgbe 5:\n");
	
	for( int n = 0; n <= 9; n++)
	{
		for(int m = 1; m <= 10; m++)
		{
		printf("%d ",10*n+m);
		}
	
	printf("\n");
	}
	
	
	printf("\n");
	//Aufgabe 6
	printf("Aufgbe 6:\n");
	
	sum = 0;
	
	for( int i = 1; i <= 1000; i++)
	{
		sum = sum+i;
		
		if( sum >= 555 )
		{	
		printf("With max. sum of 555, the integers from 1 to %d sum to %d.\n", i, sum);
		break;
		}
		
	}










return 0;
}













