#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int rows;
    do
    {
        rows = get_int("rows: ");
    }
    while (rows < 1);
    for (int r = 0; r < rows; r++)
    {
        for(int c = rows; c > r ; c--)
        {
            printf("@");
        }
        printf("\n");
    }
}
