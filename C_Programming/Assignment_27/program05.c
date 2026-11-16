#include <stdio.h>
#include <stdlib.h>

void DisplayReverse(char *str)
{
    char *p = str;

    // move p to the last character
    while (*p != '\0')
    {
        p++;
    }
    p--; // step back from '\0' to the last real character

    // print from the last character back to the first
    while (p >= str)
    {
        printf("%c", *p);
        p--;
    }
    printf("\n");
}

int main()
{
    char arr[100];

    printf("Enter String\n");
    scanf("%99[^\n]", arr);

    DisplayReverse(arr);

    return EXIT_SUCCESS;
}