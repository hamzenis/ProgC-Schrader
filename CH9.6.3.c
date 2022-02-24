/*
 * File: CH9.6.3.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-01-24, 2:08:17 am
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-24, 2:18:22 am
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-01-24, 2:08:17 am	H.K.	-start-
 */

// noch nicht fertig

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Anzahl und Länge der Variablen.
#define STRINGS 6
#define MAX 10

int main() {

    const char* ptrstrNamen[STRINGS];
    int cmpVal;
    char temp[MAX];

    /*
    *  Variable damit die Länge des Arrays errechnet. 
    */
    int arrSize = sizeof(ptrstrNamen) / sizeof(ptrstrNamen[0]);

    // Variablen Values
    ptrstrNamen[0] = "Peter";
    ptrstrNamen[1] = "Paul";
    ptrstrNamen[2] = "Mary";
    ptrstrNamen[3] = "Puff";
    ptrstrNamen[4] = "Magic";
    ptrstrNamen[5] = "Dragon";
  
    // 
    for (int i = 0; i < arrSize - 1; i++) {
        cmpVal = strcmp(ptrstrNamen[i], ptrstrNamen[i + 1]);
        printf("%d\n", cmpVal);
        if (cmpVal > 0) {
            strcpy(temp, ptrstrNamen[i+1]);
            ptrstrNamen[i + 1] = ptrstrNamen[i];
            ptrstrNamen[i] = temp;
        }
    }

    // Print Funktion
    for (int i = 0; i < arrSize; i++) {
        printf("%d.%s\n", i+1, ptrstrNamen[i]);

    }

    return 0;
}
