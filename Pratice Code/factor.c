#include <stdio.h>

int GetFactor(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d", &iValue);
    iRet = GetFactor(iValue);
    printf("Enter The Factor %d", iRet);
    return 0;
}