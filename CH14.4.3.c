/*
 * File: CH14.4.3.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-08, 4:16:06 pm
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-23, 2:17:12 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022
 *
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	--------------------------------------
 * 2022-02-20, 3:10:12 am	H.K.	Added Comments
 * 2022-02-19, 9:57:15 pm	H.K.	Added Comments
 * 2022-02-19, 6:26:55 pm	H.K.	Cleaning & change MAX as Variable for 
 *                                  i * Fib-Numbers
 * 2022-02-19, 4:55:14 pm	H.K.	Rekursiv added
 * 2022-02-08, 4:32:48 pm	H.K.	Iterativ added
 * 2022-02-08, 4:16:06 pm	H.K.	-start-
 */

#include <stdio.h>
#include <stdlib.h>

// Höchste Fibbonacci Folge, die errechnet werden soll. (Variable)
#define MAX 20

// Klassisch Iterativ, wird in einem Array gespeichert und verrechnet 
void fibIt() {

    // Definiert die ersten beiden Fibonacci Zahlen.
    int iFib[MAX];
    iFib[0] = 1;
    iFib[1] = 1;

    // Manuelle Ausgabe
    printf("1.Iterativ: %d\n2.Iterativ: %d\n", iFib[0], iFib[1]);

    // Die Formel zum erzeugen der Zahlen und printen
    for (int i = 2; i < MAX; i++) {
        iFib[i] = iFib[i - 1] + iFib[i - 2];
        printf("%d.Iterativ: %d\n", i + 1, iFib[i]);
    }
}

/*
* Funktion zur Rekursiven Rechnung der Fibonacci Folge mit zwei Argumenten.
* i als Zählervariable und ein Arraypointer eines in der Main 
* erstellten Arrays.
*/
void fibRe(int i, int* arrSpeicher) {
    /*
    * Letzter Index und vorletzter Index sind die ersten beiden    
    * Fibonacci Zahlen.
    * Der Array wird Rückwärts befüllt(am höchsten Index runter) 
    * mit den ersten beiden definierten Fibonacci Zahlen.
    * Darf nur in dem ersten Ausführen der Funktion ausgeführt 
    * werden und nicht in den rekursiven Ausführungen.
    */
    if (i == MAX - 1) {
        arrSpeicher[MAX - 1] = 1;
        arrSpeicher[MAX - 2] = 1;
    }
    
    /*
    * arrSpeicher[i - 2] ist der nächste Index nach den 
    * ersten beiden definierten Fibonacci Zahlen.
    * Rekursion entsteht in dem Variable i erniedrigt wird und  
    * der Funktion wird übergeben bis i die Zahl 2 des Indexes von dem Array
    * erreicht hat.
    * (Damit bei arrSpeicher[i-2] kein overflow entsteht.)
    */
    if (i >= 2) {
        arrSpeicher[i - 2] = arrSpeicher[i] + arrSpeicher[i - 1];
        fibRe(i-1, arrSpeicher);
    }
    
    /*
    * Ausgabe, wenn die Rekursion beendet ist.
    * MAX - i, damit 1, 2, 3, etc. richtig ausgeben wird vor 
    * dem String ".Rekursiv:".
    * if(i == 2) damit die Ausgabe  nicht in jeder rekursiven Ausführung
    * geprintet wird.
    */
    if (i == 2) {
        for (int i = MAX - 1; i >= 0; i--) {
            printf("%d.Rekursiv: %d\n", MAX - i, arrSpeicher[i]);
        }
    }
}

int main() {

    // Array wird erstellt
    int aSpeicher[MAX];

    // Ausführen der Funktionen
    fibIt();
    fibRe(MAX - 1, aSpeicher);

    return 0;
}