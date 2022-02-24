/*
 * File: CH12.4.1.1.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-01-25, 4:20:36 pm
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-24, 12:40:34 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-24, 12:40:23 pm	H.K.	added Comments
 * 2022-01-25, 4:20:36 pm	H.K.	-start-
 */

/*
*  Liest aus Record.txt aus, jedoch nur alles in einer Zeile
*  Bug noch vorhanden, muss überarbeitet werden. Wenn der Nachname zu kurz/lang
*  verschiebt sich die RollNo und Marks
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
