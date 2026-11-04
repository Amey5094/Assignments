#include <stdio.h>
#include <stdlib.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    for (i = iRow; i >= 1; i--)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
}
int main()
{
    int iRow = 0;
    int iCol = 0;
    printf("Enter number of rows: ");
    scanf("%d", &iRow);
    printf("Enter number of columns: ");
    scanf("%d", &iCol);
    Pattern(iRow, iCol);
    return EXIT_SUCCESS;
}