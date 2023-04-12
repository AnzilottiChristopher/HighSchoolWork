#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main (int argc, string argv[])
{
    int countUpper = 0;
    int countLower = 0;
    int countDigit = 0;
    int countSymbol = 0;
    int countAlpha = 0;
    int count;

    if(argc != 2)
    {
        printf("invalid password\n");
        return 1;
    }
    string password = argv[1];
    countUpper = 0;
    countLower = 0;
    countDigit = 0;
    countSymbol = 0;
    countAlpha = 0;
    count = strlen(argv[1]);
    for(int i = 0; i < count; i++)
    {
        char m = password[i];
        if(isalpha(m) != 0)
        {
            countAlpha++;
        }
        if(isdigit(m) != 0)
        {
            countDigit++;
        }
        if(islower(m) != 0)
        {
            countLower++;
        }
        if(isalnum(m) == 0)
        {
            countSymbol++;
        }
        if(isupper(m) == 0)
        {
            countUpper++;
        }
    }
    printf("Upper: %i, Lower: %i, Digits: %i, Symbols: %i, Alpha: %i\n",countUpper, countLower, countDigit, countSymbol, countAlpha);
    if(countDigit == 0 || countUpper == 0 || countAlpha == 0 || countSymbol == 0 || countLower == 0)
    {
        printf("Invalid Password\n");
        return 0;
    }
    else
    {
        printf("Valid Password\n");
    }
}