#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    int squares;
    do
    {
        squares = get_int("How many perfect squares?");
    }
    while(squares < 1);
    int sum = 0;
    for(int i = 1; i < squares+1; i++)
    {
        int a = pow(i,2);
        sum = sum + a;
    }
    printf("The sum of the first %i squares is %i\n", squares, sum);


}
