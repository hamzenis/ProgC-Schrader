/*
 * File: CH9.6.1.c
 * Project: Einführung in C
 * Created Date: 2022-01-25, 2:41:19 am
 * Author: Hamzenis Kryeziu
 * -----
 * Last Modified: 2022-01-27, 1:15:57 am
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-01-27, 1:15:29 am	H.K.	-end V1.0-
 * 2022-01-25, 2:41:19 am	H.K.	-start-
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char sAufgabenString[] = "Diese Zeichenkette soll in Grossbuchstaben ausgegeben werden.";

    printf("%s\n", sAufgabenString);

    for (int i = 0; i <= strlen(sAufgabenString); i++) {
        sAufgabenString[i] = toupper(sAufgabenString[i]);
    }

    printf("%s\n", sAufgabenString);

    return 0;
}
