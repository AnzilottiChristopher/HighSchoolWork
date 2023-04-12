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
    x = get_int("Pick a number: ");
    //# %10 will equal the last digit of the user's number
    //if x %10 == 0 or 5 then x is divisible by 5
    //Else x is not divisible by 5
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
    if(x % 3 != 0)
    {
        printf("%i is not divisible by 3\n",x);
    }
    else
    {
        int a = x/3;
        printf("3 x %i is %i\n", a,x);
    }
}
