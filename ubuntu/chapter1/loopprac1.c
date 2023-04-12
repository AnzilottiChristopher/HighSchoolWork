#include <stdio.h>
#include <cs50.h>

int main (void)
{
    float number;
    do
    {
        number = get_float("Pick a number between 3 and 9");
    }
    while (number < 3 || number > 9);
    for (int i = 1; i < 4; i++);
    {
        //float multiple = number * i;
        printf("%.2f\n", number * i);
    }
}


