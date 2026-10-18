#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
int iNo = 0;
int Check(int iNo)
{
    if ((iNo % 5) == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number\n");
    scanf("%d", &iValue);
    bRet = Check(iValue);
    if (bRet == TRUE)
    {
        printf("Divide by 5");
    }
    else
    {
        printf("Not Divide by 5");
    }
    return EXIT_SUCCESS;
}