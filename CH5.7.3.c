/*
 * File: CH5.7.3.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-26, 11:45:39 pm
 * Author: Ibrahim Hayber
 * -----
 * Last Modified: 2022-02-28, 1:30:24 am
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-28, 1:30:11 am	H.K.	added comments
 * 2022-02-26, 11:45:39 pm	I.H.	-start-
 */

/*
5.7.3. Konzentrationsspiel
Veraendern Sie das Konzentrationsspiel in Listing 5.7 so, dass es mit einem Hauptmenue
startet. Hier kann man einen Schwierigkeitsgrad angeben oder das Programm beenden.
Der Schwierigkeitsgrad bestimmt, wie viele Zahlen sich der Anwender merken soll. Jedesmal,
wenn ein Spiel beendet ist, soll wieder das Hauptmenue erscheinen, so dass man
mit demselben Schwierigkeitsgrad oder einem anderen weiterspielen kann, bzw. das Spiel
beenden kann. Hier das Hauptmenue:
1. Einfach (3 Zahlen werden 3 Sekunden gezeigt)
2. Mittel (5 Zahlen werden 5 Sekunden gezeigt)
3. Schwer (5 Zahlen werden 2 Sekunden gezeigt)
4. Quit (beendet das Spiel)
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Deklariere und initialisiere die Variablen
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
            // Generiere drei Zufallszahlen
            i1 = rand() % 100;
            i2 = rand() % 100;
            i3 = rand() % 100;

            // Zeige die Zahlen
            printf("\nConcentrate on the next three numbers\n");
            printf("\n%d\t%d\t%d\n", i1, i2, i3);
            iCurrentTime = time(NULL);
            // Warte 3 Sekunden
            do {
                iElapsedTime = time(NULL);
            } while ((iElapsedTime - iCurrentTime) < 3);

            // Loesche den Bildschirm
            system("clear");

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
            i1 = rand() % 100;
            i2 = rand() % 100;
            i3 = rand() % 100;
            i4 = rand() % 100;
            i5 = rand() % 100;

            // Zeige die Zahlen
            printf("\nConcentrate on the next thre numbers\n");
            printf("\n%d\t%d\t%d\t%d\t%d\n", i1, i2, i3, i4, i5);
            iCurrentTime = time(NULL);
            // Warte 3 Sekunden
            do {
                iElapsedTime = time(NULL);
            } while ((iElapsedTime - iCurrentTime) < 5);

            // Loesche den Bildschirm
            system("clear");

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
            i1 = rand() % 100;
            i2 = rand() % 100;
            i3 = rand() % 100;
            i4 = rand() % 100;
            i5 = rand() % 100;

            // Zeige die Zahlen
            printf("\nConcentrate on the next thre numbers\n");
            printf("\n%d\t%d\t%d\t%d\t%d\n", i1, i2, i3, i4, i5);
            iCurrentTime = time(NULL);
            // Warte 3 Sekunden
            do {
                iElapsedTime = time(NULL);
            } while ((iElapsedTime - iCurrentTime) < 3);

            // Loesche den Bildschirm
            system("clear");

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
