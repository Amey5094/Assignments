#include <stdio.h>
#include <stdlib.h>
void checkLeapYear(int year)
{
    if (year <= 0)

    {
        printf("Invalid Year\n");
    }
    else if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("It is leap Year\n");
    }
    else

    {
        printf("It is not leap Year\n");
    }
}
int main()
{
    int iYear = 0;
    printf("Enter a year\n");
    scanf("%d", &iYear);
    checkLeapYear(iYear);
    return EXIT_SUCCESS;
}