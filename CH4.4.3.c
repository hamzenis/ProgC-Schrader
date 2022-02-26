/*
4.4.2. Groß und Kleinbuchstaben
Modifizieren Sie das Listing 4.1 so, dass sowohl Klein- als auch Grobuchstaben eingegeben
werden d¨urfen und korrekt behandelt werden. Als weitere Eingabem¨oglichkeit
soll ein q oder Q hinzukommen, dass das Programm beendet und den Fehlercode -1
zur¨uckgibt. Die L¨osung soll dabei einmal mittels if ... then ...-Statements und einmal
als switch ...-Statement ausgef¨uhrt werden.
37
*/
#include <stdio.h>

int main()
{
    char cResponse = '\0';
    int iHealth = 0;
    int iError = 0;

    printf("\n\tIn-Battle-Healing\n");
    printf("\na\tDrink Health Potion");
    printf("\nb\tResume Battle");
    printf("\nq\tQuit Game\n");
    printf("\nEnter your  selection: ");
    scanf("%c", &cResponse);

  switch(cResponse)
    {
      case 'a':
      case 'A':
        printf("\nNow drinking  health potion\n");
        iHealth = iHealth + 1;
        break;
      case 'b':
      case 'B':
            printf("\nNow resuming battle\n");
        break;
      case 'q':
      case 'Q':
            return -1;
      default:
            printf("\nError: Unvorhergesehene Eingabe!");
            iError = 1;
            return iError;

    }


    return 0;
}
