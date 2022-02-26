/*
2.2.2. Kalender
Schreiben Sie ein Programm, dass den aktuellen Monat in dem untenstehenden Format
ausgibt:
Oktober 2021
    Mo Di Mi Do Fr Sa So
                1  2  3
    4  5  6  7  8  9  10
    11 12 13 14 15 16 17
    18 19 20 21 22 23 24
    25 26 27 28 29 30 31
    21
*/
#include <stdio.h>

int main()
{
    int num = 4;

    printf("\tOktober 2021\n");
    printf("Mo\tDi\tMi\tDo\tFr\tSa\tSo\n");
    printf("  \t  \t  \t  \t 1\t 2\t 3\n");
    for(int i =0; i < 4; i++)
    {
        for(int j =num; j < (num+7); j++)
        {
            printf("%d\t", j);

        }
        num = num+7;
        printf("\n");
    }
    return 0;
}
