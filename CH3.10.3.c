/*
* File: CH3.10.1.c
* Project: Einführung in C - Schrader
* Created Date: 2022-02-26, 3:37:54 pm
* Author: Ibrahim Hayber & Jakob Hermanowski
* -----
* Last Modified: 2022-02-27, 0:50:00 pm
* Modified By: Hamzenis Kryeziu
* -----
* Copyright (c) 2022
*
* Free for use
* -----
* HISTORY:
* Date              		By		Comments
* ------------------		----	----------------------------------------------------------
* 2022-02-28, 1:09:50 am	H.K.	added comments
* 2022-02-26, 11:30:10 pm	I.H.	
* 2022-02-26, 3:37:54 pm	J.H.	-start-
*/

/*
3.10.3. Body Mass Index
Schreiben Sie ein Programm, dass zunaechst das Koerpergewicht und die Groeße einer Person
abfragt, um dann den Body Mass Index zu berechnen und auszugeben.
Formel: Koerpergewicht (in kg) geteilt durch Koerpergröße (in m) zum Quadrat.
*/

#include <stdio.h>

float bmi(float* gewicht, float* groesse) 
{
    return (*gewicht) / ((*groesse) * (*groesse));
}

int main() 
{
    float gewicht, groesse, bmiwert;

    printf("--BMI-Rechner--\n");

    printf("Gewicht(in kg) , Groesse eingeben(in m)\n");

    scanf("%f %f", &gewicht, &groesse);

    bmiwert = bmi(&gewicht, &groesse);
    printf("Ihr bmiwert: %.2f\n", bmiwert);

    if (bmiwert >= 40)
        printf("Adipositas Grad III\n");
    else if (bmiwert >= 35)
        printf("Adipositas Grad II\n");
    else if (bmiwert >= 30)
        printf("Adipositas Grad I\n");
    else if (bmiwert >= 25)
        printf("Übergewicht\n");
    else if (bmiwert >= 18.5)
        printf("Normalgewicht\n");
    else
        printf("Untergewicht");


    return 0;
}
