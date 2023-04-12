#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    int x = get_int("A number: ");
    int y = get_int("Another number: ");
    int z = x / y;
    float a = x;
    float b = y;
    float c = a / b;
    printf("Integers:  Sum is %i; Difference is %i; Product is %i; Quotient is %i\n", x + y, x - y, x * y, x / y);
printf("Floats:  Sum is %.1f; Difference is %.2f; Product is %.3f; Quotient is %.4f\n", a + b, a - b, a * b, a / b);}
