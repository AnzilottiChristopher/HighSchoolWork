#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 9

int prompt_int(string prompt);
void move_left(int a);
void move_right(int a);
void print_int(int a);
int list[MAX];
int s;
int i = 1;
string b;

int main(void)
{
    s = prompt_int("How many numbers? ");
    print_int(list[i]);
    printf("\n");
    do
    {
        b = get_string("Left or Right? ");
    }
    while(strcmp(b, "Left") != 0 && strcmp(b, "Right") != 0);
    if(strcmp(b, "Left") == 0)
    {
        move_left(list[i]);
        printf("\n");
    }
    if(strcmp(b, "Right") == 0)
    {
        move_right(list[i]);
        printf("\n");
    }

}


int prompt_int(string prompt)
{
    do
    {
        s = get_int("%s", prompt);
    }
    while(s > MAX || s < 1);
    return s;
}
void move_left(int a)
{
    int x = list[0];
    for(i = 0; i < s - 1; i++)
    {
        list[i] = i + 2;
        printf("%i, ", list[i]);
    }
    list[s] = x;
    printf("%i", list[s]);

}
void move_right(int a)
{
    int x = s;
    int c = 2;
    list[0] = x;
    printf("%i, ", list[0]);
    for(i = 0; i < s - 1; i++)
    {
        list[i] = c - 1;
        printf("%i, ", list[i]);
        c++;
    }

}
void print_int(int a)
{
    for(i = 0; i < s; i++)
    {
        list[i] = i + 1;
        printf("%i, ", list[i]);

    }
}