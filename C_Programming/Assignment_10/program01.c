#include <stdio.h>
#include <stdlib.h>
double CircleArea(float fRadius)
{
    double dArea = 0.0;
    dArea = 3.14 * fRadius * fRadius;
    return dArea;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    printf("Enter the radius of the circle\n");
    scanf("%f", &fValue);
    dRet = CircleArea(fValue);
    printf("Area of the circle is %.2f\n", dRet);
    return EXIT_SUCCESS;
}