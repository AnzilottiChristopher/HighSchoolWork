#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float x;
    x = get_float("Enter a temperature in Celsius");
    x = x * 9/5;
    x= x + 32;
    printf(" %.1f;\n", x);

}