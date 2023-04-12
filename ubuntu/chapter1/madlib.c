#include <stdio.h>
#include <cs50.h>

int main (void)
{
    string noun = get_string("Enter a noun");
    string adjective = get_string("Enter an adjective");
    string verb = get_string("Enter a verb");
    printf("My mom told me that if I didn't start talking to %s that she was going to %s in a very %s way\n", noun, adjective, verb);
}
