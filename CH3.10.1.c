#include<stdio.h>


int main()
{
	//variablen erstellen
	int iAnzahl;
	float fTotalUmsatz, fPreis;
	
	//werte abfragen
	printf("Bitte den Einzelpreis angeben: ");
	scanf("%f",&fPreis);
	printf("Bitte die Menge angeben: ");
	scanf("%i",&iAnzahl);

	//Umsatz ausgeben
	printf("/n Umsatz:%.2f€",iAnzahl*fPreis);

	return 0;
}


