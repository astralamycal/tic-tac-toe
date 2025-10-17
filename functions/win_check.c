// insert imports here
#include <stdlib.h>
#include <stdio.h>

// main script
int win_check(char *board)
{
    int counter;
    for (counter = 0; counter < 4; counter++)
    {
        if (board[counter] == 'X' && board[counter + 3] == 'X' && board[counter + 6] == 'X') // collumn check for the user
        {
            return (1);
        }

        else if (board[counter] == 'O' && board[counter + 3] == 'O' && board[counter + 6] == 'O') // collumn check for the computer
        {
            return (2);
        }
    }

    for (counter = 0; counter < 9; counter = counter + 3)
    {
        if (board[counter] == 'X' && board[counter + 1] == 'X' && board[counter + 2] == 'X') // line check for the user
        {
            return (1);
        }

        else if (board[counter] == 'O' && board[counter + 1] == 'O' && board[counter + 2] == 'O') // line check for the computer
        {
            return (2);
        }
    }

    if (board[0] == 'X' && board[4] == 'X' && board[8] == 'X') // diagonal check 1 user
    {
        return (1);
    }

    else if (board[0] == 'O' && board[4] == 'O' && board[8] == 'O') // diagonal check 1 computer
    {
        return (2);
    }

    else if (board[2] == 'X' && board[4] == 'X' && board[6] == 'X') // diagonal check 2 user
    {
        return (1);
    }

    else if (board[2] == 'O' && board[4] == 'O' && board[6] == 'O') // diagonal check 2 computer
    {
        return (2);
    }

    else
    {
        return (0);
    }
}