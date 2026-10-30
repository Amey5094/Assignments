#include <stdio.h>
#include <stdlib.h>
void MultipleDisplay(int iNo)
{
    int i = 0;
    int iAns = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i <= 5; i++)
    {
        iAns = i * iNo;
        printf("%d\t", iAns);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number\n");
    scanf("%d", &iValue);
    MultipleDisplay(iValue);
    return EXIT_SUCCESS;
}