/*
 * File: CH9.6.3.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-01-24, 2:08:17 am
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-24, 1:34:52 am
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 10

int main() {

    const char* ptrstrNamen[MAX];
    int cmpVal;
    char temp[MAX];

    ptrstrNamen[0] = "Peter";
    ptrstrNamen[1] = "Paul";
    ptrstrNamen[2] = "Mary";
    ptrstrNamen[3] = "Puff";
    ptrstrNamen[4] = "Magic";
    ptrstrNamen[5] = "Dragon";

    for (int i = 0; i < MAX; i++) {
        cmpVal = strcmp(ptrstrNamen[i], ptrstrNamen[i + 1]);
        if (cmpVal > 0) {
            strcpy(temp, ptrstrNamen[i]);
            ptrstrNamen[i + 1] = ptrstrNamen[i];
            ptrstrNamen[i] = temp;
        }

    }

    for (int i = 0; i < MAX; i++) {
        printf("%s\n", ptrstrNamen[i]);
    }


    return 0;
}
