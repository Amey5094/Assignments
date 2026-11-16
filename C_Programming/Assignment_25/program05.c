#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
void DisplaySchedule(char chDiv)
{
    if (chDiv == 'A' || chDiv == 'a')
    {
        printf("Your Exam time is 7 AM\n");
    }

    else if (chDiv == 'B' || chDiv == 'b')
    {
        printf("Your Exam time is 8.30 AM\n");
    }
    else if (chDiv == 'C' || chDiv == 'c')
    {
        printf("Your Exam time is 9.20 AM\n");
    }
    else if (chDiv == 'D' || chDiv == 'd')
    {
        printf("Your Exam time is 10.30 AM\n");
    }
    else
    {
        printf("Input error\n");
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter your Division\n");
    scanf("%c", &cValue);
    DisplaySchedule(cValue);
    return EXIT_SUCCESS;
}