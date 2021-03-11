#include <stdio.h>

int main(int argc, char *argv[] )
{

	//falls nicht 3 Argumente  --> hier hinein  Zeile 7-10
	if( argc != 3 ){
		//input is not valid
		printf("Usage:\n");
		printf("logicOperators Input1 Input2\n");
	}
	else
	
	{	
		// Input is valid  --> genau 3 Argumente erhalten
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
	return 0;
}	
