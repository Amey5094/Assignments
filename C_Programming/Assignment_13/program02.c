

#include <stdio.h>
#include <stdlib.h>
int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 1)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number\n");
    scanf("%d", &iValue);
    iRet = CountOdd(iValue);
    printf("Count of even digits: %d\n", iRet);

    return EXIT_SUCCESS;
}