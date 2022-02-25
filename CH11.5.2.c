/*
 * File: CH11.5.2.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-01-18, 4:31:37 pm
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-25, 4:19:05 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-25, 4:19:00 pm	H.K.	added comments
 * 2022-01-24, 4:47:16 pm	H.K.	cleaned variables
 * 2022-01-18, 4:31:37 pm	H.K.	-start-
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE* fp;
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

    while (fgets(str, 80, fp) != NULL) {
        printf("%s\n", str);
    }

    // Schließen der Datei.
    fclose(fp);

    return 0;
}
