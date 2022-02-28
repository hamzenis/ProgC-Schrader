/*
 * File: CH4.4.3.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-26, 11:45:39 pm
 * Author: Ibrahim Hayber
 * -----
 * Last Modified: 2022-02-28, 1:25:21 am
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-28, 1:12:29 am	H.K.	added comments
 * 2022-02-26, 11:45:39 pm	I.H.	-start-
 */

 /*
 4.4.2. Groß und Kleinbuchstaben
 Modifizieren Sie das Listing 4.1 so, dass sowohl Klein- als auch Grossbuchstaben eingegeben
 werden duerfen und korrekt behandelt werden. Als weitere Eingabemoeglichkeit
 soll ein q oder Q hinzukommen, dass das Programm beendet und den Fehlercode -1
 zurueckgibt. Die Loesung soll dabei einmal mittels if ... then ...-Statements und einmal
 als switch ...-Statement ausgef¨uhrt werden.
 */
#include <stdio.h>

int main() {
    char cResponse = '\0';
    int iHealth = 0;
    int iError = 0;

    printf("\n\tIn-Battle-Healing\n");
    printf("\na\tDrink Health Potion");
    printf("\nb\tResume Battle");
    printf("\nq\tQuit Game\n");
    printf("\nEnter your  selection: ");
    scanf("%c", &cResponse);

    switch (cResponse) {
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
