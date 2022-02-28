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
* 2022-02-28, 1:08:26 am	H.K.	added comments
* 2022-02-26, 11:30:10 pm	I.H.
* 2022-02-26, 3:37:54 pm	J.H.	-start-
*/

/*
3.10.1. Umsatzberechnung
Schreiben Sie ein Programm, das den Anwender auffordert, die Anzahl und den Preis
einer verkauften Ware einzugeben, um dann den Umsatz nach der Formel:
fTotalUmsatz = fPreis * iAnzahl
zu berechnen, und anschliessenden den damit erzielten Umsatz auszugeben.
*/

#include <stdio.h>

float umsatz(int* anzahl, float* preis) {
    return (*preis) * (*anzahl);
}

int main() {
    int anzahl = 0;
    float preis = 0.0;

    printf("--Umsatzrechner--\n");
    printf("Geben Sie Anzahl ihrer Ware und den Preis in Format \"Anzahl Preis\" an.\n");
    scanf("%d %f", &anzahl, &preis);

    printf("Erzielter Umsatz: %.2f €\n", umsatz(&anzahl, &preis));

    return 0;
}
