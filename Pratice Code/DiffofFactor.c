#include <stdio.h>

// Function to calculate the difference between sum of factors and non-factors
int NonFactor(int iNo)
{
    int iCnt = 0;
    int iSumFactors = 0;
    int iSumNonFactors = 0;

    if (iNo <= 0)
    {
        printf("Invalid number. Please enter a positive integer.\n");
        return 0;
    }

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSumFactors += iCnt;
        }
        else
        {
            iSumNonFactors += iCnt;
        }
    }

    return iSumFactors - iSumNonFactors;
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &iValue);

    iResult = NonFactor(iValue);

    printf("Difference between sum of factors and non-factors: %d\n", iResult);

    return 0;
}
