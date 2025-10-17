// insert imports here
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

// main script
void print_tab() // char **tab shows the state of the board
{
    system("clear");
    int counter = 0;
    while (counter != 9)
    {
        if ((counter + 1) % 3 == 0)
        {
            printf("   \n");  // without end separation
            if (counter != 8) // avoids making separation at the end
            {
                printf("----------- \n"); // separation between lines
            }
        }

        else
        {
            printf("   |");
        }

        counter++;
    }
}