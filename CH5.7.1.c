/*
 * File: CH5.7.1.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-26, 11:45:39 pm
 * Author: Ibrahim Hayber
 * -----
 * Last Modified: 2022-02-28, 1:19:12 am
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-28, 1:18:09 am	H.K.	added comments
 * 2022-02-26, 11:45:39 pm	I.H.	-start-
 */

/*
5.7.1. Einfaches Zaehlen
Schreiben Sie ein Programm, das von 100 bis 1 in Schritten von 10 herunterzaehlt.
*/
#include <stdio.h>

int main() 
{
    for (int i = 100; i >= 0; i = (i - 10)) 
    {
        if (i == 0) i++;
        printf("%d\n", i);
    }

    return 0;
}
