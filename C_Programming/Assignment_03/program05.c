#include <stdio.h>
#include <stdlib.h>
char displayConvrt(char cValue)
{
    if (
        cValue == 'a' || cValue == 'A' ||
        cValue == 'e' || cValue == 'E' ||
        cValue == 'i' || cValue == 'I' ||
        cValue == 'o' || cValue == 'O' ||
        cValue == 'u' || cValue == 'U')
    {
        printf("%c is a vowel.\n", cValue);
    }
    else
    {
        printf("%c is not a vowel.\n", cValue);
    }
}

int main()
{
    char cIn = '\0';
    printf("Enter the Charcter\n");
    scanf("%c", &cIn);
    displayConvrt(cIn);
    return EXIT_SUCCESS;
}