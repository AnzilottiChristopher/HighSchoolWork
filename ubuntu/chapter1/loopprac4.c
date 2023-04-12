#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x;
    do
    {
        x = get_int("Pick a positive integer");
    }
    while(x<1);
    int sum = number;
    for (int i = 1; i < x; i++);
    {
    int a = x-i;
    sum = sum +a;
    }
    printf("The sum of the first %i is %i.\n", x, sum);
}