#include <stdio.h>
#include <stdlib.h>

void checkDivisiblity(int iValue)
{
    if ((iValue % 5) == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not divisible by 5\n");
    }
}
int main()
{
    int iNo = 0;
    printf("Enter a Number\n");
    scanf("%d", &iNo);
    checkDivisiblity(iNo);
    return EXIT_SUCCESS;
}