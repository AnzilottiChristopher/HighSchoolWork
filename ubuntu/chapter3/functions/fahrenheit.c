#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

Global variable;
float get_fahrenheit(string a);
float get_celsius(string a);


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./fahrenheit <Celsius>\n");
        return 1;
    }
    string unit;
    do
    {
        unit = get_string("F or C: ");
    }
    while(strcmp("f", unit) != 0 && strcmp("c", unit) != 0)
    if(strcmp("f", unit) == 0)
    {
        float c = get_celsius(argv[1]);
    }
    float f = fahrenheit(argv[1])
    printf(".1%f\n", f)
}

float get_fahrenheit(string a)
{
    float celsius = atof(a);
    float fahrenheit = (celsius * 9) / 5 + 32;
    return fahrenheit;
}
float get_celsius(string a);
{
    float fahrenheit = atof(argv[1]);
    float celsius = (fahrenheit - 32) * 5 / 9
    return celsius;
}

