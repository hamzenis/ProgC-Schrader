/*
 * File: CH3.10.2.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-26, 3:37:54 pm
 * Author: Jakob Hermanowski
 * -----
 * Last Modified: 2022-02-26, 3:41:36 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-26, 3:37:54 pm	J.H.	-start-
 */

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

