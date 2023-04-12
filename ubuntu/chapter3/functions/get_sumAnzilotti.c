#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int get_sum(int x, int y);

int main(void)
{
    int x = get_int("X: ");
    int y = get_int("Y: ");
    int z = get_sum(x, y);
    printf("The sum is %i\n", z);
}

int get_sum(int x, int y)
{
    int sum = x + y;
    return sum;
}