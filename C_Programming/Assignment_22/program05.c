#include <stdio.h>
#include <stdlib.h>

void Pattern(int iNo)
{
    int iCount = 1;
    int i = 0;
    int iSum = 0;
    for (i = 1; i <= iNo; i++)
    {
        iSum = iCount * 2;
        printf("%d\t", iSum);
        iCount++;
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter a number\n");
    scanf("%d", &iValue);
    Pattern(iValue);
    return EXIT_SUCCESS;
}