#include <stdio.h>
#include <stdlib.h>
void strlwrx(char *str)
{

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
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
    printf("Modified String is %s", Arr);
    return EXIT_SUCCESS;
}