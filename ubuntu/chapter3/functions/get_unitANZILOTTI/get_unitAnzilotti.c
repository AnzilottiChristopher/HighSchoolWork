#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

string unit;
string get_unit(string prompt);


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./get_unitAnzilotti invalid temperature\n");
        return 1;
    }
    unit = get_unit("F, C, or K: ");
    printf("The temp is %i %s\n", atoi(argv[1]), unit);
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