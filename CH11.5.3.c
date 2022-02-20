/*
 * File: CH11.5.3.c
 * Project: Einführung in C
 * Created Date: 2022-01-18, 5:27:34
 * Author: Hamzenis Kryeziu
 * -----
 * Last Modified: 2022-01-27, 10:15:25 pm
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

        FILE *fp;
        char sVName[50], sNName[50];
        char str[80];

        fp = fopen("name.dat", "a+");

        if(fp == NULL) {
                printf("Error opening file\n");
                exit(1);
        }

        //Position wird wieder an den Anfang gesetzt 
        //(oder auch möglich fopen von a+ auf r setzen)
        fseek(fp, 0, SEEK_SET);

        while(fgets(str, 80, fp) != NULL){
          printf("%s\n", str);

        }

        printf("Geben Sie einen weitere Vornamen ein :\n");
        scanf("%s",sVName);
        printf("Geben Sie einen weitere Nachname ein :\n");
        scanf("%s",sNName);
        fprintf(fp, "%s %s\n",sVName, sNName);

        fclose(fp);


        return 0;
}
