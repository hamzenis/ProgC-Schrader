/*
 * File: CH7.4.1.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-25, 1:53:30 pm
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-25, 2:09:22 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-25, 1:53:30 pm	H.K.	-start-
 */

#include <stdio.h>

int main() {

    int test[10];
    int i;

    /*
    *   Der Fehler lag an dem falschen vergleich i<=10.
    *   Das Array hat keinen 10 Index, sondern nur Index 0-9.
    */
    for (i = 0; i < 10; i++) test[i]=i;

    for (i = 0; i < 10; i++) printf("%d, ",test[i]);

    return 0;
}
