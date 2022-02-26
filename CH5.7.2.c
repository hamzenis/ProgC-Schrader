/*
5.7.2. Mathequiz
Schreiben Sie ein Programm, das den Anwender zun¨achst fragt, wieviele Fragen der
Form a * b = ? er beantworten m¨ochte. Das Programm sollte dem Anwender gratulieren,
wenn die Anwort korrekt ist, und ihm die korrekte Antwort zeigen, falls er falsch
geantwortet hat. Das Programm merkt sich, wieviele Antworten insgesamt korrekt beantwortet
wurden und zeigt ihm am Ende des Mathequiz sein Ergebnis.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int main()
{
    int userInput, amount, countAns;
    int a, b;
    int answer;

    srand(time(NULL));

    printf("\t--Maths Quiz--\n");
    do
    {
        printf("-1- Start Game\n");
        printf("-2- Quit Game\n");

        scanf("%d", &userInput);

        switch(userInput)
        {
            case 1:
                system("clear");
                printf("How many questions(a*b=?) do you want to answer?\n");
                scanf("%d", &amount);
                for(int i = 0; i < amount; i++)
                {
                    a = rand()%10 +1;
                    b = rand()%10 +1;
                    printf("%d * %d = ",a , b);
                    scanf("%d",&answer);
                    printf("\n");
                    if(answer == (a*b))
                    {
                        printf("That's the right answer!\nGood Job!\n");
                        countAns+=1;
                        sleep(2);
                        system("clear");
                    }
                    else
                    {
                        printf("That's wrong :/\n");
                        printf("%d * %d = %d\n", a, b, a*b);
                    }
                }
                break;
            case 2:
                system("clear");
                printf("Byebye uwu\n");
                exit(1);
        }
        sleep(2.5);
        system("clear");
    }
    while(1);
    return 0;
}
