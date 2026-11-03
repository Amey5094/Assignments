#include <stdio.h>
#include <stdlib.h>

void NonFact(int iNo)
{
    for (int i = 1; i < iNo; i++)
{
    if (iNo % i != 0)
    {
        printf("%d\t", i);
    }
}   
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d", &iValue);

    printf("Factors in decreasing order:\n");
    NonFact(iValue);

    return EXIT_SUCCESS;
}