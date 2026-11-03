#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
int iNo1, iNo2;
BOOL CheckEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter First numbers\n");
    scanf("%d", &iValue1);
    printf("Enter Second numbers\n");
    scanf("%d", &iValue2);

    iRet = CheckEqual(iValue1, iValue2);
    if (iRet == TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return EXIT_SUCCESS;
}