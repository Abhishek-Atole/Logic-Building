#include <stdio.h>

int FactorMultiplication(int iNo)
{
    int iCnt = 1;
    int iMul = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    iCnt = iNo / 2;
    while (iNo > iCnt)
    {
        if (iNo % iCnt == 0)
        {
            printf(" %d\n", iCnt);
        }
        iCnt--;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Number : ");
    scanf("%d", &iValue);
    FactorMultiplication(iValue);
    return 0;
}