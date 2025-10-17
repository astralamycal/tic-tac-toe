// insert imports here
#include <stdlib.h>
#include <stdio.h>
#include "print_tab.h"

// main script
void tic_tac_toe()
{
    char **boardValues = malloc(9 * sizeof(*boardValues)); // allocation of memory for board creation
    boardValues[8] = "\0";                                 // makes sure there is an end to board
    for (int i = 0; i < 9; i++)                            // initialises the values to empty spaces
    {
        boardValues[i] = " ";
    }
    print_tab(boardValues);
    free(boardValues);
}