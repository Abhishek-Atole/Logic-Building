#include <stdio.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlags = true;

    if (iNo < 0 )
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt < (iNo / 4); iCnt++)        // Here the initial is not initiated with 1 because 1 is divisible of every number
    {
        if ((iNo % iCnt) == 0)
        {
             bFlags = false;
            break;
        }
    }

    return bFlags;
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the Number to Check Wheather it is Prime or Not : ");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        printf("%d is the Prime Number.", iValue);
    }
    else
    {
        printf("%d is not a Prime Number.", iValue);
    }

    return 0;
}