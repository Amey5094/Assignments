#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        printf("It is Even Number\n");
    }
    else
    {
        printf("It is Odd Number\n");
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter the Number\n");
    scanf("%d", &iValue);
    bRet = checkEven(iValue);
    return EXIT_SUCCESS;
}