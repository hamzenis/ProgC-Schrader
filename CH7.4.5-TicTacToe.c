/*
 * File: CH7.4.5-TicTacToe.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-01-08, 1:15:12 am
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-20, 7:00:30 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-20, 6:57:33 pm	H.K.	-start-
 */

#include <stdio.h>
#include <stdlib.h>

// define clearscreen for windows and unix systems
// enable the corresponding definition for unix or windows
// #define UNIX  1

#define WINDOWS 1

#ifdef WINDOWS
#define CLEARSCREEN  for (int i = 0; i < 24; i++) printf("\n")
#else
#define CLEARSCREEN  system("clear")
#endif

// function prototypes
void displayBoard();
int verifySelection(int, int);
int isWinningBoard(char);
void checkForWin();
void clearScreen();

// global variables
char board[3][3];
char cWhoWon = ' ';
int  iCurrentPlayer = 0;

// begin main function
int main() {
    int iSquareNum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }

    displayBoard();

    while (cWhoWon == ' ') {
        printf("\n%c\n", cWhoWon);
        if (iCurrentPlayer == 1 || iCurrentPlayer == 0) {
            printf("\nPlayer X\n");
            printf("Enter an available square number (1-9): ");
            scanf("%d", &iSquareNum);
            if (verifySelection(iSquareNum, iCurrentPlayer) == 1)
                iCurrentPlayer = 1;
            else
                iCurrentPlayer = 2;

        }
        else {
            printf("\nPlayer 0\n");
            printf("Enter an available square number (1-9): ");
            scanf("%d", &iSquareNum);
            if (verifySelection(iSquareNum, iCurrentPlayer) == 1)
                iCurrentPlayer = 2;
            else
                iCurrentPlayer = 1;

        } // end if
        displayBoard();
        checkForWin();
    } // end while
}

// function definitions

void displayBoard() {
    CLEARSCREEN;
    printf("\n\t|\t|");
    printf("\n\t|\t|");
    printf("\n%c\t|%c\t|%c", board[0][0], board[0][1], board[0][2]);
    printf("\n--------|-------|-------");
    printf("\n\t|\t|");
    printf("\n%c\t|%c\t|%c", board[1][0], board[1][1], board[1][2]);
    printf("\n--------|-------|-------");
    printf("\n\t|\t|");
    printf("\n%c\t|%c\t|%c", board[2][0], board[2][1], board[2][2]);
    printf("\n\t|\t|");
}

int verifySelection(int iSquare, int iPlayer) {
    int row;
    int collum;
    /*
    * Switch Case für die Eingabe des Nutzers.
    * Die jeweilige Eingabe wird in row & collum übersetzt.
    */
    switch (iSquare) {
    case 9:
        row = 2;
        collum = 2;
        break;
    case 8:
        row = 2;
        collum = 1;
        break;
    case 7:
        row = 2;
        collum = 0;
        break;
    case 6:
        row = 1;
        collum = 2;
        break;
    case 5:
        row = 1;
        collum = 1;
        break;
    case 4:
        row = 1;
        collum = 0;
        break;
    case 3:
        row = 0;
        collum = 2;
        break;
    case 2:
        row = 0;
        collum = 1;
        break;
    case 1:
        row = 0;
        collum = 0;
        break;

    }
    if (board[row][collum] == ' ' && (iPlayer == 1 || iPlayer == 0)) {
        board[row][collum] = 'X';
        return 0;
    }
    else if (board[row][collum] == ' ' && iPlayer == 2) {
        board[row][collum] = '0';
        return 0;
    }
    else
        return 1;
}

int isWinningBoard(char cWin) {
    if (board[0][0] == cWin && board[0][1] == cWin && board[0][2] == cWin) {
        cWhoWon = cWin;
        return 1;
    }
    else if (board[1][0] == cWin && board[1][1] == cWin && board[1][2] == cWin) {
        cWhoWon = cWin;
        return 1;
    }
    else if (board[2][0] == cWin && board[2][1] == cWin && board[2][2] == cWin) {
        cWhoWon = cWin;
        return 1;
    }
    else if (board[0][0] == cWin && board[1][0] == cWin && board[2][0] == cWin) {
        cWhoWon = cWin;
        return 1;
    }
    else if (board[0][1] == cWin && board[1][1] == cWin && board[2][1] == cWin) {
        cWhoWon = cWin;
        return 1;
    }
    else if (board[0][2] == cWin && board[1][2] == cWin && board[2][2] == cWin) {
        cWhoWon = cWin;
        return 1;
    }
    else if (board[0][0] == cWin && board[1][1] == cWin && board[2][2] == cWin) {
        cWhoWon = cWin;
        return 1;
    }
    else if (board[0][2] == cWin && board[1][1] == cWin && board[2][0] == cWin) {
        cWhoWon = cWin;
        return 1;
    }
    else
        return 0;
}

void checkForWin() {
    int catTotal = 0;

    // check X
    if (isWinningBoard('X')) {
        printf("\nX Wins!");
        return;
    }
    else {
        if (isWinningBoard('0')) {
            printf("\n0 Wins!");
            return;
        }
        else {
            // check for draw game
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (board[i][j] != ' ')
                        catTotal += 1;
                }
            }
            if (catTotal == 9) {
                cWhoWon = 'C';
                printf("\nCAT Game!\n");
                return;
            }
        }
    }
}
