#include <stdio.h>





int main ()
{
	float EingabeZahl =0.0;
	char ShiftRichtung;
	char linksShift = 'L';
	char rechtsShift = 'R';
	int Anzahlshift =0;
	int Resultat = 0;

	printf("Gib eine Zahl ein:\n");
	scanf("%f", &EingabeZahl);

	if (EingabeZahl == (int) EingabeZahl)
		{
			
			printf("Die Zahl ist %.2f.\n", EingabeZahl);
			
			printf("Gib für linksshift 'L' und für rechtsshift 'R' ein:\n");
			scanf(" %c", &ShiftRichtung);
			
			
			
			if (ShiftRichtung == linksShift)
			{
			printf("Gib die Anzahl Positionen an:\n");
			scanf(" %d", &Anzahlshift);
			
			Resultat = (int) EingabeZahl << Anzahlshift;
			
			printf("%f bitweise nach %c geschoben ergibt: %d.\n", EingabeZahl, ShiftRichtung, Resultat);
			}
			else if (ShiftRichtung == rechtsShift)
			{
			printf("Gib die Anzahl Positionen an:\n");
			scanf(" %d", &Anzahlshift);
			
			Resultat = (int) EingabeZahl >> Anzahlshift;
			
			printf("%f bitweise nach %c geschoben ergibt: %d.\n", EingabeZahl, ShiftRichtung, Resultat);
			}
			else 
			{
			printf("Die Eingabe ist ungültig.\n");
			}
		}
	else		


	

	printf("Die Eingabe ist ungültig, gib eine ganzzahlige Zahl ein!\n");








return 0;
}
