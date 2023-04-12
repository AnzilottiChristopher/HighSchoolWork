#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    int number = get_int("enter an integer");
    printf("your number is %i\n", number);
    int a = 2 * number;
    int b = 3 * number;
    int c = 4 * number;
    int d = 5 * number;
    printf("The next four multiples are %i, %i, %i, and %i\n",a,b,c,d);
    int sum = number + a + b + c + d;
    printf("the sum of your number and the next four multiples is %i\n", sum);
}