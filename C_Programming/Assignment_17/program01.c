#include <stdio.h>
#include <stdlib.h>

void Pattern(int iRows, int iCols)
{
    int i = 0, j = 0;
    int iCount = 1;
    for (i = 1; i <= iRows; i++)
    {

        for (j = 1; j <= iCols; j++)
        {
            if (iCount > 9)

            {
                iCount = 1;
            }
            printf("%d\t", iCount);
            iCount++;
        }
        printf("\n\n");
    }
}
int main()
{
    int iRows = 0, iCols = 0;
    int iCount = 1;
    printf("Enter number of rows: \n");
    scanf("%d", &iRows);
    printf("Enter number of columns: \n");
    scanf("%d", &iCols);
    Pattern(iRows, iCols);
    return EXIT_SUCCESS;
}