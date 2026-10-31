#include <stdio.h>
#include <stdlib.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while (iNo > 0)
    {

        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
        if (iDigit == 0)
        {
            printf("There is Zero\n");
        }
        else
        {
            printf("There is No Zero\n");
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number\n");
    scanf("%d", &iValue);
    DisplayDigits(iValue);
    return EXIT_SUCCESS;
}