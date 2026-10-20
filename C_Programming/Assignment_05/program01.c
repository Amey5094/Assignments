#include <stdio.h>
#include <stdlib.h>

void findGreatest(int iNo1, int iNo2, int iNo3)
{
    if (iNo1 > iNo2 && iNo1 > iNo3)
    {
        return ("Greatest number is: %d\n", iNo1);
    }
    else if (iNo2 > iNo1 && iNo2 > iNo3)
    {
        return ("Greatest number is: %d\n", iNo2);
    }
    else
    {
        return ("Greatest number is: %d\n", iNo3);
    }
}
int main()  
{
    int iValue1 = 0, ivalue2 = 0, iValue3 = 0;
    printf("Enter three Numbers\n");
    scanf("%d %d %d", &iValue1, &ivalue2, &iValue3);
    findGreatest(iValue1, ivalue2, iValue3);
    return EXIT_SUCCESS;
}