#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    int x;
    int place;
    int count;
    int total = 0;

    do
    {
    x = get_int("Pick a positive integer: ");
    place = x;
    count = 0;
        do
        {
            place = place/10;
            count++;
        }
        while(place != 0);
    }
    while(count > 6 || x < 1);
    for(int i =0; i<3; i++)
    {
        int c = pow(10,1);
        int a = (x / c) %10;
        total = total + a*c;
    }
    printf("%i\n",total); //Something went wrong
}