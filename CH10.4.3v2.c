/*
 * File: CH10.4.3v2.c
 * Project: Einführung in C
 * Created Date: 2022-01-23, 4:58:10 pm
 * Author: Hamzenis Kryeziu
 * -----
 * Last Modified: 2022-01-24, 5:58:58 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-01-24, 5:57:17 pm	H.K.	Stringlänge mit anderer Funktion ersetzt
 */



 // 10.4.3. String aneinanderfügen
 // Schreiben Sie ein Programm, dass nacheinander 
 //zwei Strings string1 und string2 ein- liest und in allozierten passgenauen Speicherbereichen ablegt. 
 //Fügen Sie dann string2 an string1 an, so dass der Inhalt beider Strings in string1 steht. 
 //Geben Sie String1 aus.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 80

int main() {

    char* pString1 = (char*)calloc(MAX, sizeof(char));
    char* pString2 = (char*)calloc(MAX, sizeof(char));
    int iZaehler1 = 0;
    int iZaehler2 = 0;


    printf("Ihren 1.String eingeben: ");
    scanf("%s", pString1);

    printf("Ihren 2.String eingeben: ");
    scanf("%s", pString2);

    // alter Code zum Zählen eines strings
    // while (pString1[iZaehler1] != 0) {
    //     iZaehler1++;
    // }
    // while (pString2[iZaehler2] != 0) {
    //     iZaehler2++;
    // }

    //Neue Code zum zählen eines Strings
    iZaehler1 = strlen(pString1);
    iZaehler2 = strlen(pString2);

    //debug
    //printf("Länge von pSt1: %d %d\n", iZaehler1, iZaehler2);

    pString1 = (char*)realloc(pString1, iZaehler1 * sizeof(char));
    pString2 = (char*)realloc(pString2, iZaehler2 * sizeof(char));


    //debug
    //printf("Debug: %d %d %s %s\n", iZaehler1, iZaehler2, pString1, pString2);

    pString1 = (char*)realloc(pString1, (iZaehler1 + iZaehler2) * sizeof(char));

    strcat(pString1, pString2);

    printf("Ihr zusammengesetzer Char Pointer: %s Größe: %lu\n", pString1, sizeof(pString1) * (iZaehler2 + iZaehler1));


    return 0;
}
