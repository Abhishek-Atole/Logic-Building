#include <stdio.h>

int FactorMultiplication(int iNo)
{
    int iCnt = 1;
    int iMul = 1;
    while (iNo > iCnt)
    {
        if (iNo % iCnt == 0)
        {
            iMul = iMul * iCnt;         //Here We Cantnot initialize iMul = 0 because if multiplication  of 0 with 0 is equal  0.
        }
        iCnt++;
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number : ");
    scanf("%d", &iValue);
    iRet = FactorMultiplication(iValue);
    printf("The Multiplication of Factors are : %d", iRet);
    return 0;
}