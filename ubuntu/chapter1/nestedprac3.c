#include <stdio.h>
#include <cs50.h>

int main (void)
{
   int rows;
    do
    {
        rows = get_int("rows:");
    }
    while (rows <1 || rows%2 == 0 );
    for(int a=0; a<rows/2; a++)
    {
      for(int c = rows/2; c>a; c--)
      {
        printf("_");

      }

        printf("@\n");
    }
    printf("@\n");
    for(int f = 0; f<rows/2; f++)
    {
     for(int z = -1 ; z<f; z++)
        {
         printf("_");
        }
         printf("@\n");
    }


}
