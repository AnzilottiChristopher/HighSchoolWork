// Calculates how many pennies a user would get if their change doubles each day using command line information

#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define MAX_DAYS 31
#define MIN_DAYS 28


int main(int argc, string argv[])
{
    // Get a number of days in [28, 31]
    if (argc != 3)
    {
        printf("Usage: ./hello <Days in month> <Number of pennies>\n");
        return 1;
    }//Code from IDE website

    int days = atof(argv[1]);
    int pennies = atof(argv[2]);

    if (days < MIN_DAYS || days > MAX_DAYS)
    {
        printf("Between 28 and 31 days\n");
        return 1;
    }

    // Get a number of pennies in [0, inf)

    if (pennies <= 0)
    {
        return 1;
    }


    // Relatively few pennies required to get out of bounds of int
    long long total = pennies;

    // Add double the amount of pennies of the previous day each day
    for (int i = 1; i < days; i++)
    {
        total += pennies * pow(2, i);
    }

    // Output the total as dollars and cents only
    printf("$%.2f\n", ((double) total) / 100);
}
