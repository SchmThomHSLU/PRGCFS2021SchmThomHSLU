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


int main ()
{

	int my_n = 9;
	int my_k = 7;
	
	
	
	long binomialkoeff = nchoosek(my_n, my_k);
	
	
	printf("Der Binomialkoeffizient von %d tief %d ist %ld.\n", my_n , my_k , binomialkoeff);
	





	return 0;
}
