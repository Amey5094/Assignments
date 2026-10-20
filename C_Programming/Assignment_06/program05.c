#include <stdio.h>
#include <stdlib.h>

void calculateBonus(float fSalary, int iYears)
{
    float fBonus = 0;
    if (iYears > 10)
    {
        printf("Your Bonus is:%.f\n ", +(fSalary * 15) / 100);
    }
    else if (iYears >= 5 || iYears <= 10)
    {
        printf("Your Bonus is:%.f\n ", +(fSalary * 10) / 100);
    }
    else

    {
        printf("Your Bonus is:%.f\n ", +(fSalary * 5) / 100);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;
    printf("Enter Salary and Years of Service\n");
    scanf("%f %d", &fSalary, &iYears);
    calculateBonus(fSalary, iYears);
    return EXIT_SUCCESS;
}