// insert imports here
#include <stdlib.h>
#include <stdio.h>
#include "print_tab.h"

// main script
void tic_tac_toe()
{
    char **boardValues = malloc(9 * sizeof(*boardValues)); // allocation of memory for board creation
    boardValues[8] = "\0";
    int counter = 0;                          // makes sure there is an end to board
    for (counter = 0; counter < 9; counter++) // initialises the values to empty spaces
    {
        boardValues[counter] = " ";
    }
    counter = 0;
    int choice = 0;
    while (counter < 9)
    {
        printf("Choisissez où mettre votre symbole (de 0 à 8 en partant du coin haut gauche):");
        scanf("%d", &choice);
        boardValues[choice] = "X";
        print_tab(boardValues);
        counter++;
    }
    free(boardValues);
}