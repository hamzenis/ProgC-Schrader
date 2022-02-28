/*
 * File: CH6.5.1-Hamzo.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-28, 3:50:32 am
 * Author: Hamzenis Kryeziu & Ibrahim Hayber
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-28, 3:42:39 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-28, 4:41:45 am	I.H.	
 * 2022-02-28, 3:50:32 am	H.K.	-start-
 */

 /*
 *  6.5.1. Konzentrationsspiel 2.0
 *  Schreiben Sie das Konzentrationsspiel aus der Challenge 5.7.3 so um,
 *  dass wiederverwendbare Funktionen etwa fuer das Loeschen des Bildschirms,
 *  das Warten, das Erzeugen von Zufallszahlen in einen vorgegeben Interval,
 *  fuer ein einzelnes Spiel (Ueberlegen Sie welche Argumente dafuer
 *  erforderlich sind?) definiert und genutzt werden.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void secWait(int i) {
    int iElapsedTime = 0;
    int iCurrentTime = 0;
    iCurrentTime = time(NULL);

    // Warte 3 Sekunden
    do {
        iElapsedTime = time(NULL);
    } while ((iElapsedTime - iCurrentTime) < i);
}

void sysclr() {
    // Loesche den Bildschirm
    system("clear");
}

int numGen() {
    int i1 = 0;
    // Generiere drei Zufallszahlen
    i1 = rand() % 100;
    return i1;
}

int main() {
    // Deklariere und initialisiere die Variablen
    char cYesNo = '\0';
    int iResp1 = 0;
    int iResp2 = 0;
    int iResp3 = 0;
    int iResp4 = 0;
    int iResp5 = 0;
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
                i1 = numGen();
                i2 = numGen();
                i3 = numGen();

                // Zeige die Zahlen
                printf("\nConcentrate on the next three numbers\n");
                printf("\n%d\t%d\t%d\n", i1, i2, i3);
                secWait(5);
                sysclr();


                // Frage nach den drei gezeigten Zahlen
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
                // Generiere drei Zufallszahlen
                i1 = numGen();
                i2 = numGen();
                i3 = numGen();
                i4 = numGen();
                i5 = numGen();

                // Zeige die Zahlen
                printf("\nConcentrate on the next thre numbers\n");
                printf("\n%d\t%d\t%d\t%d\t%d\n", i1, i2, i3, i4, i5);
                secWait(5);
                sysclr();

                // Frage nach den drei gezeigten Zahlen
                printf("\nEnter each number separated by one space: ");
                scanf("%d%d%d%d%d", &iResp1, &iResp2, &iResp3, &iResp4, &iResp5);

                // Sind dieses die drei Zufallszahlen?
                if (i1 == iResp1 && i2 == iResp2 && i3 == iResp3 && i4 == iResp4 && i5 == iResp5)
                    printf("\nCongratulations!\n\n");
                else
                    printf("\nSorry, correct numbers were %d %d %d %d %d\n\n", i1, i2, i3, i4, i5);
                break;
                //END OF MID LEVEL

                //High Level
            case 3:
                // Generiere drei Zufallszahlen
                i1 = numGen();
                i2 = numGen();
                i3 = numGen();
                i4 = numGen();
                i5 = numGen();

                // Zeige die Zahlen
                printf("\nConcentrate on the next thre numbers\n");
                printf("\n%d\t%d\t%d\t%d\t%d\n", i1, i2, i3, i4, i5);
                secWait(3);
                sysclr();

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