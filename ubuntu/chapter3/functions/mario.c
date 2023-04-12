#include <cs50.h>
#include <stdio.h>
#include <string.h>

int height;				//we define height here to make it a global variable.
					//A global variable is known throughout our program.
int get_height(string prompt);		//output_type function_name(function input(s))
void print_table(int x);

int main (void)
{
    height = get_height("Height: ");	//Notice that “Height” is the input to the get_height function
					//int get_height(string prompt);  the string prompt is “Height: “

    print_table(height);			//This calls the print_table function.
					//void print_table(int x); the height is the input for int x
	string answer;
	do
	{
	    answer = get_string("Print again? ");
    	if(strcmp(answer,"yes") == 0)
    	{
    	    height = get_height("Height: ");
    	    print_table(height);
    	}
    	if(strcmp(answer,"no") == 0)
    	{
    	    return 0;
    	}
	}
	while(strcmp(answer,"yes") == 0);
}

int get_height(string prompt)
{
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    return height;			//This is what the function returns to the main body of the program.
}


void print_table(int x)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j < height - i; j++)
        {
            printf("_");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
