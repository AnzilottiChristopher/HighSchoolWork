#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main (void)
{
    long x;
    long place;
    int count;
    int numbers = 9;
    int total = 0;
    int final;

    do
    {
    x = get_long("Credit Card Number: ");
    place = x;
    count = 0;
        do
        {
            place = place/10;
            count++;
        }
        while(place != 0);
    }
    while(count < 11 || x < 1);

    place = x;
    for(int i = 0; i < count; i++)
    {
        place = place/10;
        final = place%10;
        total = total + final*2;
       
    }
    printf("%i\n",total);
}