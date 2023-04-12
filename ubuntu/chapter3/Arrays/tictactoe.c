#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 9
//The first MAX represent the row, the second MAX represents the column
//We want to have blanks, or X's or O's ... so we change the table type to string
string table[MAX][MAX];
//int table[Row][Column]
void print_table(int d);
void row_X(int d);
void row_O(int d);
void print_winner(int z);
int x = 0;
int p = 0;
int check = 0;
int draw = 0;
int main (void)
{
    int dimension = 3;
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
    for(int i = 0; i < 9; i++)
    {
        row_X(dimension);
        if(check == 1)
        {
            check = 0;
            row_X(dimension);
        }
        print_table(dimension);
        print_winner(dimension);
        row_O(dimension);
        if(check == 1)
        {
            check = 0;
            row_O(dimension);
        }
        print_table(dimension);
        print_winner(dimension);
        /*for(int j = 0; j < 3; j++)
        {
            for(int l = 0; l < 3; l++)
            {
                if(strcmp(table[j][l], " X ") == 0)
                {
                    draw++;
                }
            }
        }
        if(draw == 5)
        {
            printf("It's a draw!\n");
            exit(1);
        }*/
    }

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
void row_X(int d)
{
        do
        {
            x = get_int("Player (X) What row would you like to place your piece? Choose 0, 1, or 2: ");
        }
        while(x > 2 || x < 0);
        do
        {
            p = get_int("Player (X) What column would you like to place your piece? Choose 0, 1, or 2: ");
        }
        while(p > 2 || p < 0);

        if(strcmp(table[x][p], "___ ") != 0)
        {
            printf("That spot is already taken!\n");
            check++;
        }
        if(strcmp(table[x][p], "___ ") == 0)
        {
            table[x][p] = " X ";
        }



}
void row_O(int d)
{
    do
    {
        x = get_int("Player (O) What row would you like to place your piece? EX. 0, 1, or 2: ");
    }
    while(x > 2 || x < 0);
    do
    {
        p = get_int("Player (O) What column would you like to place your piece? EX. 0, 1, or 2: ");
    }
    while(p > 2 || p < 0);
    if(strcmp(table[x][p], "___ ") != 0)
        {
            printf("That spot is already taken!\n");
            check++;
        }
        if(strcmp(table[x][p], "___ ") == 0)
        {
            table[x][p] = " O ";
        }
}
void print_winner(int z)
{
    for(int r = 0; r < 3; r++)
    {
        int col_x = 0;
        for(int c = 0; c < 3; c++)
        {
            if(strcmp(table[r][c], " X ") == 0)
            col_x++;
            if(col_x == 3)
            {
                printf("Player (X) is the winner\n");
                exit(1);
            }
        }
    }
    for(int r = 0; r < 3; r++)
    {
        int col_O = 0;
        for(int c = 0; c < 3; c++)
        {
            if(strcmp(table[r][c], " O ") == 0)
            col_O++;
            if(col_O == 3)
            {
                printf("Player (O) is the winner\n");
                exit(1);
            }
        }
    }
    for(int c = 0; c < 3; c++)
    {
        int row_x = 0;
        for(int r = 0; r < 3; r++)
        {
            if(strcmp(table[r][c], " X ") == 0)
            row_x++;
            if(row_x == 3)
            {
                printf("Player (X) is the winner\n");
                exit(1);
            }
        }
    }
     for(int c = 0; c < 3; c++)
    {
        int row_o = 0;
        for(int r = 0; r < 3; r++)
        {
            if(strcmp(table[r][c], " O ") == 0)
            row_o++;
            if(row_o == 3)
            {
                printf("Player (O) is the winner\n");
                exit(1);
            }
        }
    }
    if(table[0][0] == table[1][1] && table[0][0] == table[2][2])
    {
        if(strcmp(table[0][0], " X ") == 0)
        {
            printf("Player (X) is the winner\n");
            exit(1);
        }
        if(strcmp(table[0][0], " O ") == 0)
        {
            printf("Player (O) is the winner\n");
            exit(1);
        }
    }
     if(table[0][2] == table[1][1] && table[0][2] == table[2][0])
    {
        if(strcmp(table[0][2], " X ") == 0)
        {
            printf("Player (X) is the winner\n");
            exit(1);
        }
        if(strcmp(table[0][2], " O ") == 0)
        {
            printf("Player (O) is the winner\n");
            exit(1);
        }
    }
}