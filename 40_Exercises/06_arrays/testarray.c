#include <stdio.h>


#define ARRAY_LENGTH 6


void printArray(int *myArray, int arraylength){

	for(int i = 0; i< arraylength; i++)
	{
		printf("%d\n", myArray[i]);
	}
	printf("finished.\n");
}	
	
int main(int argc, char *argv[])
{	
	//fill array with all 0
	
	int intarray[ARRAY_LENGTH] = {0};
	
	
	// print array
	printArray(intarray, ARRAY_LENGTH);
	
	
	// fill indices into array
	for(int i =0; i < ARRAY_LENGTH; i++)
	{
	intarray[i] = i;
	
	}
	
	// print array  new 
	printArray(intarray, ARRAY_LENGTH);

















	return 0;
}
