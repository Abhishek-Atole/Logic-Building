#include <stdio.h>

float CalculatePercentage(int iMarks, int iTotal)
{
    auto float fPercentage = 0.0f;
    if( (iMarks < 0) ||  (iTotal< 0))                 //Filter to avoid the negative input because we cant accept the negative input
    {
        printf("Invalid Input\n");
        return fPercentage;
    }
    else                                              // Filter - to avoid the inva;lid inputs
    {
        printf("Invalid Input\n");
        return fPercentage;
    }
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

