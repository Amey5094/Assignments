#include <stdio.h>
#include <stdlib.h>

void FactRev(int iNo)
{
    for (int i = iNo/2; i >= 1; i--)
    {
        if (iNo % i == 0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d", &iValue);

    printf("Factors in decreasing order:\n");
    FactRev(iValue);

    return EXIT_SUCCESS;
}