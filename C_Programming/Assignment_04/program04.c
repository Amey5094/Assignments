#include <stdio.h>
#include <stdlib.h>

void checkVotingEligiblity(int age)
{
    if (age < 0)
    {
        printf("Invalid Age\n");
    }
    else if (age >= 18)
    {
        printf("You are eligible for Voting\n");
    }
    else
        printf("You are not eligible for Voting\n");

    {
    }
}

int main()
{
    int iNo = 0;
    printf("Enter your age\n");
    scanf("%d", &iNo);
    checkVotingEligiblity(iNo);
    return EXIT_SUCCESS;
}