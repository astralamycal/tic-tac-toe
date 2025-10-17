// insert imports here
#include <stdlib.h>
#include <stdio.h>
#include "print_tab.h"
#include "win_check.h"

// main script
void tic_tac_toe()
{
    int testValue;                                 // variable to check the functioning of scanf
    char *boardValues = malloc(10 * sizeof(char)); // allocation of memory for board creation
    boardValues[9] = '\0';
    int counter = 0;                          // makes sure there is an end to board
    for (counter = 0; counter < 9; counter++) // initialises the values to empty spaces
    {
        boardValues[counter] = ' ';
    }

    counter = 0;
    int choice = 0;
    int winner = 0;

    while (counter < 9 && winner == 0) // handling of symbol placement
    {
        printf("Choose where to put your symbol :");
        testValue = scanf("%d", &choice);               // gets the exit code of the scanf
        if (testValue != 1 || choice < 1 || choice > 9) // test to see if value is correct
        {
            printf("Please choose a number between 1 and 9.\n"); // choosing between 1-9 is more logical than 0-8
            while (getchar() != '\n')
                ; // required to fix scanf for NaN
        }

        else if (boardValues[choice - 1] == ' ') // only if spot not taken already
        {
            boardValues[choice - 1] = 'X'; // places the user input on the board
            print_tab(boardValues);
            counter++;
            winner = win_check(boardValues);
        }

        else
        {
            printf("This spot is already taken!\n");
        }
    }

    if (winner == 1)
    {
        printf("The user won!\n");
    }

    else if (winner == 2)
    {
        printf("The computer won!\n");
    }

    else
    {
        printf("It's a draw...\n");
    }
    free(boardValues);
}