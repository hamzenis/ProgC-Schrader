/*
 * File: CH12.4.11.c
 * Project: Einführung in C
 * Created Date: 2022-01-25, 4:20:36 pm
 * Author: Hamzenis Kryeziu
 * -----
 * Last Modified: 2022-01-25, 5:02:10 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-01-25, 4:29:14 pm	H.K.	-start-
 */


#include<stdio.h>
#include<stdlib.h>

typedef struct student {
    char strFirstName[50];
    char strLastName[50];
    int roll_no, chars;
    float marks;
} stud;

int main() {

    FILE* fp;
    stud aStudent;

    fp = fopen("records.txt", "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Testing fscanf() function: \n\n");
    printf("Name:\t\t\tRoll\t\tMarks\n");

    while (fscanf(fp, "%s %s %d %f", aStudent.strFirstName, aStudent.strLastName, &aStudent.roll_no, &aStudent.marks) != EOF) {
        printf("%s %s\t\t%d\t\t%.2f\n", aStudent.strFirstName, aStudent.strLastName, aStudent.roll_no, aStudent.marks);
    }

    fclose(fp);
    return 0;
}
