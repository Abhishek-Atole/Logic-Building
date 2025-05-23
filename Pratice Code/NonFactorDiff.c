#include <stdio.h>

int NonFactor(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    if (iNo <= 0)
    {
        printf("Invalid Number ...");
    }

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    return iSum2 - iSum1;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Value1 : ");
    scanf("%d", &iValue);
    printf("Enter the Value2 : ");
    scanf("%d", &iValue);
    iRet = NonFactor(iValue);

    printf("The Addition of Factors are : %d", iRet);
    return 0;
}