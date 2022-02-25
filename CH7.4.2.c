/*
 * File: CH7.4.2.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-25, 1:34:50 pm
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-25, 1:49:17 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-25, 1:49:12 pm	H.K.	added comments
 * 2022-02-25, 1:34:50 pm	H.K.	-start-
 */

#include <stdio.h>

// Variable zum Anpassen der Größe des Arrays
#define MAX 10

int main() {

    int i1[MAX];
    int temp = 0;
    int iSum[MAX];

    // For-Schleife zum befüllen des Arrays.
    for (int i = 0; i < MAX; i++) {
        i1[i] = i + 1;
    }

    // Die kummulative Summe.
    for (int i = 0; i < MAX; i++) {
        temp = temp + i1[i];
        iSum[i] = temp;
    }

    // Printen des Arrays.
    for (int i = 0; i < MAX; i++) {
        printf("%d\n", iSum[i]);
    }

    return 0;
}