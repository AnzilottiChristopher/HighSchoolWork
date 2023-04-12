#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

float currency;
string unit;
float valid_currency(string CLA);
string get_currency(string prompt);
float convert_currency(float c, string u);
void print_currency(float c, string u);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("invalid currency\n");
        return 1;
    }
    currency = valid_currency(argv[1]);
    unit = get_currency("USD or Euros? ");
    currency = convert_currency(currency, unit);
    print_currency(currency, unit);
}
float valid_currency(string CLA)
//we did this in get_temp
{
 int digit_count = 0;
    int decimal_count = 0;
    for(int i = 0; i < strlen(CLA); i++) //can't use argv because the function doesn't know what argv[1] but it knows "a"
    {
        if(isdigit(CLA[i]) != 0)
        {
            digit_count++;
        }
        else if(CLA[i] == 46)
        {
            decimal_count++;
        }
        else
        {
            printf("Invalid currency\n");
            exit(1);//***** This terminates entire code*****
        }
    }
    if(digit_count == 0 || decimal_count > 1)
    {
        printf("Invalid currency\n");
        exit(1);//***** This terminates entire code*****
    }
    currency = atof(CLA);
    return currency;
}
string get_currency(string prompt)
//We did this in get_temp
{
    do
        {
            unit = get_string("%s", prompt);

        }
    while(strcmp(unit,"USD") != 0 && strcmp(unit,"Euros") != 0);
    return unit;
}
float convert_currency(float c, string u)
{
    //Either 2 ifs or an if else
    if(strcmp(u, "USD") == 0)
    {
        //0.83 euros to USD
        c = c * 0.83;
    }
    if(strcmp(u, "Euros") == 0)
    {
        c = c * 1.205;
    }
    return c;

}
void print_currency(float c, string u)
//unit is still the original currency and not the converted one
{
    if(strcmp(u, "USD") == 0)
    {
        printf("%.2f Euros\n", c);
    }
    if(strcmp(u, "Euros") == 0)
    {
        printf("%.2f USD\n", c);
    }
}