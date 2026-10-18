#include <stdio.h>
#include <stdlib.h>

char displayConvrt(char cValue)
{
    if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue = cValue + 32);
    }
    else if (cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue = cValue - 32);
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter Character\n");
    scanf("%c", &cValue);
    displayConvrt(cValue);

    return EXIT_SUCCESS;
}