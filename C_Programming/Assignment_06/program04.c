#include <stdio.h>
#include <stdlib.h>

void checkTrangle(int iSide1, int iSide2, int iSide3)
{
    if (iSide1 < 0 || iSide2 < 0 || iSide3 < 0)
    {
        printf("Invalid Triangle (sides must be positive)\n");
    }
    else if ((iSide1 + iSide2) > iSide3 && (iSide2 + iSide3) > iSide1 && (iSide1 + iSide3) > iSide2)
    {
        printf("Valid Trangle\n");
    }
    else
    {
        printf("Invalid Trangle\n");
    }
}
int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;
    printf("Enter three sides:\n");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    checkTrangle(iSide1, iSide2, iSide3);
    return EXIT_SUCCESS;
}