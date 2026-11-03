#include <stdio.h>
#include <stdlib.h>
int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;
    while (iNo > 0)
    {
        iDigit = iNo % 10;
    if (iDigit != 0)
        {
            // iMult = iMult * iDigit;
            iMult;
        }
        iNo = iNo / 10;
    }
    return iMult;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter a number\n");
    scanf("%d", &iValue);
    iRet = MultDigits(iValue);
    printf("Multiplication of digits is: %d\n", iRet);
    return EXIT_SUCCESS;
}