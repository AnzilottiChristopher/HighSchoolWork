#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 5

// Candidates have name and points for each player
typedef struct
{
    string name;
    int points;
}
player;

// Array of candidates
player players[MAX];

// Number of candidates
int player_count;

void print_most(int x);

int main(int argc, string argv[])
{
    if (argc < 2)
    {
        printf("Usage: players [player ...]\n");
        return 1;
    }
    player_count = argc - 1;
    if (player_count > MAX)
    {
        printf("Maximum number of players is %i\n", MAX);
        return 2;
    }
    //index the names in the command line
    //assign point totals to each player
    for (int i = 0; i < player_count; i++)
    {
        players[i].name = argv[i + 1];
        players[i].points = get_int("%s scored: ", players[i].name);
    }
    //Set player[0]'s point total as most_points
    int most_points = players[0].points;
    //compare each of the remaining players point totals against most_points
    //if the player's total is greater, then make their point total most_points
    for (int i = 1; i < player_count; i++)
    {
        if(players[i].points > most_points)
        {
            most_points = players[i].points;
        }
    }

    print_most(most_points); //This sends most_points to x in the next function
}

void print_most(int x)
{
    //need to go through each player and see if their points match the most points.
    for(int i = 0; i < player_count; i++)
    {
        if(players[i].points == x)
        {
            printf("%s\n", players[i].name);
        }
    }
}


