// Libraries for the code
#include <cs50.h>
#include <stdio.h>

// Gets height from user
int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

// Finds number of spaces
    for (int row = 1; row <= height; row++)
    {
        int spaces = height - row;

// Prints the correct spaces
        for (int i = 0; i < spaces; i++)
        {
            printf(" ");
        }

// Prints the correct #
        for (int j = 0; j < row; j++)
        {
            printf("#");
        }

// Prints the 2 spaces
        printf("  ");

// Prints the final #s
        for (int k = 0; k < row; k++)
        {
            printf("#");
        }
        printf("\n");

    }
}