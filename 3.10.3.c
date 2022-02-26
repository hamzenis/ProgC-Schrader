#include<stdio.h>

int main()
{
	//variablen erstellen
	float fKg, fHeight, fBmi;

	//Werte einlesen
	printf("Bitte Gewicht eingeben: ");
	scanf("%f", &fKg);
	printf("/nBitte Groeße eingeben: ");
	scanf("%f", &fHeight);
	
	//bmi errechnen
	fBmi = fKg/(2*fHeight);

	//Bmi ausgeben
	printf("/nBMI: %f",fBmi);

	return 0;
}

