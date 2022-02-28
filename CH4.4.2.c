/*
 * File: CH4.4.2.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-26, 11:45:39 pm
 * Author: Ibrahim Hayber
 * -----
 * Last Modified: 2022-02-28, 11:38:25 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-28, 1:03:21 am	H.K.	added comments
 * 2022-02-26, 11:45:39 pm	I.H.	-start-
 */

 /*
 4.4.2. Groß und Kleinbuchstaben
 Modifizieren Sie das Listing 4.1 so, dass sowohl Klein- als auch Grossbuchstaben eingegeben
 werden duerfen und korrekt behandelt werden. Als weitere Eingabemoeglichkeit
 soll ein q oder Q hinzukommen, dass das Programm beendet und den Fehlercode -1
 zurueckgibt. Die Loesung soll dabei einmal mittels if ... then ...-Statements und einmal
 als switch ...-Statement ausgefuehrt werden.
 */

// Als If-Else Statement
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

    if (cResponse == 'a' || cResponse == 'A') {
        printf("\nNow drinking  health potion\n");
        iHealth = iHealth + 1;
    }
    else {
        if (cResponse == 'b' || cResponse == 'B') {
            printf("\nNow resuming battle\n");
        }
        else if (cResponse == 'q' || cResponse == 'Q') {
            return -1;
        }
        else {
            printf("\nError: Unvorhergesehene Eingabe!");
            iError = 1;
        }
        return iError;
    }
    
    return 0;
}
