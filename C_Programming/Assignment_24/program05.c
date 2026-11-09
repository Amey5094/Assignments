#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void StrRevX(char *str)
{
    int iStart = 0;
    int iEnd = strlen(str) - 1; // index of the last character
    char temp = '\0';

    while (iStart < iEnd)
    {
        temp = str[iStart]; // swap the two characters
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++; // move inward from both sides
        iEnd--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']c", Arr);

    StrRevX(Arr);
    printf("Modified String is %s\n", Arr);

    return EXIT_SUCCESS;
}