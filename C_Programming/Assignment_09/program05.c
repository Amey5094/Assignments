#include <stdio.h>
#include <stdlib.h>
int FactorialDiff(int iNo)
{
    int iFactEven = 1, iFactOdd = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (int i = 1; i <= iNo; i++)
    {

        if (i % 2 == 0)
        {
            iFactEven = iFactEven * i;
        }
        else
        {
            iFactOdd = iFactOdd * i;
        }
    }
    return iFactEven - iFactOdd;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter a number\n");
    scanf("%d", &iValue);
    iRet = FactorialDiff(iValue);
    printf("Difference between factorial of even and odd numbers is %d\n", iRet);
    return EXIT_SUCCESS;
}