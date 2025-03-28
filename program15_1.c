#include <stdio.h>

float CalculatePercentage(int iMarks, int iTotal)
{
    auto float fPercentage = 0.0f;
    fPercentage = (((float)iMarks / (float)iTotal) * 100);
    return fPercentage;
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto float fRet = 0.0f;

    printf("Enter the Marks : ");
    scanf("%d", &iValue1);

    printf("Enter the Total Marks : ");
    scanf("%d", &iValue2);

    fRet = CalculatePercentage(iValue1, iValue2);

    printf("The Percentage is : %f", fRet);
    return 0;
}

// Typecasting is Used Here the input is taken as integer but calculation and the answer give the float datatype output
// For Some time the input consider as float for calculation and proper output