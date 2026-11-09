#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckChar(char *str, char ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE; 
}

int main()
{
    char Arr[100];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter String\n");
    scanf("%99[^\n]", Arr);
    printf("Enter Character\n");
    scanf(" %c", &cValue);

    bRet = CheckChar(Arr, cValue);
    if (bRet == TRUE)
    {
        printf("Character Found\n");
    }
    else
    {
        printf("Character not Found\n");
    }
    return EXIT_SUCCESS;
}