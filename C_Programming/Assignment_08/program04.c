#include <stdio.h>
#include <stdlib.h>

void TableRev(int iNo)
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
    TableRev(iValue);
    return EXIT_SUCCESS;
}