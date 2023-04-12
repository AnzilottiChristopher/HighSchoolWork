#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main (void)
{
    long x;
    int place;
    int count;
    int isbn;
    int numbers = 9;
    int total = 0;

    do
    {
    x = get_long("Pick a ten digit number, ISBN: ");
    place = x;
    count = 0;
        do
        {
            place = place/10;
            count++;
        }
        while(place != 0);
    }
    while(count > 11 || x < 1 || count < 9);
    place = x/10;
    for(int i = 0; i < 10; i++)
    {
        isbn = place%10;
        place = place/10;
        total = total + isbn*numbers;
        numbers--;
    }
    total = total%11;
    int final = x%10;
    if(final == total)
    {
        printf("YES\n");
        return 0;
    }
    else
    {
        printf("NO\n");
    }

}
