/*
 * File: CH11.5.3.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-01-18, 5:27:34 pm
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-25, 4:56:33 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-25, 4:56:29 pm	H.K.	added comments
 * 2022-01-18, 5:27:34 pm	H.K.	-start-
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE* fp;
    char sVName[50], sNName[50];
    char str[80];

    fp = fopen("name.dat", "a+");

    // Wenn das öffnen der Datei fehlschlägt, wird das Programm beendet.
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    /*
    *   Position des Seekers wird wieder an den Anfang der Datei gesetzt.
    *   Es kann auch fopen() auf r gesetzt werden, 
    *   dann muss fseek() nicht verwendet werden.
    */
    fseek(fp, 0, SEEK_SET);

    // Ausgabe der Datei
    while (fgets(str, 80, fp) != NULL) {
        printf("%s\n", str);

    }

    /*
    *  Einen weiteren Namen einspeichern.
    */
    printf("Geben Sie einen weitere Vornamen ein :\n");
    scanf("%s", sVName);
    printf("Geben Sie einen weitere Nachname ein :\n");
    scanf("%s", sNName);
    fprintf(fp, "\n%s %s", sVName, sNName);

    // Schließen der Datei.
    fclose(fp);

    return 0;
}
