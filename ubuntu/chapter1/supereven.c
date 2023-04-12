#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    int x;
    int temp;
    int place;
    int count;
    int sqr;
    int i;

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
   int power = 0;
   do
   {
       temp = temp/2;
       power ++;
   }
   while(temp %2 == 0);
   if(temp == 1)
   {
       printf("%i is super even. %i = 2^%i\n",x,x,power);
       return 0;
   }
   else
   {
       printf("%i is not super even\n",x);
   }
}