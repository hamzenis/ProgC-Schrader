/*
 * File: CH9.6.1.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-01-25, 2:41:19 am
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-23, 1:15:36 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-23, 1:15:05 pm	H.K.	added comments
 * 2022-01-25, 2:41:19 am	H.K.	-start-
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char sAufgabenString[] = "Diese Zeichenkette soll in Grossbuchstaben ausgegeben werden.";

    printf("%s\n", sAufgabenString);

    //Mit klassischer toupper() Methode
    for (int i = 0; i <= strlen(sAufgabenString); i++) {
        sAufgabenString[i] = toupper(sAufgabenString[i]);
    }

    printf("%s\n", sAufgabenString);

    return 0;
}
