#include <stdio.h>
#include <stdlib.h>
void RangeDisplayEven(int iStart, int iEnd)
{
    for (int i = iStart; i <= iEnd; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter the starting number\n");
    scanf("%d", &iValue1);
    printf("Enter the ending number\n");
    scanf("%d", &iValue2);
    RangeDisplayEven(iValue1, iValue2);
    return EXIT_SUCCESS;
}