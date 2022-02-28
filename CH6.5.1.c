/*
 * File: CH6.5.1.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-26, 11:45:39 pm
 * Author: Ibrahim Hayber
 * -----
 * Last Modified: 2022-02-28, 2:00:00 am
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-28, 1:33:56 am	H.K.	added comments
 * 2022-02-26, 11:45:39 pm	I.H.	-start-
 */

/*
6.5.1. Konzentrationsspiel 2.0
Schreiben Sie das Konzentrationsspiel aus der Challenge 5.7.3 so um, dass wiederverwendbare
Funktionen etwa fuer das Loeschen des Bildschirms, das Warten, das Erzeugen
von Zufallszahlen in einen vorgegeben Interval, fuer ein einzelnes Spiel (Ueberlegen Sie
welche Argumente dafuer erforderlich sind?) definiert und genutzt werden.
*/

// verbuggt

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void num_gen(int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", (rand() % 100));
}

void waiting(int i) {
    int iElapsedTime = 0;
    int iCurrentTime = time(NULL);
    do {
        iElapsedTime = time(NULL);
    } while ((iElapsedTime - iCurrentTime) < i);
}

void clear() {
    system("clear");
}

int main() {
    // deklariere und initialisiere die Variablen
    char cYesNo = '\0';
    int iResp1 = 0;
    int iResp2 = 0;
    int iResp3 = 0;
    int iResp4 = 0;
    int iResp5 = 0;
    int iElapsedTime = 0;
    int iCurrentTime = 0;
    int iRandomNum = 0;
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    int i4 = 0;
    int i5 = 0;
    int iCounter = 0;
    int iMenu;

    // Initialisiere den Zufallszahlengenerator
    srand(time(NULL));

    // Frage, ob das Spiel gespielt werden soll
    printf("\nPlay a game of Concentration? (y or n): ");
    scanf("%c", &cYesNo);
    // Wenn ja, dann spiele es
    do {
        printf("Choose a level!\n\n");
        printf("-1- Easy\n");
        printf("-2- Mid-Level\n");
        printf("-3- High-Level\n");
        printf("-4- Quit Game\n");
        scanf("%d", &iMenu);
        switch (iMenu) {
            //EASY
        case 1:
            // generiere drei Zufallszahlen
            num_gen(3);

            //zeige die Zahlen
            printf("\nConcentrate on the next three numbers\n");
            printf("\n%d\t%d\t%d\n", i1, i2, i3);
            iCurrentTime = time(NULL);
            // warte 3 Sekunden
            waiting(3);

            // loesche den Bildschirm
            clear();

            // frage nach den drei gezeigten Zahlen
            printf("\nEnter each number separated by one space: ");
            scanf("%d%d%d", &iResp1, &iResp2, &iResp3);

            // Sind dieses die drei Zufallszahlen?
            if (i1 == iResp1 && i2 == iResp2 && i3 == iResp3)
                printf("\nCongratulations!\n\n");
            else
                printf("\nSorry, correct numbers were %d %d %d\n\n", i1, i2, i3);
            break;
            //END OF EASY

            //MID LEVEL
        case 2:
            // Generiere fünf Zufallszahlen
            num_gen(5);

            // Zeige die Zahlen
            printf("\nConcentrate on the next thre numbers\n");
            printf("\n%d\t%d\t%d\t%d\t%d\n", i1, i2, i3, i4, i5);
            iCurrentTime = time(NULL);
            // Warte 5 Sekunden
            waiting(5);

            // Loesche den Bildschirm
            clear();

            // Frage nach den fuenf gezeigten Zahlen
            printf("\nEnter each number separated by one space: ");
            scanf("%d%d%d%d%d", &iResp1, &iResp2, &iResp3, &iResp4, &iResp5);

            // Sind dieses die fuenf Zufallszahlen?
            if (i1 == iResp1 && i2 == iResp2 && i3 == iResp3 && i4 == iResp4 && i5 == iResp5)
                printf("\nCongratulations!\n\n");
            else
                printf("\nSorry, correct numbers were %d %d %d %d %d\n\n", i1, i2, i3, i4, i5);
            break;
            //END OF MID LEVEL

            //High Level
        case 3:
            // Generiere drei Zufallszahlen
            num_gen(5);

            //zeige die Zahlen
            printf("\nConcentrate on the next thre numbers\n");
            printf("\n%d\t%d\t%d\t%d\t%d\n", i1, i2, i3, i4, i5);
            iCurrentTime = time(NULL);
            // Warte 3 Sekunden
            waiting(3);

            // Loesche den Bildschirm
            clear();

            // Frage nach den drei gezeigten Zahlen
            printf("\nEnter each number separated by one space: ");
            scanf("%d%d%d%d%d", &iResp1, &iResp2, &iResp3, &iResp4, &iResp5);

            // Sind dieses die drei Zufallszahlen?
            if (i1 == iResp1 && i2 == iResp2 && i3 == iResp3 && i4 == iResp4 && i5 == iResp5)
                printf("\nCongratulations!\n\n");
            else
                printf("\nSorry, correct numbers were %d %d %d %d %d\n\n", i1, i2, i3, i4, i5);
            break;
            //END OF HIGH LEVEL
        case 4:
            printf("goodbye uwu\n");
            exit(1);
        }

    } while (1);
    return 0;
}