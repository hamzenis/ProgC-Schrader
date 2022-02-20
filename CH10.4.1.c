/*
 * File: CH10.4.1.c
 * Project: Einführung in C
 * Created Date: 2022-01-11, 4:08:46 pm
 * Author: Hamzenis Kryeziu
 * -----
 * Last Modified: 2022-01-25, 12:03:17 am
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 */




#include <stdio.h>
#include <stdlib.h>


int main() {

    char* pNutzer;
    pNutzer = (char*)malloc(80 * sizeof(char));

    if (pNutzer == NULL) {
        fprintf(stderr, "\nKein Speicherplatz vorhanden!!!\n");
    }

    printf("\nGeben Sie Ihren Lieblingsfilm ein: ");
    scanf("%[^\n]%*c", pNutzer);

    printf("%s\n", pNutzer);

    free(pNutzer);

    return 0;
}
