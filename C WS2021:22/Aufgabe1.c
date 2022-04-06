/*
 * File: Aufgabe 1.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-03-22, 12:29:04 am
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-04-06, 3:33:53 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-04-06, 3:32:39 pm	H.K.	fixed upper/lower case character problem
 * 2022-03-24, 2:56:41 am	H.K.	added comments
 * 2022-03-24, 2:56:22 am	H.K.	added isPalin() function
 * 2022-03-22, 12:29:04 am	H.K.	-start-
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 100

/*
*  return 1: Wenn das Wort ein Palindrom ist
*/
int isPalin(char* sString) {
    int sLange = strlen(sString);
    int sCount = 0;
    int hLange = sLange / 2;

    /*
    *   Eine For-Schleife damit das Wort in Kleinbuchstaben umgewandelt wird.
    */
    for (int i = 0; i < sLange; i++) {
        sString[i] = tolower(sString[i]);
    }

    /*
    *   Für gerade Wörter.
    */
    if (sLange % 2 == 0) {
        for (int i = 0; i < hLange; i++) {
            if (sString[i] == sString[sLange - 1 - i]) {
                sCount++;
            }
        }
        if (sCount == hLange) return 1;
    }
    /*
    *   Für ungerade Wörter.
    *   0 1 -2- 3 4
    *   wenn 0==4 & 1==3, dann wird true ausgegeben,
    *   die mittige Zahl 2 muss nicht überprüft werden.
    */
    else if (sLange % 2 == 1) {
        sLange--;
        for (int i = 0; i < hLange; i++) {
            if (sString[i] == sString[sLange - i]) {
                sCount++;
            }
        }
        if (sCount == hLange) return 1;
    }
    return 0;
}

//Testwörter: Lagerregal, madam, racecar, Reittier
int main() {

    char* sEingabe = (char*)malloc(MAX * sizeof(char));
    int iPalindrom;

    printf("Geben Sie einen String ein: ");
    scanf("%s", sEingabe);

    iPalindrom = isPalin(sEingabe);
    if (iPalindrom == 1) printf("Das Eingebene Wort %s ist ein Palindrom\n", sEingabe);
    if (iPalindrom == 0) printf("Das Eingebene Wort %s ist kein Palindrom\n", sEingabe);

    return 0;
}