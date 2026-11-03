#include <stdio.h>
#include <stdlib.h>

int MultFact(int iNo)
{
    int iDigit = 0;
    int iMultFact = 1;
    while (iNo > 0)
    {
        for(iDigit = 1; iDigit <= iNo/2; iDigit++)
        {
            if (iNo % iDigit == 0)
            {
                iMultFact = iMultFact * iDigit;
            }
        }
        return iMultFact;
    }
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter a number\n");
    scanf("%d", &iValue);
    iRet = MultFact(iValue);
    printf("Product of factors: %d\n", iRet);
    return EXIT_SUCCESS;
}