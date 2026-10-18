#include <stdio.h>
#include <stdlib.h>

void printEven(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iNo >= iCnt; iCnt++)
    {
        printf("%d\t", (iCnt * 2));
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d", &iValue);
    printEven(iValue);
    return EXIT_SUCCESS;
}