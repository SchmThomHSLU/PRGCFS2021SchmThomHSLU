#include <stdio.h>





int main ()
{
	float EingabeZahl =0.0;
	char ShiftRichtung;
	char linksShift = 76;
	char rechtsShift = 82;
	int Anzahlshift =0;
	int Resultat = 0;

	printf("Gib eine Zahl ein:\n");
	scanf("%f", &EingabeZahl);

	if (EingabeZahl == (int) EingabeZahl)
		{
			
			printf("Die Zahl ist %.2f.\n", EingabeZahl);
			
			printf("Gib für linksshift ein L und für rechtsshift ein R ein:\n");
			scanf(" %c", &ShiftRichtung);
			
			printf("Gib die Anzahl Positionen an:\n");
			scanf(" %d", &Anzahlshift);
			
			if (ShiftRichtung == linksShift)
			{
			Resultat = (int) EingabeZahl << Anzahlshift;
			
			printf("%f bitweise nach %d geschoben ergibt: %d.\n", EingabeZahl, ShiftRichtung, Resultat);
			}
			else if (ShiftRichtung == rechtsShift)
			{
			Resultat = (int) EingabeZahl >> Anzahlshift;
			
			printf("%f bitweise nach %d geschoben ergibt: %d.\n", EingabeZahl, ShiftRichtung, Resultat);
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
