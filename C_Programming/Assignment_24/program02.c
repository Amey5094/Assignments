#include <stdio.h>
#include <stdlib.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
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

    iRet = CountChar(Arr, cValue);
    printf("Character frequency is %d", iRet);

    return EXIT_SUCCESS;
}