#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
    string text = get_string("Text: ");
    float count_letters = strlen(text);
    float number_letters = 0;
    float words = 0;
    float sentences = 0;
    for(int i = 0; i < count_letters; i++)
    {
        char check = text[i];
        if(isalpha(check) != 0)
        {
            number_letters++;
        }
        if(isspace(check) != 0)
        {
            words++;
        }
        if(check == 33 || check == 46 || check == 63)
        {
            sentences++;
        }
    }
    words++;
    float l = number_letters / words * 100;
    float s = sentences / words * 100;
    float index = 0.0585 * l - 0.296 * s - 15.8;
    int final = round(index);
    if(final < 17 && final > 0)
    {
        printf("Grade %i\n",final);
    }
    if(final > 16)
    {
        printf("Grade 16+\n");
    }
    if(final < 0)
    {
        printf("Before Grade 1\n");
    }
}
