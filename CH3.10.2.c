#include<stdio.h>


int main()
{
	//variablen erstellen
	int iAnzahl;
	float fTotalUmsatz, fPreis, fEinkaufsWert;

	//werte abfragen
	printf("Bitte den Einzelpreis angeben: ");
	scanf("%f",&fPreis);
	printf("Bitte die Menge angeben: ");
	scanf("%i",&iAnzahl);
	printf("Geben sie den Einzeleinkaufswert an: ");
	scanf("%f", &fEinkaufsWert);
	
	//berechnung der Umsatzes, und direkte ausgabe
	//fTotalUmsatz = (iAnzahl*fPreis)-(iAnzahl*fEinkaufsWert);
	//so könnte man es in einzelschritten machen.
	printf("/n Gewinn:%.2f€",(iAnzahl*fPreis)-(iAnzahl*fEinkaufsWert));

	return 0;
}

