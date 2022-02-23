/*
 * File: CH10.4.1.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-01-11, 4:08:46 pm
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-23, 1:42:12 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-23, 1:41:22 pm	H.K.	added comments
 * 2022-01-11, 4:08:46 pm	H.K.	-start-
 */

#include <stdio.h>
#include <stdlib.h>


int main() {

    char* pNutzer;
    pNutzer = (char*)malloc(80 * sizeof(char));

    // Falls es fehlschlägt, dass der Speicherplatz reserviert wird.
    if (pNutzer == NULL) {
        fprintf(stderr, "\nKein Speicherplatz vorhanden!!!\n");
    }

    printf("\nGeben Sie Ihren Lieblingsfilm ein: ");
    /*
    *  "%[^\n]%*c" eine Lösung damit Whitespaces ignoriert wird.
    *  Mit scanf() wird bis zum Whitespace gelesen, aber mit fgets kann
    *  bis zum Zeilenumbruch gelesen werden.
    */
    scanf("%[^\n]%*c", pNutzer);

    printf("%s\n", pNutzer);

    free(pNutzer);

    return 0;
}
