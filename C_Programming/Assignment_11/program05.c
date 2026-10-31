#include <stdio.h>
#include <stdlib.h>
void RangeDisplayRev(int iStart, int iEnd)
{
    while (iEnd >= iStart)
    {
        if (iStart < 0 && iEnd < 0)
        {
            printf("Invalid range\n");
            break;
        }
        else
        {
            printf("%d\t", iEnd);
            iEnd--;
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    printf("Enter the starting number\n");
    scanf("%d", &iValue1);
    printf("Enter the ending number\n");
    scanf("%d", &iValue2);
    RangeDisplayRev(iValue1, iValue2);
    return EXIT_SUCCESS;
}
