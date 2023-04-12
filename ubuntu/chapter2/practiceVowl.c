#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
    string text = get_string("Enter Text");
    int x = strlen(text); 
    int vowel = 0;
    int consonant = 0;
    for(int i = 0; i < x; i++)
    {
        if(isalpha(text[i]) != 0)
        {
            if (strcmp(&text[i], "a") == 0) || (strcmp(&text[i], "e") == 0) || (strcmp(&text[i], "i") == 0) || (strcmp(&text[i], "o") == 0) || (&strcmp(text[i], "u") == 0)
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }
    printf("Consonants: %i, Vowels: %i,\n",consonant, vowel); //Code doesn't work :(
}