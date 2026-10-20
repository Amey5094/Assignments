#include <stdio.h>
#include <stdlib.h>
void displayGrade(float fMarks)
{
    if (fMarks >= 90 && fMarks <= 100)
    {
        printf("Grade is A\n");
    }
    else if (fMarks >= 75 && fMarks <= 89)
    {
        printf("Grade is B\n");
    }
    else if (fMarks >= 60 && fMarks <= 74)
    {
        printf("Grade is C\n");
    }
    else if (fMarks >= 40 && fMarks <= 59)
    {
        printf("Grade is D\n");
    }
    else

    {
        printf("Fail\n");
    }
}
int main()
{
    float fGrade = 0.0f;
    printf("Enter Marks\n");
    scanf("%f", &fGrade);
    displayGrade(fGrade);
    return EXIT_SUCCESS;
}