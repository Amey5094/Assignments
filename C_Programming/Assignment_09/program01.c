#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (int i = 1; i <= iNo; i++)
    {
        printf("*"
               "\t"
               "#"
               "\t  ");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number\n");
    scanf("%d", &iValue);
    Display(iValue);
    return EXIT_SUCCESS;
}