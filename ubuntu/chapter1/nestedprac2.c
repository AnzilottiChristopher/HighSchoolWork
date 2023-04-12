#include <stdio.h>
#include <cs50.h>

int main (void)
{
   int rows;
    do
    {
        rows = get_int("rows:");
    }
    while (rows < 1);
    for(int c=0; c<rows;c++)
    {
    for(int r=rows-1; r>c; r--)
    {
        printf("_");
    }
    for(int a = 0; a < 1; a++)
    {
    printf("@");
    printf("\n");
    }
    }
}
