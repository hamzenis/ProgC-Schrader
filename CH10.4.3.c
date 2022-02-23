/*
 * File: CH10.4.3.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-01-23, 4:58:10 pm
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-23, 2:14:25 pm
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
 * 2022-01-23, 4:58:10 pm	H.K.	-start-
 */

/*
* String aneinanderfügen.
* Schreiben Sie ein Programm, dass nacheinander 
* zwei Strings string1 und string2 einliest 
* und in allozierten passgenauen Speicherbereichen ablegt. 
* Fügen Sie dann string2 an string1 an,
* so dass der Inhalt beider Strings in string1 steht. 
* Geben Sie String1 aus.
*/

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

    /*
    * alter Code zum Zählen eines Strings
    *
    * while (pString1[iZaehler1] != 0) {
    *     iZaehler1++;
    * }
    * while (pString2[iZaehler2] != 0) {
    *     iZaehler2++;
    * }
    */

    // Neuer Code zum zählen eines Strings
    iZaehler1 = strlen(pString1);
    iZaehler2 = strlen(pString2);

    pString1 = (char*)realloc(pString1, iZaehler1 * sizeof(char));
    pString2 = (char*)realloc(pString2, iZaehler2 * sizeof(char));

    pString1 = (char*)realloc(pString1, (iZaehler1 + iZaehler2) * sizeof(char));

    strcat(pString1, pString2);
    printf("Ihr zusammengesetzer Char Pointer: %s Größe: %lu\n", pString1, sizeof(pString1) * (iZaehler2 + iZaehler1));


    return 0;
}
