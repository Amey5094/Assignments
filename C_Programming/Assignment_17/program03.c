#include <stdio.h>
#include <stdlib.h>
void Pattern(int iRows, int iCols)
{
    int i = 0, j = 0, iCount = 0;
    for (i = 1; i <= iRows; i++)
    {

        char ch = 'a';
        for (j = 1; j <= iCols; j++)
        {
            if (i % 2 != 0)
            {
                printf("%c\t", ch);
                ch++;
            }
            else
            {
                printf("%d\t", j);
            }
        }

        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter first number: \n");
    scanf("%d", &iValue1);
    printf("Enter second number: \n");
    scanf("%d", &iValue2);
    Pattern(iValue1, iValue2);
    return EXIT_SUCCESS;
}