#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkSmall(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter  the charatcer\n");
    scanf("%c", &cValue);

    bRet = ChkSmall(cValue);
    if (bRet == TRUE)
    {
        printf("It is Small Case Character\n");
    }
    else
    {
        printf("It is not Small Case Character\n");
    }
    return EXIT_SUCCESS;
}