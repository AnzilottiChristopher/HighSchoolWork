#define _DEFAULT_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 11
string suit[4];
string value[13];
char card[5][100];
void get_card(int j);
void new_card(int o);
int total;
string hit;
void total_points(void);
int count = 1;
int stand;

int main(void)
{
    system("clear");
    count = 1;
    for (int j = 0; j < 2; j++)
    {
        get_card(j);
        count++;
    }
    printf("\n");
    for (int j = 0; j < 2; j++)
    {
        printf("card %i is %s\n", j + 1, card[j]);
    }
    total_points();
    printf("Your total is %i\n", total);
    hit = get_string("Do you want to 'hit' or 'stand': \n");
    if (strcmp(hit, "hit") == 0)
    {
        new_card(count);
        total_points();
        printf("Your total is %i\n", total);
        if(total > 21)
        {
            printf("Bust");
            return(1);
        }
    }
    if(strcmp(hit, "stand") == 0)
    {
        return(1);
    }
    for (int j = 0; j < count - 1; j++)
    {
        printf("card %i is %s\n", j + 1, card[j]);
    }
}

void get_card(int j)
{
    srandom(time(NULL) + j);
    int s = 0;
    int i = 0;
    int counter = 0;
    int p;
    do
    {
        s = random() % 4;
        i =  1 + random() % 13;
        value[i] = NULL;
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
            for(int x = 0; x < j; x++)
            {
                if(strcmp(card[j], card[x]) == 0)
                {
                    p = 1;
                }
                else
                {
                    p = 0;
                }
            }
    counter ++;
    }
    while(p == 1);
}

void new_card(int o)
{
    srandom(time(NULL) + o);
    int s = 0;
    int i = 0;
    int counter = 0;
    int p;
    do
    {
        s = random() % 4;
        i =  1 + random() % 13;
        value[i] = NULL;
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
        strcpy(card[o - 1], value[i]);
        strcat(card[o - 1], " of ");
        strcat(card[o - 1], suit[s]);
            for(int x = o + 1; x < MAX; x++)
            {
                if(strcmp(card[o], card[x]) == 0)
                {
                    p = 1;
                }
                else
                {
                    p = 0;
                }
            }
            for(int l = 0; l < o; l++)
            {
                if(strcmp(card[o], card[l]) == 0)
                {
                    p = 1;
                }
                else
                {
                    p = 0;
                }
            }
    counter ++;
    }
    while(p == 1);
    count++;

}
void total_points(void)
{
    total = 0;
    for(int i = 0; i < MAX; i++)
    {
        char c = card[i][0];
        if( c == 81 || c == 74 || c == 75 || c == 49)
        {
            total = total + 10;
        }
        if(c == 65)
        {
            int ace = get_int("You have an ACE, do you want a 1 or 11: \n");
            total = total + ace;
        }
        if(c == 50)
        {
            total = total + 2;
        }
        if(c == 51)
        {
            total = total + 3;
        }
        if(c == 52)
        {
            total = total + 4;
        }
        if(c == 53)
        {
            total = total + 5;
        }
        if(c == 54)
        {
            total = total + 6;
        }
        if(c == 55)
        {
            total = total + 7;
        }
        if(c == 56)
        {
            total = total + 8;
        }
        if(c == 57)
        {
            total = total + 9;
        }

    }
    }
