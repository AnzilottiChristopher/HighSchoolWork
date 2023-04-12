#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int rows;
    do
    {
        rows = get_int("rows:");
    }
    while (rows<1);
    for (int r =1; r<rows; r++)
    {
        printf("@");
        printf("\n");

    for (int a = 0; a < r; a++)
    {
        printf("_");
    }
    }
    printf("@");
    printf("\n");
}
