#include <stdio.h>
#include <stdlib.h>

void findGreater(int iFirst, int iSecond)
{
    if (iFirst > iSecond)
    {
        printf("Greater No is:%d\n", iFirst);
    }
    else
    {
        printf("Greater No is:%d\n", iSecond);
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter a two number\n");
    scanf("%d %d", &iValue1, &iValue2);
    findGreater(iValue1, iValue2);
    return EXIT_SUCCESS;
}