#include <stdio.h>
#include <stdlib.h>

void Display(char ch)
{
    printf("Decimal\t\t%d\n", ch);
    printf("Octal\t\t%#o\n", ch);
    printf("Hexadecimal\t%#X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c", &cValue);

    Display (cValue);

    return EXIT_SUCCESS;
}