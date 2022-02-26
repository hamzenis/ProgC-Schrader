/*
 * File: CH3.10.3.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-26, 3:37:54 pm
 * Author: Jakob Hermanowski
 * -----
 * Last Modified: 2022-02-26, 3:42:46 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-26, 3:37:54 pm	H.K.	-start-
 */

#include<stdio.h>

int main()
{
	//variablen erstellen
	float fKg, fHeight, fBmi;

	//Werte einlesen
	printf("Bitte Gewicht eingeben: ");
	scanf("%f", &fKg);
	printf("\nBitte Groeße eingeben: ");
	scanf("%f", &fHeight);
	
	//bmi errechnen
	fBmi = fKg/(2*fHeight);

	//Bmi ausgeben
	printf("\nBMI: %f",fBmi);

	return 0;
}

