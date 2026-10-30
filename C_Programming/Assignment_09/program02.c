#include <stdio.h>
#include <stdlib.h>
void DollarToINT(int iNo)
{
    int iResult = 0;
    iResult = iNo * 70;
    printf("Equivalent in Indian Rupees is %d\n", iResult);
}

int main()
{
    int iValue = 0;
    printf("Enter a number\n");
    scanf("%d", &iValue);
    DollarToINT(iValue);
    return EXIT_SUCCESS;
}