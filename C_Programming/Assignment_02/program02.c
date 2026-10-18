#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > iCnt)
    {
        printf("*\n");
        iNo--;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d", &iValue);
    Display(iValue);
    return EXIT_SUCCESS;
}