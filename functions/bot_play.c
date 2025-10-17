// insert imports here
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

// main script
void bot_play(char *board)
{
    int random = 9;
    while (board[random] != ' ')
    {
        srand(time(NULL));
        random = rand() % 9;
    }
    board[random] = 'O';
}
