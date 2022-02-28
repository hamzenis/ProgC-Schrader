/*
 * File: CH8.6.3.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-28, 1:52:57 am
 * Author: Ibrahim Hayber
 * -----
 * Last Modified: 2022-02-28, 1:55:34 am
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-28, 1:53:44 am	H.K.	added comments
 * 2022-02-28, 1:52:57 am	I.H.	-start-
 */

/*
8.6.3. Cryptogramm
Modifizieren Sie das Programm so, dass ein Substitutionscode verwendet wird, bei dem
jeder Buchstabe durch einen anderen ersetzt wird.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototypes
void encrypt(char [], int);
void decrypt(char [], int);
void subst(char[]);

int main()
{
    char myString[21] = {0};
    int iSelection = 0;
    int iRand;
    srand(time(NULL));
    iRand = (rand() % 4) + 1; // random number 1 ... 4

    while (iSelection != 5) {
        printf("\n\n1\tEncrypt Clear Text");
        printf("\n2\tDecrypt Cypher Text");
        printf("\n3\tSubstitutioncode");
        printf("\n4\tGenerate New Key");
        printf("\n5\tQuit\n");
        printf("\nSelect a Cryptography Option: ");
        scanf("%d", &iSelection);
        switch (iSelection) {
            case 1:
                printf("\nEnter one word as clear text to encrypt: ");
                scanf("%s", myString);
                encrypt(myString, iRand);
                break;
            case 2:
                printf("\nEnter cypher text to decrypt: ");
                scanf("%s", myString);
                decrypt(myString, iRand);
                break;
            case 3:
                printf("\nEnter text to decrypt: ");
                scanf("%s", myString);
                subst(myString);
                break;
            case 4:
                iRand = (rand() % 4) + 1;
                printf("\nNew Key Generated\n");
                break;
            case 5:
                system("clear");
                printf("byebye uwu\n");
                exit(1);
                break;

        }
    }
    return 0;
}

void encrypt(char sMessage[], int iKey)
{
    int i = 0;
    while (sMessage[i]) {
        sMessage[i] += iKey;
        i++;
    }
    i = 0;
    printf("\nEncrypted Message is: ");
    while (sMessage[i]) {
        printf("%c", sMessage[i]);
        i++;
   }
}

void decrypt(char sMessage[], int iKey)
{
    int i = 0;
    while (sMessage[i]) {
        sMessage[i] -= iKey;
        i++;
    }

    i = 0;
    printf("\nDecrypted Message is: ");
    while (sMessage[i]) {
        printf("%c", sMessage[i]);
        i++;
   }
}

void subst(char sMessage[])
{
    int randInt = 0;
    int i = 0;
    int j = 0;
    while(sMessage[i])
    {
        randInt = (rand()%122) + 1;
        while(randInt < 97)
            randInt = (rand()%122) + 1;
        sMessage[i] = randInt;
        i++;
    }
    printf("\nEncrypted Message is: ");
    while(sMessage[j])
    {
    printf("%c", sMessage[j]);
    j++;
    }
}
