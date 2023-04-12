#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
    if(argc != 2)
    {
        printf("./vigenere <key>\n");
        return 1;
    }
    for(int l = 0; l < strlen(argv[1]); l++)
    {
        if(isdigit(argv[1][l]) != 0)
        {
            return 1;
        }
    }
   // int what = strlen(argv[1]);
   /* if(what != 3)
    {
        printf("Error: Need 3 letter key\n");
        return 1;
    }*/
    int key2 = strlen(argv[1]);
    string text = get_string("plaintext: ");
    int k = 0;
    printf("ciphertext: ");
    for(int j = 0; j < strlen(text); j++)
        {
            int test = k % key2;
            int key = argv[1][test];
            int final = key; //Really isn't needed
            if(isupper(final) != 0)
            {
                final = final - 65;
            }
            if(islower(final) != 0)
            {
                final = final - 97;
            }
            if(islower(text[j]) != 0)
            {
                char c = ((text[j] - 97) + final) % 26 + 97;
                printf("%c",c);
            }
            if(isupper(text[j]) != 0)
            {
                char c = ((text[j] - 65) + final) % 26 + 65;
                printf("%c",c);
            }
            if(isalpha(text[j]) == 0)
            {
                printf("%c",text[j]);
                k--;
            }
            if(isdigit(text[j]) != 0)
            {
                k--;
            }
            k++;
        }
        printf("\n");
}