/*
 * File: CH12.4.12.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-01-25, 4:21:31 pm
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-20, 7:39:32 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-01-25, 4:21:31 pm	H.K.	-start-
 */

//Problem mit Zeilenumbruch. Muss noch gefixt werden

#include<stdio.h>
#include<stdlib.h>

typedef struct student {
    char name[50];
    int roll_no;
    float marks;
}stud;

int myFlushStdin() {
    int i;
    while (getchar() != '\n') {
        i++;
    }
    return 0;
}

int main() {
    FILE* fp;
    int n, chars;

    stud aStudent;

    fp = fopen("records.txt", "w");

    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Testing fprintf() function: \n\n");

    printf("Enter the number of records you want to enter: ");
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        printf("\nEnter the details of student %d \n\n", i + 1);
        // fflush(stdin) does not work for some compilers
        myFlushStdin();

        printf("Enter name of the student: ");
        fgets(aStudent.name, 50, stdin);

        printf("Enter roll no: ");
        scanf("%d", &aStudent.roll_no);

        printf("Enter marks: ");
        scanf("%f", &aStudent.marks);

        chars = fprintf(fp, "%s %d %.2f\n", aStudent.name, aStudent.roll_no, aStudent.marks);
        printf("\n%d characters successfully written to the file\n\n", chars);
    }

    fclose(fp);
    return 0;
}
