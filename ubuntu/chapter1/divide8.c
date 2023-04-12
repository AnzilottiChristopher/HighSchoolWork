#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    int x;
    int temp;
    int place;
    int count;

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
    temp = x;
    temp = temp %1000;
    temp = temp / 8;
    if(temp %1 == 0)
    {
        place = x/8;
        printf("8 x %i = %i\n",place,x); //Doesn't work correctly
        return 0;
    }
    else
    {
        printf("%i is not divisible by 8\n",x);
        return 0;
    }
}