#include <stdio.h>
#include <stdlib.h>
int OddFactorial(int iNo)
{
    int iFact = 1;
    for (int i = 1; i <= iNo; i++)
    {
        if (i % 2 == 1)
        {
            iFact = iFact * i;
        }
    }
    return iFact;
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