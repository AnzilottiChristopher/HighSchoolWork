#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int x = get_int("Pick an integer: ");
    for (int i = 1; i < x; i++)
    {
        int a = x / i;
        printf("%i, ", a);
    }
    printf("\n");
}
