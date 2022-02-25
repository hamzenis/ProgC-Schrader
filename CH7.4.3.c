/*
 * File: CH7.4.3.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-01-02, 5:08:49 pm
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-25, 3:17:01 am
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-23, 12:54:39 pm	H.K.	added comments
 * 2022-01-02, 5:08:49 pm	H.K.	-start-
 */

#include <stdio.h>
#include <stdlib.h>

// Größe des Arrays
#define ANZAHL 10

/*
*  Eine verschachtelte For-Schleife, die das Array durchläuft.
*  Die äußere For-Schleife i läuft das Array 1-mal durch, währrend das Array
*  von der inneren For-Schleife j komplett durchgegangen wird, so oft
*  bis die äußere For-Schleife ihr Limit erreicht hat.
*/
void sort(int ieingaben[]) {
    for (int i = 0; i < ANZAHL; i++) {
        for (int j = i; j < ANZAHL; j++) {
            /*
            *  Wenn die aktuelle Zahl an der Stelle i größer sein sollte als die
            *  aktuelle Zahl an der Stelle j, wird die Zahl in j in einer temporären
            *  Variable temp zwischengespeichert, i tauscht den Platz mit j und
            *  an der Stelle wo i war wird die zwischengespeicherte Zahl in temp 
            *  gesichert.
            */
            if (ieingaben[i] > ieingaben[j]) {
                int temp = ieingaben[j];
                ieingaben[j] = ieingaben[i];
                ieingaben[i] = temp;
            }
        }
    }
}

/*
*   Funktion zum printen der Eingabewerte
*/
void printEingaben(int ieingaben[]) {
    for (int i = 0; i < ANZAHL; i++) {
        printf("%d.Eingabe %d \n", i + 1, ieingaben[i]);
    }
}

/*
*   Funktion zum printen der sortierten Werte 
*/
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
