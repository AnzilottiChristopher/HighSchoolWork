#include <stdio.h>
#include <cs50.h>

int main (void)
{   //Make sure rows are positive
    int rows;
    do
    {
        //Rows = the answer given to the prompt
        rows = get_int("rows: ");
    }
    while (rows < 1);
    //To create a 2 dimensional printout we are creating a table
    //Tables are organized into rows and columns 
    //The outer for loop will control the row
        //The nested ofor loop(s) will control what is printed in the rows
    for (int r = 0; r < rows; r++)
    {
        for(int c = 0; c < r + 1; c++)
        {
            printf("@");
        }
        printf("\n");
    }
}

