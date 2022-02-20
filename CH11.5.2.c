/*
 * File: CH11.5.2.c
 * Project: Einführung in C
 * Created Date: 2022-01-18, 4:31:37
 * Author: Hamzenis Kryeziu
 * -----
 * Last Modified: 2022-01-27, 10:14:43 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              	By		Comments
 * ------------------	----	----------------------------------------------------------
 * 2022-01-24, 4:47:16	H.K.	cleaned variables
 */


#include <stdio.h>
#include <stdlib.h>

int main() {

        FILE* fp;
        char str[80];

        fp = fopen("name.dat", "a+");

        if (fp == NULL) {
                printf("Error opening file\n");
                exit(1);
        }

        //Position wird wieder an den Anfang gesetzt oder von a+ auf r setzen
        fseek(fp, 0, SEEK_SET);

        while (fgets(str, 80, fp) != NULL) {
                printf("%s\n", str);

        }

        fclose(fp);


        return 0;
}
