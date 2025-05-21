// accept no formuser and check wheether that the number is perfect number or not

#include <stdio.h>
#include <stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if (iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool iRet = false;
    printf("Enter the Number : ");
    scanf("%d", &iValue);
    iRet = CheckPerfect(iValue);
    if (iRet == true)
    {
        printf("%d is the Perfect Number.", iValue);
    }
    else
    {
        printf("%d is not the perfect Number.", iValue);
    }
    return 0;
}

/*

Case : 1 
    Input : 6
    Output : -6 is the Perfect Number.

Case : 2
    Input : -28
    Output : -28 is the Perfect Number.

Case : 3
    Input : 0
    OutPut : 0 is the Perfect Number.
*/