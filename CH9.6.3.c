/*
 * File: CH9.6.3.c
 * Project: Einführung in C
 * Created Date: 2022-01-24, 2:08:17 am
 * Author: Hamzenis Kryeziu
 * -----
 * Last Modified: 2022-01-27, 2:23:04 am
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
#include <string.h>
#include <ctype.h>

int main() {

    char *ptrstrNamen = (char*) calloc(6, 8 * sizeof(char));

    ptrstrNamen[0] = "Peter";
    ptrstrNamen[1] = "Paul";
    ptrstrNamen[2] ="Mary";
    ptrstrNamen[3] ="Puff";
    ptrstrNamen[4] ="Magic";
    ptrstrNamen[5] ="Dragon";


    char temp[100];
    int iComp;

    //for
    iComp = strcmp(ptrstrNamen[0], ptrstrNamen[1]);

    //debug
    printf("%d\n", iComp);
    //debug
    for (int i = 0; i < 6; i++) {
        printf("%s\n", ptrstrNamen[i]);
    }



    if (iComp > 0) {
        ptrstrNamen[0] = *temp;
        ptrstrNamen[0] = *ptrstrNamen[1];
        ptrstrNamen[1] = *temp;
    }

    //debug
    for (int i = 0; i < 6; i++) {
        printf("%c\n", *ptrstrNamen[i]);
    }





    return 0;
}
