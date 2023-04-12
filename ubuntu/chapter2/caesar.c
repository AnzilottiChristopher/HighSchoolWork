#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./Caesar key\n");
        return 1;
    }
    for(int i = 0; i < strlen(argv[1]); i++)
    {
        if(isdigit(argv[1][i]) == 0)
        {
            printf("Usage: ./Caesar key\n");
            return 1;
        }
    }
    int key = atoi(argv[1]);
    string text = get_string("plaintext: ");
    printf("ciphertext: ");
    for(int j = 0; j < strlen(text); j++)
    {
        if(islower(text[j]) != 0)
        {
            char c = ((text[j] - 97) + key) % 26 + 97;
            printf("%c",c);
        }
        if(isupper(text[j]) != 0)
        {
            char c = ((text[j] - 65) + key) % 26 + 65;
            printf("%c",c);
        }
        if(isalpha(text[j]) == 0)
        {
            printf("%c",text[j]);
        }
    }
    printf("\n");
}



//Case doesn't change
//Non letters stay the same

