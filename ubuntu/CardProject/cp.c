#define _DEFAULT_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 5
string suit[4];
string value[13];
char card[5][100];
void get_card(void);
int new_card;

int main(void)
{
    system("clear");
    for (int j = 0; j < MAX; j++)
    {
        get_card();

    }
    for (int j = 0; j < MAX; j++)
    {
        printf("card %i is %s\n", j + 1, card[j]);
    }
}

void get_card(void)
{
    srandom(time(NULL));
    int s = 0;
    int i = 0;
    for (int j = 0; j < MAX; j++)
    {
        s = random() % 4;
        i =  1 + random() % 13;
        if (s == 0)
        {
            suit[s] = "Spades";
        }
        if (s == 1)
        {
            suit[s] = "Hearts";
        }
        if (s == 2)
        {
            suit[s] = "Diamonds";
        }
        if (s == 3)
        {
            suit[s] = "Clubs";
        }
        if (i == 1)
        {
            value[i] = "Ace";
        }
        if (i > 1 && i < 10)
        {
            char c = 48 + i;
            value[i] = &c;
        }
        if (i == 10)
        {
            value[i] = "10";
        }
        if (i == 11)
        {
            value[i] = "Jack";
        }
        if (i == 12)
        {
            value[i] = "Queen";
        }
        if (i == 13)
        {
            value[i] = "King";
        }
        strcpy(card[j], value[i]);
        strcat(card[j], " of ");
        strcat(card[j], suit[s]);

           do

        {
            for(int x = 0; x < j; x++)

            {
                if(strcmp(card[x], card[j]) == 0)

                {

                }
                else
                {

                }
            }

        }
        while














    }
}
