#include <stdio.h>
#include <stdlib.h>
void checkMultipleDivisiblity(int iNo)
{
    if ((iNo % 3 == 0) && (iNo % 5 == 0))
    {
        printf("Divisible By both\n");
    }
    else if ((iNo % 3) == 0)
    {

        printf("Divisible By 3 only\n");
    }

    else if ((iNo % 5) == 0)
    {
        printf("Divisible By 5 only\n");
    }
    else
    {
        printf("Not Divisible by Either");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d", &iValue);
    checkMultipleDivisiblity(iValue);
    return EXIT_SUCCESS;
}