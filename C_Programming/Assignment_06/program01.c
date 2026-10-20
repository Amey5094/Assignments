#include <stdio.h>
#include <stdlib.h>

void calculateElectricityBill(int iUntis)
{
    if (iUntis >= 0 && iUntis <= 100)
    {
        printf("Your Bill is: %d\n", (iUntis * 5));
    }
    else if (iUntis >= 101 && iUntis <= 200)
    {
        printf("Your Bill is: %d\n", (iUntis * 7));
    }
    else if (iUntis > 200)

    {
        printf("Your Bill is: %d\n", (iUntis * 10));
    }
    else
    {
        printf("Invalid Unit\n");
    }
}
int main()

{
    int iValue = 0;
    printf("Enter Units\n");
    scanf("%d", &iValue);
    calculateElectricityBill(iValue);
    return EXIT_SUCCESS;
}