#include <stdio.h>
#include <stdlib.h>
void strlwrx(char *str)
{

    while (*str != '\0')
    {
        if (*str >= 48 && *str <= 57)
        {
            printf("%c\t", *str);
        }

        str++;
    }
}
int main()
{
    char Arr[20];
    printf("Enter String\n");
    scanf("%[^\n]", Arr);
    strlwrx(Arr);
    printf(Arr, "Modified String is %s");
    return EXIT_SUCCESS;
}