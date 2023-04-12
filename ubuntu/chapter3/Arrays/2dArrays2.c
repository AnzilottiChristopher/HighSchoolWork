#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 9
//The first MAX represent the row, the second MAX represents the column
//We want to have blanks, or X's or O's ... so we change the table typle to string 
string table[MAX][MAX];
//int table[Row][Column]
void print_table(int d);

int main (void)
{
    int dimension;
    //Ensure we have a valid single digit dimension
    do
    {
        dimension = get_int("What dimension? ");
        if (dimension < 1 || dimension > 9)
        {
            printf("Enter a single digit dimension\n");
        }
    }
    while (dimension < 1 || dimension > 9);
    //fill table
    int count = 0;
    for (int r = 0; r < dimension; r++)
    {
        //Fill in the table row by row... This starts with row 0
        //Every time r increments I go to the next row
        for (int c = 0; c < dimension; c++)
        //Fill in each column for row r
        //Every time c increments I go to the table value to the right
        {
            table[r][c] = "___ "; //3 underscores and a space
            count++;
        }
    }
    //Dimension has to be "passed" to print_table because it's locally defined
    print_table(dimension);
}

void print_table(int d)
{
    for (int r = 0; r < d; r++)
    {
        for (int c = 0; c < d; c++)
        {
            printf("%s ", table[r][c]);
        }
        //Print a new line once you reach the end of the row
        printf("\n");
    }
}

