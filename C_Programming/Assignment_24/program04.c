#include <stdio.h>
#include <stdlib.h>

int LastChar(char *str, char ch)
{
    int iIndex = 0;
    int iLast = -1;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            iLast = iIndex;
        }
        str++;
        iIndex++;
    }
    return iLast;
}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter String\n");
    scanf("%99[^\n]", Arr);
    printf("Enter Character\n");
    scanf(" %c", &cValue);

    iRet = LastChar(Arr, cValue);
    if (iRet == -1)
    {
        printf("Character not found\n");
    }
    else
    {
        printf("Character found at index %d\n", iRet);
    }

    return EXIT_SUCCESS;
}