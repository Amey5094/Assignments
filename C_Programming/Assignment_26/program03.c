#include <stdio.h>
#include <stdlib.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {

        while (ch <= 'Z')
        {
            printf("%c\t", ch);
            ch++;
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {

        while (ch <= 'z')
        {
            printf("%c\t", ch);
            ch++;
        }
    }
    else
    {
        // other cases: print the same character
        printf("%c", ch);
    }

    printf("\n");
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character\n");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}