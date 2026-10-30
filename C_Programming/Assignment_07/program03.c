#include <stdio.h>
#include <stdlib.h>
void Display(int iNo)
{
    int i = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = -iNo; i <= iNo; i++)
    {
        printf("%d\t", i);
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