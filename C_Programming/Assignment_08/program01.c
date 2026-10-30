#include <stdio.h>
#include <stdlib.h>
void Number(int iNo)
{
    int i = 0;
    if (iNo < 50)
    {
        printf("Small\n");
    }
    else if (iNo >= 50 && iNo <= 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number\n");
    scanf("%d", &iValue);
    Number(iValue);
    return EXIT_SUCCESS;
}