/*
3.10.3. Body Mass Index
Schreiben Sie ein Programm, dass zun¨achst das K¨orpergewicht und die Gr¨oe einer Person
abfragt, um dann den Body Mass Index zu berechnen und auszugeben.

        Formel: Körpergewicht (in kg) geteilt durch Körpergröße (in m) zum Quadrat.
*/
#include <stdio.h>


float bmi(float* gewicht,float* groesse)
{
    return (*gewicht)/( (*groesse)*(*groesse));
}

int main()
{
    float gewicht, groesse, bmiwert;

    printf("--BMI-Rechner--\n");

    printf("Gewicht(in kg) , Groesse eingeben(in m)\n");

    scanf("%f %f", &gewicht , &groesse);

    bmiwert = bmi(&gewicht, &groesse);
    printf("Ihr bmiwert: %.2f\n", bmiwert);

    if(bmiwert >= 40)
        printf("Adipositas Grad III\n");
    else if(bmiwert >= 35)
        printf("Adipositas Grad II\n");
    else if(bmiwert >= 30)
        printf("Adipositas Grad I\n");
    else if(bmiwert >= 25)
        printf("Übergewicht\n");
    else if(bmiwert >= 18.5)
        printf("Normalgewicht\n");
    else
        printf("Untergewicht");
    return 0;
}
