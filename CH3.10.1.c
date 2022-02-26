/*
3.10.1. Umsatzberechnung
Schreiben Sie ein Programm, das den Anwender auffordert, die Anzahl und den Preis
einer verkauften Ware einzugeben, um dann den Umsatz nach der Formel:
fTotalUmsatz = fPreis * iAnzahl
zu berechnen, und anschlieenden den damit erzielten Umsatz auszugeben.
*/
#include <stdio.h>

float umsatz(int* anzahl, float* preis)
{
    return (*preis)*(*anzahl);
}

int main()
{
    int   anzahl= 0;
    float preis = 0.0;

    printf("--Umsatzrechner--\n");
    printf("Geben Sie Anzahl ihrer Ware und den Preis in Format \"anzahl preis\" an.\n");
    scanf("%d %f", &anzahl, &preis);

    printf("Erzielter Umsatz: %.2f €\n", umsatz(&anzahl, &preis));


    return 0;
}
