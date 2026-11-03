#include <stdio.h>
#include <stdlib.h>

float Percentage(int totalMarks, int obtainedMarks)
{
    float fPercentage = 0.0f;
    fPercentage = (float)obtainedMarks / totalMarks * 100;
    if (totalMarks <= 0 && obtainedMarks < 0)
    {
        printf("Invalid input. Total marks should be greater than zero and obtained marks should be a non-negative number.\n");
        return 0; // Return an error value
    }
    return fPercentage;
}
int main()
{
    int iTotalMarks = 0, iObtainedMarks = 0;
    float fRet = 0.0f;

    printf("Enter total marks\n");
    scanf("%d", &iTotalMarks);
    printf("Enter obtained marks\n");
    scanf("%d", &iObtainedMarks);

    fRet = Percentage(iTotalMarks, iObtainedMarks);

    printf("Percentage is: %.2f%%\n", fRet);

    return EXIT_SUCCESS;
}