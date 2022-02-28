/*
 * File: CH4.4.1.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-26, 11:45:39 pm
 * Author: Ibrahim Hayber
 * -----
 * Last Modified: 2022-02-28, 1:10:45 am
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-28, 1:01:20 am	H.K.	added comments
 * 2022-02-26, 11:45:39 pm	I.H.	-start-
 */

/*
4.4.1. Wahrheitstabelle
Schreiben Sie ein Programm, das fuer alle true/false-Kombinationen von bA und bB eine
Wahrheitstabelle für den folgenden komplexen Boolschen Ausdruck ausgibt.
    (bA || bB) && !(bA || !bB)
*/
#include <stdio.h>

int main()
{
    int bA,bB;
    printf("Wahrheitstabelle\n");
    printf("bA |\tbB|\t(bA||bB)&&!(bA||!bB)\n");
    bA= 0;
    bB= 0;
    printf(" %d |\t%d |\t",bA ,bB);
    if( (bA||bB)&&!(bA||!bB))
        printf(" 1\n");
        else printf(" 0\n");
    bA= 0;
    bB= 1;
    printf(" %d |\t%d |\t",bA ,bB);
    if( (bA||bB)&&!(bA||!bB))
        printf(" 1\n");
        else printf(" 0\n");
    bA= 1;
    bB= 0;
    printf(" %d |\t%d |\t",bA ,bB);
    if( (bA||bB)&&!(bA||!bB))
        printf(" 1\n");
        else printf(" 0\n");
    bA= 1;
    bB= 1;
    printf(" %d |\t%d |\t",bA ,bB);
    if( (bA||bB)&&!(bA||!bB))
        printf(" 1\n");
        else printf(" 0\n");

    return 0;
}
