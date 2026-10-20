#include <stdio.h>
#include <stdlib.h>
void calculateDiscount(float fAmt)
{
    // float fDiscount = 0.0f;
    float fAmount = 0.0f;

    if (fAmt < 1000)
    {
        printf("Payble Amount:%.2f\n", fAmount = fAmt);
    }
    else if (fAmt < 5000)
    {
        printf("Payble Amount:%.2f\n", fAmount = ((fAmt * 10) / 100) + fAmt);
    }
    else if (fAmt >= 5000)
    {
        printf("Payble Amount:%.2f\n", fAmount = ((fAmt * 20) / 100) + fAmt);
    }
    else
    {
        printf("Invalid Amount\n");
    }
}

int main()
{
    float fAmount = 0.0f;
    printf("Enter purchase amount\n");
    scanf("%f", &fAmount);
    calculateDiscount(fAmount);
    return EXIT_SUCCESS;
}