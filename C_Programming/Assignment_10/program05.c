#include <stdio.h>
#include <stdlib.h>
double SquareMeter(int iNo)
{
    double dResult = 0.0;
    dResult = iNo * 0.0929;
    return dResult;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    printf("Enter the area in square feet\n");
    scanf("%d", &iValue);
    dRet = SquareMeter(iValue);
    printf("Area in square meters is %.2f\n", dRet);
    return EXIT_SUCCESS;
}