#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    int x;
    int pennies;
    float c;
    float temp;
    int count = 0;

    do
    {
        x = get_int("Days in month: ");
    }
    while(x<27 || x>32);
    do
    {
        c = get_float("Amount of pennies on first day: ");
        temp = c;
    }
    while(c < 1);
    do
    {
        temp = temp*2;
        count++;
    }
    while(count != x);
    double z = temp/100.0;
    z = z - 0.01;
    printf("$%.2f\n",z);
}