#include <stdio.h>
#include <stdlib.h>
void RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;
    for (int i = iStart; i <= iEnd; i++)
    {
        if (iStart < 0 && iEnd < 0)
        {
            printf("Invalid range\n");
            break;
        }
        else if (i % 2 == 0)
        {
            iSum = iSum + i;
        }
    }
    printf("Sum of Even range numbers is %d\n", iSum);
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    printf("Enter the starting number\n");
    scanf("%d", &iValue1);
    printf("Enter the ending number\n");
    scanf("%d", &iValue2);
    RangeSumEven(iValue1, iValue2);
    return EXIT_SUCCESS;
}
