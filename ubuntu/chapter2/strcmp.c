//Example Program:  Create a program called strcmp.c in your chapter 2 folder.  Copy and Paste the code below into your program.
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("invalid first name entered.\n");
        return 1;
    }
    if (strcmp(argv[1], "Ted") == 0)
    {
        printf("Hello, Ted!\n");
        return 0;
    }
    else
    {
        printf("Hey, you're not Ted\n");
    }
}
