/*
 * File: CH8.6.1.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-28, 5:52:34 pm
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-28, 6:23:49 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-28, 5:52:34 pm	H.K.	-start-
 */

#include <stdio.h>

int main() {
    // Pointer
    int* iPtr;
    char* cPtr;
    float* fPtr;
    // Variable
    int iNumber = 10;
    char cCharacter = 'b';
    float fNumber = 1.5;

    // Zuweisung
    iPtr = &iNumber;
    cPtr = &cCharacter;
    fPtr = &fNumber;

    // Print Werte
    printf("Werte der Variablen\nint: %d\tchar: %c\tfloat: %f\n", iNumber, cCharacter, fNumber);
    printf("Werte der Pointer\nint: %d\tchar: %c\tfloat: %f\n", *iPtr, *cPtr, *fPtr);

    // Print Adresse
    printf("\nAdresse der Variablen\nint: %p\tchar: %p\tfloat: %p\n", &iNumber, &cCharacter, &fNumber);
    printf("\nAdresse der Pointer\nint: %p\tchar: %p\tfloat: %p\n", &iPtr, &cPtr, &fPtr);

    return 0;
}
