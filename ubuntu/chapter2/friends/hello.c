#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./hello <name>\n");
        return 1;
    }//Code from IDE website

    printf("Hello, %s!\n", argv[1]);
}