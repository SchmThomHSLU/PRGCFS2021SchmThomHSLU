#include <stdio.h>

//Fakultät berechnen
long n_factorial(int n)
{
	if( n>=1)
		return n*n_factorial(n-1);
			
	else
		return 1;
}
	

//Binomialkoeffizient aus einzelnen Fakultäten berechnen
long nchoosek(int n, int k)
{
	long nchoosek_result = 0;
	nchoosek_result = ((n_factorial(n))/(n_factorial(k)*n_factorial(n-k)));
	return nchoosek_result;
}


//Funktion Deklarieren
float ComputeCircleArea(float radius, float *area);



int main ()
{
	int my_n;
	printf("Gib die anzahl n Elemente an:");
	scanf( "%d", &my_n);
	int my_k;
	printf("Gib die anzahl k Elemente an:");
	scanf( "%d", &my_k);
	
	
	long binomialkoeff = nchoosek(my_n, my_k);
	
	
	printf("Der Binomialkoeffizient von %d tief %d ist %ld.\n", my_n , my_k , binomialkoeff);
	

	float myRadius = 4.545;
	float area = 0.0f;
	ComputeCircleArea(myRadius, &area);
	printf("Die Fläche der Kreises mit Radius %f beträgt: %f.\n", myRadius,area);



	return 0;
}


//Funktion implementieren
float ComputeCircleArea(float radius, float *area)
{
return *area = radius * radius * 3.141596535;
}

