
//Systems Includes

#include <stdio.h>


//Local Includes
#include "greetings.h"


/*globale Variable*/
int greetingsCounter = 0;


/*lokale Variable*/
int localCounter = 24;

//Implementations
void SayHello(void)
{
	printf("Hello!\n");
	greetingsCounter++;
}

void SayGoodBye(void)
{
	printf("GoodBye!\n");
	greetingsCounter++;
}
