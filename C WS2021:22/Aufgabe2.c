/*
 * File: Aufgabe2.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-04-06, 3:40:18 pm
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-04-06, 5:12:26 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-04-06, 5:12:13 pm	H.K.	added comments
 * 2022-04-06, 3:40:18 pm	H.K.	-start-
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//  Laenge des Arrays
#define MAX 10

/*
*   Sortiert Array nach Groesse
*/
float* sortArr(float* arr) {
    float temp = 0;

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    return arr;
}

/*
*   Funktion zum ermittlen des Mittelwertes
*/
float ermWert(float* arr) {
    float alles;
    float mtlWert;

    for (int i = 0; i < MAX; i++) {
        alles = alles + arr[i];
    }
    
    mtlWert = alles / 10;

    return mtlWert;
}

int main() {
    srand(time(NULL));
    float* arrFloats;
    arrFloats = (float*)malloc(10 * sizeof(float));

    /*
    *   Befuellen des Arrays mit Float Werten
    *   Es wird eine Zahl zwischen 1 und 100 erzeugt und
    *   danach durch 10 geteilt damit ein Wert zw. 1 - 10
    *   erzeugt mit einer Nachkommastelle.
    */
    for (int i = 0; i < MAX; i++) {
        arrFloats[i] = ((rand() % 100) + 1);
        arrFloats[i] = arrFloats[i] / 10;
    }

    //  Sortieren
    arrFloats = sortArr(arrFloats);

    //  Printen
    for (int i = 0; i < MAX; i++) {
        printf("%d. %f\n",i+1, arrFloats[i]);
    }
    printf("Der Mittelwert: %f\n", ermWert(arrFloats));
    printf("Der kleinste Wert: %f\n", arrFloats[9]);
    printf("Der groesste Wer: %f\n", arrFloats[0]);

    return 0;
}







