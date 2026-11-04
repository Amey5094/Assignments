#include <stdio.h>
#include <stdlib.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCount = 1;
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", iCount++);
        }
        printf("\n");
    }
}
int main()
{
    int iRow = 0;
    int iCol = 0;
    printf("Enter number of rows: \n");
    scanf("%d", &iRow);
    printf("Enter number of columns: \n");
    scanf("%d", &iCol);
    Pattern(iRow, iCol);
    return EXIT_SUCCESS;
}