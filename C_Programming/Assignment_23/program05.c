#include <stdio.h>
#include <stdlib.h>
int CountWhite(char *str)
{
    int iCount = 0;
    while (*str != '\0')
    {
        if (*str == ' ')
        {
            iCount++;
            printf("%d\t", iCount);
        }

        str++;
    }
}
int main()
{
    char Arr[20];
    int iRet = 0;
    printf("Enter String\n");
    scanf("%[^\n]", Arr);
    iRet = CountWhite(Arr);
    printf("%d", iRet);
    return EXIT_SUCCESS;
}