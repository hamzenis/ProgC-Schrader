/*
 * File: CH9.6.2.c
 * Project: Einführung in C
 * Created Date: 2022-01-25, 12:04:36 am
 * Author: Hamzenis Kryeziu
 * -----
 * Last Modified: 2022-01-27, 1:17:43 am
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-01-27, 1:17:36 am	H.K.	-end v2.0-
 * 2022-01-25, 1:58:48 am	H.K.	Erweiterung um selbst Text einzugeben
 * 2022-01-25, 1:50:51 am	H.K.	Code verkleinert
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 800

 //ASCII  Values werden von kleinenen Buchstaben (Dez. Zahlen zw. 97 und 122) 
 //um 32 verringert um zu den großen Buchstaben (Dez. Zahlen zw. 65 und 90) zu kommen
void myToUpper(char* p1) {
    while (*p1 != 0) {
        if (*p1 >= 97 && *p1 <= 122) {
            *p1 -= 32;
        }
        p1++;
    }
}

int main() {

    char sAufgabenString[] = "Diese Zeichenkette soll in Grossbuchstaben ausgegeben werden.";
    char* ptrString = sAufgabenString;
    char sEingabenString[MAX];

    printf("%s\n", ptrString);

    myToUpper(ptrString);

    printf("%s\n", ptrString);

    //Erweiterung
    printf("Geben Sie einen String ein: (Max. 100 Zeichen)\n");
    fgets(sEingabenString, MAX, stdin);
    ptrString = sEingabenString;
    myToUpper(ptrString);
    printf("%s\n", ptrString);


    return 0;
}
