/*
    Name: Grant Lane
    Date: July 12, 2022
    Program that prints the blocks in a pattern
    presented by the project description
*/
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    //run a do while that prompts for the height of the block
    do
    {
        height = get_int("Height: ");
    }
    while (height > 8 || height < 1);
    //For loop that runs the block algorithm
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height; j++) //prints the first half of blocks
        {
            (j > height - i) ? printf("#") : printf(" ");
        }
        printf(" ");
        for (int n = 0; n < i ; n++) // for loop that prints the 2nd half of the block
        {
            printf("#");
        }
        printf("\n");
    }

}