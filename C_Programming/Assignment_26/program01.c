#include <stdio.h>
#include <stdlib.h>
void DisplayASCII()
{
    int i = 0;

    printf("Symbol\tDecimal\tHex\tOctal\n");
    printf("------------------------------\n");

    for (i = 0; i <= 255; i++)
    {
        if (i < 32 || i == 127)
        {
            printf("N/A\t%d\t%X\t%o\n", i, i, i); // non-printable
        }
        else
        {
            printf("%c\t%d\t%X\t%o\n", i, i, i, i);
        }
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}