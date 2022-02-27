/*
 8.6.2. W¨urfelspiel
Entwickele ein kleines W¨urfelspiel. Der Spieler kann 6 W¨urfel auf einmal werfen. Jeder
Wurf wird in einem Integer-Array der L¨ange 6 gespeichert. Das Array wird in der main()
Funktion angelegt und an die neue Funktion tossDice() ¨ubergeben, diese weist den 6
Feldern des Array neue zuf¨allige Werte zu. Geben Sie das zuf¨allige W¨urfelergebnis aus.

 */
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void tossDice(int iArr[])
{
    //zufällige Werte pro Wurf + Ausgabe auf der Konsole:
   // printf("Sie haben folgendes gewürfelt: ");
    for(int i = 0 ; i < 6; i++)
    {
                        iArr[i] = (rand()%6) + 1;
                    //    printf("%d ", iArr[i]);
                     //   sleep(1);
    }
    printf("\n");
}

int main()
{
    srand(time(NULL));

    int iAns;
    int iZahlen[6]= {0, 0, 0, 0, 0, 0};

    printf("--Würfelspiel--\n\n");

    do
    {
        printf("Möchten Sie Würfeln?\n");
        printf("-1- Ja!\n");
        printf("-2- Nein\n");
        scanf("%d", &iAns);
        while(iAns != 1 && iAns != 2)
        scanf("%d", &iAns);
        system("clear");
        switch(iAns)
        {
            case 1:
                    tossDice(iZahlen);
                    printf("Sie haben folgendes gewürfelt: ");
                    for(int i = 0; i < 6; i++)
                    {
                        printf("%d ", iZahlen[i]);
                    }
                    printf("\n");
                    break;
            case 2:
                    printf("byebye uwu\n");
                    exit(1);
                    break;
        }
    }while(1);
    return  0;
}
