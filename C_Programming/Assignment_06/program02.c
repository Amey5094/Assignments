#include <stdio.h>
#include <stdlib.h>

void checkAdmission(float fMarks, int iAge)
{
    if ((fMarks >= 60 && fMarks <= 100) && iAge >= 17)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible for Adimission\n");
    }
}
int main()
{
    float fMarks = 0.0f;
    int iAge = 0;
    printf("Enter Marks and age\n");
    scanf("%f %d", &fMarks, &iAge);
    checkAdmission(fMarks, iAge);
    return EXIT_SUCCESS;
}