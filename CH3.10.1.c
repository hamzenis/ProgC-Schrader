/*
 * File: CH3.10.1.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-26, 3:37:54 pm
 * Author: Jakob Hermanowski
 * -----
 * Last Modified: 2022-02-26, 3:39:59 pm
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