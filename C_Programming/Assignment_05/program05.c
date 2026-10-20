#include <stdio.h>
#include <stdlib.h>

void checkCharacterType(char cValue)
{
    if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabet Character\n");
    }
    else if (cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase Alphabet Character\n");
    }
    else if (cValue >= '0' && cValue <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character\n");
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter a character\n");
    scanf("%c", &cValue);
    checkCharacterType(cValue);
    EXIT_SUCCESS;
}