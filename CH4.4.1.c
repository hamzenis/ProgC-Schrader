/*
4.4.1. Wahrheitstabelle
Schreiben Sie ein Programm, das f¨ur alle true/false-Kombinationen von bA und bB eine
Wahrheitstabelle f¨ur den folgenden komplexen Boolschen Ausdruck ausgibt.
    (bA || bB) && !(bA || !bB)

*/
#include <stdio.h>

int main()
{
    int bA,bB;
    printf("Wahrheitstabelle\n");
    printf("bA |\tbB|\t(bA||bB)&&!(bA||!bB)\n");
    bA= 0;
    bB= 0;
    printf(" %d |\t%d |\t",bA ,bB);
    if( (bA||bB)&&!(bA||!bB))
        printf(" 1\n");
        else printf(" 0\n");
    bA= 0;
    bB= 1;
    printf(" %d |\t%d |\t",bA ,bB);
    if( (bA||bB)&&!(bA||!bB))
        printf(" 1\n");
        else printf(" 0\n");
    bA= 1;
    bB= 0;
    printf(" %d |\t%d |\t",bA ,bB);
    if( (bA||bB)&&!(bA||!bB))
        printf(" 1\n");
        else printf(" 0\n");
    bA= 1;
    bB= 1;
    printf(" %d |\t%d |\t",bA ,bB);
    if( (bA||bB)&&!(bA||!bB))
        printf(" 1\n");
        else printf(" 0\n");

    return 0;
}
