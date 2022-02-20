/*
 * File: CH10.4.2.c
 * Project: Einführung in C
 * Created Date: 2022-01-11, 5:12:07
 * Author: Hamzenis Kryeziu
 * -----
 * Last Modified: 2022-01-24, 4:41:43
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date      	By	Comments
 * ----------	---	----------------------------------------------------------
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//10.4.2 

int main() {

        char *pName;
        int iCnt;
        pName = (char*) calloc(100, sizeof(char));

        printf("\nGeben Sie Ihren Namen ein: ");

/* alter Code nur für einen Namen

        scanf("%s", pName);
        for (int i = 0; i < 100; i++) {
                pName++;
                iCnt++;
                if(*pName == 0) break;
        }

 */

 /* mit Vor- und Nachname möglich */
        fgets(pName, 100, stdin);

        for (int i = 0; i < 100; i++) {
                if(*pName == 0) {
                        break;
                }
                else {
                        pName++;
                        //Whitespaces werden ignoriert
                        if(*pName != ' ') iCnt++;

                }
        }

        //Weil der Endcharakter von fgets mitgezählt wird, ein schneller bugfix
        iCnt--;

        printf("Die Länge Ihres Names ist : %d\n", iCnt);


        return 0;
}
