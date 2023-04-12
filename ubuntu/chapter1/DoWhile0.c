#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int quarters;
    do
    {
        quarters = get_int("Amount of quarters");
    }
    while (quarters < 0);
    //If a user enters a value less than 0 the user will be reprompted to something else
    int n;
    do
    {
        n = get_int("Single digit number");
    }
    while (n < 1 || n > 10);
    // The || means or, && means and

}