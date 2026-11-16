#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckVowels(char *str)
{
    while (*str != '\0')
    {
        if ((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') ||
            (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            return TRUE;
        }
        str++;
    }

    return FALSE;
}

int main()
{
    char arr[100];
    BOOL bRet = FALSE;

    printf("Enter String\n");
    scanf("%99[^\n]", arr);

    bRet = CheckVowels(arr);
    if (bRet == TRUE)
    {
        printf("Contains Vowels\n");
    }
    else
    {
        printf("There is no Vowels\n");
    }

    return EXIT_SUCCESS;
}