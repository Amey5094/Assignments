#include <stdio.h>
#include <stdlib.h>

int SumNonFact(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    for (iDigit = 1; iDigit < iNo; iDigit++)
    {
        if (iNo % iDigit != 0)
        {
            iSum = iSum + iDigit;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number\n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);
    printf("Sum of non-factors: %d\n", iRet);

    return EXIT_SUCCESS;
}