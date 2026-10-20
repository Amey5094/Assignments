#include <stdio.h>
#include <stdlib.h>
void checkNumber(int iNo)
{

    if (iNo > 0)
    {
        printf("It is Positive Number");
    }
    else if (iNo == 0)
    {
        printf("Zero");
    }
    else
    {
        printf("It is negative number");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a Number\n");
    scanf("%d", &iValue);
    checkNumber(iValue);
    return EXIT_SUCCESS;
}