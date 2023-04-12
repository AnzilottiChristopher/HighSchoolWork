#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int days;
int get_days(string prompt);

int main(void)
{
    days = get_days("Days in month: ");
    printf("Days is %i\n", days);
}

int get_days(string prompt)
{
    do
    {
         days = get_int("%s", prompt);
    }
    while(days < 28 || days > 31);
    return days;
}