/*
5.7.1. Einfaches Z¨ahlen
Schreiben Sie ein Programm, das von 100 bis 1 in Schritten von 10 herunterz¨ahlt.
*/
#include <stdio.h>

int main()
{
    for (int i= 100; i >= 0; i=(i-10))
    {
        if(i == 0)
            i++;
        printf("%d\n", i);
    }

  return 0;
}
