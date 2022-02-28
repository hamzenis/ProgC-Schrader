/*
6.5.1. Konzentrationsspiel 2.0
Schreiben Sie das Konzentrationsspiel aus der Challenge 5.7.3 so um, dass wiederverwendbare
Funktionen etwa f¨ur das L¨oschen des Bildschirms, das Warten, das Erzeugen
von Zufallszahlen in einen vorgegeben Interval, f¨ur ein einzelnes Spiel (¨Uberlegen Sie
welche Argumente daf¨ur erforderlich sind?) definiert und genutzt werden.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void num_gen(int n, int iArr[])
{
    for(int i = 0 ; i <n ; i++)
        iArr[i]= (rand()%100) +1;
}

void wait(int i, int iCurrentTime)
{
    int iElapsedTime = 0;

    do {
			iElapsedTime = time(NULL);
		}
		while ((iElapsedTime - iCurrentTime) < i);
}

void clear()
{
    system("clear");
}

int main()
{
	// deklariere und initialisiere die Variablen
	char cYesNo = '\0';
	int iResp1 = 0;
	int iResp2 = 0;
	int iResp3 = 0;
    int iResp4 = 0;
    int iResp5 = 0;
	int iRandomNum = 0;
	int iCurrentTime = 0;
	int i1 = 0;
	int i2 = 0;
	int i3 = 0;
    int i4 = 0;
    int i5 = 0;
    int iArr[5] = {0};
	int iCounter = 0;
    int iMenu;

	// initialisiere den Zufallszahlengenerator
	srand(time(NULL));

	// frage, ob das Spiel gespielt werden soll
	printf("\nPlay a game of Concentration? (y or n): ");
	scanf("%c", &cYesNo);
    // wenn ja, dann spiele es
do{
        printf("Choose a level!\n\n");
        printf("-1- Easy\n");
        printf("-2- Mid-Level\n");
        printf("-3- High-Level\n");
        printf("-4- Quit Game\n");
        scanf("%d", &iMenu);
    switch(iMenu)
    {
        //EASY
        case 1:
            // generiere drei Zufallszahlen
		num_gen(3, iArr);

		//zeige die Zahlen
		printf("\nConcentrate on the next three numbers\n");
		printf("\n%d\t%d\t%d\n", iArr[0], iArr[1], iArr[2]);

	    iCurrentTime = time(NULL);
		// warte 3 Sekunden
		wait(3, iCurrentTime);

		// loesche den Bildschirm
		clear();

		// frage nach den drei gezeigten Zahlen
		printf("\nEnter each number separated by one space: ");
		scanf("%d%d%d", &iResp1, &iResp2, &iResp3);

		// Sind dieses die drei Zufallszahlen?
		if (iArr[0] ==  iResp1 && iArr[1] == iResp2 && iArr[2] == iResp3)
			printf("\nCongratulations!\n\n");
		else
			printf("\nSorry, correct numbers were %d %d %d\n\n", iArr[0], iArr[1], iArr[2]);
        break;
        //END OF EASY

        //MID LEVEL
        case 2:
            // generiere fünf Zufallszahlen
		num_gen(5, iArr);

		//zeige die Zahlen
		printf("\nConcentrate on the next five numbers\n");
		printf("\n%d\t%d\t%d\t%d\t%d\n", iArr[0], iArr[1], iArr[2], iArr[3] ,iArr[4]);
		iCurrentTime = time(NULL);
		// warte 5 Sekunden
		wait(5, iCurrentTime);

		// loesche den Bildschirm
		clear();

		// frage nach den fünf gezeigten Zahlen
		printf("\nEnter each number separated by one space: ");
		scanf("%d%d%d%d%d", &iResp1, &iResp2, &iResp3, &iResp4 , &iResp5);

		// Sind dieses die fünf Zufallszahlen?
		if (i1 ==  iResp1 && i2 == iResp2 && i3 == iResp3  && i4 ==  iResp4 && i5 ==  iResp5)
			printf("\nCongratulations!\n\n");
		else
			printf("\nSorry, correct numbers were %d %d %d %d %d\n\n",iArr[0], iArr[1], iArr[2], iArr[3] ,iArr[4]);
        break;
        //END OF MID LEVEL

        //High Level
        case 3:
             // generiere drei Zufallszahlen
		num_gen(5, iArr);

		//zeige die Zahlen
		printf("\nConcentrate on the next thre numbers\n");
		printf("\n%d\t%d\t%d\t%d\t%d\n", iArr[0], iArr[1], iArr[2], iArr[3] ,iArr[4]);
		iCurrentTime = time(NULL);
		// warte 3 Sekunden
		wait(3,iCurrentTime);

		// loesche den Bildschirm
		clear();

		// frage nach den drei gezeigten Zahlen
		printf("\nEnter each number separated by one space: ");
		scanf("%d%d%d%d%d", &iResp1, &iResp2, &iResp3, &iResp4 , &iResp5);

		// Sind dieses die drei Zufallszahlen?
		if (i1 ==  iResp1 && i2 == iResp2 && i3 == iResp3  && i4 ==  iResp4 && i5 ==  iResp5)
			printf("\nCongratulations!\n\n");
		else
			printf("\nSorry, correct numbers were %d %d %d %d %d\n\n", iArr[0], iArr[1], iArr[2], iArr[3] ,iArr[4]);
        break;
        //END OF HIGH LEVEL
        case 4:
            printf("goodbye uwu\n");
            exit(1);
    }


}while(1);
	return 0;
}
