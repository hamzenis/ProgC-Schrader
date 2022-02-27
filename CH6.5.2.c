/*
6.5.2. Geldwechselautomat
Schreiben Sie ein Programm f¨ur einen Geldwechselautomat, der zun¨achst fragt, f¨ur welchen
Betrag sie Wechselgeld haben wollen (z.B. 13.64 Euro)? Das Programm gibt ihnen
dann aus, in welcher Form sie das Wechselgeld erhalten, wenn sie ingesamt m¨oglichst
wenig M¨unzen oder Scheine haben wollen. In dem Beispiel von 13.64 Euro sind das:
ein 10 Euroschein, eine 2 Eurom¨unze, eine 1 Eurom¨unze, eine 50 Centm¨unze, eine 10
Centm¨unze und zwei 2 Centm¨unzen).
*/

#include <stdio.h>
#include <stdlib.h>

void wechsel( float geld)
{
    if( geld >= 500)
    {
        geld = geld -500;
        printf("1 x 500 €\n");
    }
    else if( geld >= 200)
    {
        geld = geld - 200;
        printf("1 X 200 €\n");
    }
     else if( geld >= 100)
    {
        geld = geld - 100;
        printf("1 X 100 €\n");
    }
     else if( geld >= 50)
    {
        geld = geld - 50;
        printf("1 X  50 €\n");
    }
    else if( geld >= 50)
    {
        geld = geld - 50;
        printf("1 X  50 €\n");
    }
    else if( geld >= 20)
    {
        geld = geld - 20;
        printf("1 X  20 €\n");
    }
    else if( geld >= 10)
    {
        geld = geld - 10;
        printf("1 X  10 €\n");
    }
    else if( geld >= 5)
    {
        geld = geld - 5;
        printf("1 X   5 €\n");
    }
    else if( geld >= 2)
    {
        geld = geld - 2;
        printf("1 X   2 €\n");
    }
    else if( geld >= 1)
    {
        geld = geld - 1;
        printf("1 X   1 €\n");
    }
     else if( geld >= 0.5)
    {
        geld = geld - 0.5;
        printf("1 X   0.50€\n");
    }
      else if( geld >= 0.2)
    {
        geld = geld - 0.2;
        printf("1 X   0.20€\n");
    }
    else if( geld >= 0.1)
    {
        geld = geld - 0.1;
        printf("1 X   0.10€\n");
    }
     else if( geld >= 0.05)
    {
        geld = geld - 0.05;
        printf("1 X   0.05€\n");
    }
    else if( geld >= 0.02)
    {
        geld = geld - 0.02;
        printf("1 X   0.02€\n");
    }
    else if(geld >= 0.01)
    {
        geld = geld - 0.01;
        printf("1 X   0.01€\n");
    }
    else
        exit(1);
     wechsel(geld);

}
int main()
{
    float geld;

    printf("--Geldwechselautomat--\n");
    printf("Welchen Betrag möchten Sie wechseln?\n");
    scanf("%f", &geld);
    wechsel(geld);


    return 0;
}