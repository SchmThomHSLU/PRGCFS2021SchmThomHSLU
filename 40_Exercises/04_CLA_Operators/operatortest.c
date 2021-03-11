#include <stdio.h>


int main (int argc, char *argv[] )
{

	short largeshort = 32760;
	printf("%d\n", largeshort);
	
	largeshort = largeshort +12345;
	printf("after adding: %d\n", largeshort);

	int numerator = 19, denominator = 5;
	float result;
	result = (float)numerator/denominator;
	
	
	printf("%d devided by %d = %0.2f\n", numerator, denominator, result);

	
	float e = 2.718281828f;
	printf("after init: %f\n", e);

	e++;
	printf("after increment: %f\n", e);
	e--;
	printf("after decrement: %f\n", e);

	double dblNumber =12.8;
	printf("after init: %f\n", dblNumber);
	// dblNumber = dblNumber % 3;		Befehl Modulo auf double Zahlen geht nicht!
	

	return 0;
}
