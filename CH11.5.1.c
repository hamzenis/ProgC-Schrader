/*
 * File: CH11.5.1.c
 * Project: Einführung in C
 * Created Date: 2022-01-18, 4:00:34
 * Author: Hamzenis Kryeziu
 * -----
 * Last Modified: 2022-01-24, 1:21:57
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

int main() {

        FILE* fp;

        char sVName[50], sNName[50];

        fp = fopen("name.dat", "a+");

        if (fp == NULL) {
                printf("Error opening file\n");
                exit(1);
        }

        for (int i = 0; i < 5; i++) {
                printf("Geben Sie den Vornamen der %d.Person ein: \n", i + 1);
                scanf("%s\n", sVName);
                printf("Geben Sie den Nachnamen der %d.Person ein: \n", i + 1);
                scanf("%s\n", sNName);
                fprintf(fp, "%s %s\n", sVName, sNName);
        }

        fclose(fp);


        return 0;
}
