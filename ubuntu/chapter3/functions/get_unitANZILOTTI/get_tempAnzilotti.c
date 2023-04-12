#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

string get_unit(string prompt);
float valid_temp(string a);
void print_temp(float t, string u);
string unit;


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./get_tempAnzilotti invalid temperature\n");
        return 1;
    }
    float temp = valid_temp(argv[1]);
    unit = get_unit("F, C, or K: ");
    printf("%f %s\n", temp, unit);
}

float valid_temp(string a)
{
    int digit_count = 0;
    int decimal_count = 0;
    for(int i = 0; i < strlen(a); i++) //can't use argv because the function doesn't know what argv[1] but it knows "a"
    {
        if(isdigit(a[i]) != 0)
        {
            digit_count++;
        }
        else if(a[i] == 46)
        {
            decimal_count++;
        }
        else
        {
            printf("Invalid temp\n");
            exit(1);//***** This terminates entire code*****
        }
    }
    if(digit_count == 0 || decimal_count > 1)
    {
        printf("Invalid temp\n");
        exit(1);//***** This terminates entire code*****
    }
    float temp = atof(a);
    return temp;
}

string get_unit(string prompt)
{
    do
    {
         unit = get_string("%s", prompt);

    }
    while(strcmp(unit,"K") != 0 && strcmp(unit,"F") != 0 && strcmp(unit,"C") != 0);
    return unit;
}
void print_temp(float t, string u)
{
    printf("temp is %.1f%s\n", t, u);
}