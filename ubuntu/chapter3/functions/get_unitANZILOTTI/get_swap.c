#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int valid_int(string x);
void swap_int(int *c, int *d);
void print_int(int c, int d);
int a;
int b;

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./get_swap invalid integers\n");
        return 1;
    }
    a = valid_int(argv[1]);
    b = valid_int(argv[2]);
    swap_int(&a, &b); // & CAN be used to point out to a stored value for a variable that isn't globaly defined
    print_int(a, b);

}

int valid_int(string x)
{
    int digit_count1 = 0;
    int decimal_count1 = 0;
    if(x[0] != 45 && x[0] != 43 && isdigit(x[0]) == 0)
    {
        printf("Invalid integer\n");
        exit(1);
    }
    for(int i = 1; i < strlen(x); i++)
    {
        if(isdigit(x[i]) != 0)
        {
            digit_count1++;
        }
        else if(x[i] == 46)
        {
            decimal_count1++;
        }
        else
        {
            printf("Invalid integer\n");
            exit(1);//***** This terminates entire code*****
        }
    }
    if(digit_count1 == 0 || decimal_count1 > 0)
    {
        printf("Invalid integer\n");
        exit(1);//***** This terminates entire code*****
    }

    int t = atoi(x);
    return t;
}
void swap_int(int *c, int *d)
{
    a = *d; //*c Would mean we changed the value of what is stored in c's location
    b = *c;
}
void print_int(int c, int d)
{
   printf("a is %i b is %i\n", b, a);
   printf("a is %i b is %i\n", a, b);
}