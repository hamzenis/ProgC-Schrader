/*
 * File: CH8.6.2.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-27, 5:58:40 pm
 * Author: Ibrahim Hayber
 * -----
 * Last Modified: 2022-02-28, 1:45:32 am
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-28, 1:45:14 am	H.K.	added comments
 * 2022-02-27, 5:58:40 pm	I.H.	-start-
 */

/*
 8.6.2. W¨urfelspiel
Entwickele ein kleines Wuerfelspiel. Der Spieler kann 6 Wuerfel auf einmal werfen. Jeder
Wurf wird in einem Integer-Array der Laenge 6 gespeichert. Das Array wird in der main()
Funktion angelegt und an die neue Funktion tossDice() uebergeben, diese weist den 6
Feldern des Array neue zufaellige Werte zu. Geben Sie das zufaellige Wuerfelergebnis aus.
 */

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void tossDice(int iArr[]) {

    //zufaellige Werte pro Wurf + Ausgabe auf der Konsole:
    //printf("Sie haben folgendes gewürfelt: ");
    for (int i = 0; i < 6; i++) {
        iArr[i] = (rand() % 6) + 1;
        //printf("%d ", iArr[i]);
        //sleep(1);
    }
    printf("\n");
}

int main() {
    srand(time(NULL));

    int iAns;
    int iZahlen[6] = { 0, 0, 0, 0, 0, 0 };

    printf("--Wuerfelspiel--\n\n");

    do {
        printf("Moechten Sie Würfeln?\n");
        printf("-1- Ja!\n");
        printf("-2- Nein\n");
        scanf("%d", &iAns);
        while (iAns != 1 && iAns != 2)
            scanf("%d", &iAns);
        system("clear");
        switch (iAns) {
        case 1:
            tossDice(iZahlen);
            printf("Sie haben folgendes gewürfelt: ");
            for (int i = 0; i < 6; i++) {
                printf("%d ", iZahlen[i]);
            }
            printf("\n");
            break;
        case 2:
            printf("byebye uwu\n");
            exit(1);
            break;
        }
    } while (1);
    return  0;
}
