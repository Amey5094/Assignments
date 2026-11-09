#include <stdio.h>
#include <stdlib.h>

void Pattern(int iNo)
{
    int iCount = iNo;
    int i = 0;
    for (i = 1; i <= iNo; i++)
    {
        printf("%d\t#\t", iCount);
        iCount--;
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