#include <stdio.h>
#include <stdlib.h>
int Factorial(int iNo)
{
    int iFact = 1;
    for (int i = 1; i <= iNo; i++)
    {
        iFact = iFact * i;
    }
    printf("Factorial of number %d is %d\n", iNo, iFact);
}
int main()
{
    int iValue = 0;
    printf("Enter a number\n");
    scanf("%d", &iValue);
    Factorial(iValue);
    return EXIT_SUCCESS;
}