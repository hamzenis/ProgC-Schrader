/*
 * File: Aufgabe 1.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-03-22, 12:29:04 am
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-03-22, 2:08:13 am
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-03-22, 12:29:04 am	H.K.	-start-
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//noch in Bearbeitung

#define MAX 100

/*
*  return 1: Wenn das Wort ein Palindrom ist
*/
int isPalin(char* sString) {
    int sLange = strlen(sString);
    int sCount = 0;
    int hLange = sLange / 2;

    if (sLange % 2 == 0) {
        for (int i = 0; i < hLange; i++) {
            if (sString[i] == sString[sLange - i]) {
                sCount++;
            }
        }
        if (sCount == hLange) return 1;
    }
    else {
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

int main() {

    char* sEingabe = (char*)malloc(MAX * sizeof(char));

    printf("Geben Sie einen String ein: \n");
    scanf("%s", sEingabe);

    int test = isPalin(sEingabe);
    printf("%s %d %d %c\n", sEingabe, test, strlen(sEingabe), sEingabe[1]);

    return 0;
}