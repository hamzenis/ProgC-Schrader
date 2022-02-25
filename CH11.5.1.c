/*
 * File: CH11.5.1.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-01-18, 4:00:34 pm
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-25, 4:09:24 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-25, 4:08:12 pm	H.K.	added comments
 * 2022-01-18, 4:00:34 pm	H.K.	-start-
 */

#include <stdio.h>
#include <stdlib.h>

// Anzahl der Personen, die geschrieben werden sollen.
#define MAX 5

int main() {

    FILE* fp;
    char sVName[50], sNName[50];

    /*
    *   a+, damit falls keine Datei existiert eine erstellt wird und 
    *   nur angehängt werden soll und die vorhanden Namen nicht modifiert werden.
    */
    fp = fopen("name.dat", "a+");

    // Wenn das öffnen der Datei fehlschlägt, wird das Programm beendet.
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    for (int i = 0; i < MAX; i++) {
        printf("Geben Sie den Vornamen der %d.Person ein: \n", i + 1);
        scanf("%s", sVName);
        printf("Geben Sie den Nachnamen der %d.Person ein: \n", i + 1);
        scanf("%s", sNName);
        fprintf(fp, "%s %s\n", sVName, sNName);
    }

    // Schließen der Datei.
    fclose(fp);

    return 0;
}
