#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
    if(argc != 4)
    {
        printf("Usage: ./calc <Number> <Operation> <Number>\n");
        return 1;
    }
    /*if((strcmp(argv[2], "x") != 120) || (strcmp(argv[2], "%") != 37) || (strcmp(argv[2], "+") != 43) || (strcmp(argv[2], "-") != 45) || (strcmp(argv[2], "/") != 47))
    {
        printf("Usage: ./calc <Number> <x,-,+,/> <Number>\n");
        return 1;
    }*/

    if(strcmp(argv[2],"x") == 0)
    {
        float first = atof(argv[1]);
        float second = atof(argv[3]);
        float multiply = first * second;
        printf("%f\n", multiply);
    }
    if(strcmp(argv[2],"-") == 0)
    {
        float sub = atof(argv[1]);
        float sub2 = atof(argv[3]);
        float subtract = sub - sub2;
        printf("%f\n", subtract);
    }
    if(strcmp(argv[2],"+") == 0)
    {
        float sub3 = atof(argv[1]);
        float sub4 = atof(argv[3]);
        float add = sub3 + sub4;
        printf("%f\n", add);
    }
    if(strcmp(argv[2],"/") == 0)
    {
        int test = atof(argv[1]);
        if(test % 2 != 0)
        {
            float sub5 = atof(argv[1]);
            float sub6 = atof(argv[3]);
            float q = (float)(sub5 / sub6);

            printf("%f\n", q);
        }

    }
    if(strcmp(argv[2],"%") == 0) //Needs an if statemant just like divide
    {
        int test = atof(argv[1]);
        /*if(test % 2 == 0) //This if statement could be messing it up because of CONDITION
        {
            int sub9 = atof(argv[1]);
            int sub10 = atof(argv[3]);
            int ModEnd = sub9 % sub10;
            printf("%i\n", ModEnd);
        }
        else //This else statement doesn't work*/

            float sub11 = atof(argv[1]);
            float sub12 = atof(argv[3]);
            int a = (int)(sub11 / sub12);
            float ModEnding = sub11 - (sub12 * a);
            printf("%f\n", ModEnding);

    }
}