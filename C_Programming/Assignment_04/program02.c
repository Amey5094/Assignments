#include <stdio.h>
#include <stdlib.h>
void checkEvenOdd(int iNo)
{
    if ((iNo % 2) == 0)
    {
        printf("It is a Even Number");
    }
    else
    {
        printf("It is a Odd Number");
    }
}   
int main()
{
    int iValue = 0;
    printf("Enter a Number\n");
    scanf("%d", &iValue);
    checkEvenOdd(iValue);
    return EXIT_SUCCESS;
}