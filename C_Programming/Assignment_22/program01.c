#include <stdio.h>
#include <stdlib.h>

void Pattern(int iNo)
{
    char ch = '\0';
    ch = 'A';
    int i = 0;
    for (i = 1; i <= iNo; i++)
    {
        printf("%c\t", ch);
        ch++;
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter a number\n");
    scanf("%d", &iValue);
    Pattern(iValue);
    return EXIT_SUCCESS;
}