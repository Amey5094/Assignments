#include <stdio.h>
#include <stdlib.h>

void Table(int iNo)
{
    for (int i = 10; i >= 1; i--)
    {
        printf(" %d\t", iNo * i);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number\n");
    scanf("%d", &iValue);
    Table(iValue);
    return EXIT_SUCCESS;
}