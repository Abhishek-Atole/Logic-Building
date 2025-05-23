#include <stdio.h>
#include <stdbool.h>

int EvenFactors(int iNo)
{
    int iCnt = 0;
    int iCount =0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
        {
            printf("%d\n", iCnt) ;
            iCount++;
        }
    }return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number : ");
    scanf("%d", &iValue);
    iRet = EvenFactors(iValue);
    printf("The Number of Factors are : %d ",iRet);
    return 0;
}