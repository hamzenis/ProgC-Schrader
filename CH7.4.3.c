/*
 * File: CH7.4.3.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-01-02, 5:08:49 pm
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-20, 7:48:02 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-01-02, 5:08:49 pm	H.K.	-start-
 */


#include <stdio.h>
#include <stdlib.h>

//Größe des Arrays
#define ANZAHL 10

void sort(int ieingaben[]) {
    for (int i = 0; i < ANZAHL; i++) {
        for (int j = i; j < ANZAHL; j++) {
            if (ieingaben[i] > ieingaben[j]) {
                int temp = ieingaben[j];
                ieingaben[j] = ieingaben[i];
                ieingaben[i] = temp;
            }
        }
    }
}


void printEingaben(int ieingaben[]) {
    for (int i = 0; i < ANZAHL; i++) {
        printf("%d.Eingabe %d \n", i + 1, ieingaben[i]);
    }
}

void printSort(int ieingaben[]) {
    for (int i = 0; i < ANZAHL; i++) {
        printf("%d.Sortiert %d \n", i + 1, ieingaben[i]);
    }
}

int main() {
    int ieingaben[ANZAHL], i;

    //Werte einlesen
    for (i = 0; i < ANZAHL; i++) {
        printf("%d.Element: ", i + 1);

        scanf("%d", &ieingaben[i]);
    }

    sort(ieingaben);
    printSort(ieingaben);

    return 0;
}
