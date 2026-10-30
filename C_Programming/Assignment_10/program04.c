#include <stdio.h>
#include <stdlib.h>
int FhtoCs(float fTemp)
{
    int iResult = 0;
    iResult = (fTemp - 32) * 5 / 9;
    return iResult;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    printf("Enter the temperature in Fahrenheit\n");
    scanf("%f", &fValue);
    dRet = FhtoCs(fValue);
    printf("Temperature in Celsius is %.2f\n", dRet);
    return EXIT_SUCCESS;
}