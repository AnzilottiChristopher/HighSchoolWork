#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int height;
     do
     {
        height = get_int("height");
     }
     while(height <1 || height>8);
     for(int a = 0; a<height; a++ )
     {
         for(int b = height-1; b>a;b--)
         {
             printf(" ");
         }
         for(int q = 0; q<a+1; q++)
         {
             printf("#");
         }
        printf("\n");
     }
}