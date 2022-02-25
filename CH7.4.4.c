/*
 * File: CH7.4.4.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-25, 2:10:58 pm
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-25, 2:29:52 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-25, 2:10:58 pm	H.K.	-start-
 */

#include <stdio.h>

// Variable zum Anpassen der Größe des Arrays
#define MAX 10

void printArr(int arr[]) {
    for (int i = 0; i < MAX; i++) {
        printf("%d\n", arr[i]);
    }
}

void summeBerechnen(int* arrI1, int* arrSum) {
    int temp = 0;
    for (int i = 0; i < MAX; i++) {
        temp = temp + arrI1[i];
        arrSum[i] = temp;
    }
}

int main() {

    int i1[MAX];
    //int temp = 0;
    int iSum[MAX];

    // For-Schleife zum befüllen des Arrays.
    for (int i = 0; i < MAX; i++) {
        i1[i] = i + 1;
    }

    summeBerechnen(i1, iSum);
    
    printArr(iSum);

    return 0;
}