#include <stdio.h>
#include <stdlib.h>

int Difference(char *str)
{
    int iCnt = 0;
    int iCntCapital = 0;
    int iCntSmall = 0;
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iCntSmall++;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            iCntCapital++;
        }
        str++;
    }

    iCnt = iCntCapital - iCntSmall;
    return iCnt;
}
int main()
{
    char arr[20];
    int iRet = 0;
    printf("Enter String\n");
    scanf("%[^'\n']s", arr);
    iRet = Difference(arr);
    printf("%d", iRet);
    return EXIT_SUCCESS;
}