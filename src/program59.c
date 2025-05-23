// Form Here Problems on Digits started from Here
#include <stdio.h>

int CountDigits(int iNo)
{
    int iCnt = 0;
    // Joparyanta iNo  0 hot
    // Nahi Toparyanta
    while (iNo != 0)
    {
        iNo = iNo  / 10;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    auto int iValue = 0;
    auto int iRet =0 ;
    printf("Enter the Number : ");
    scanf("%d", &iValue);
    iRet = CountDigits(iValue);
    printf("No of digits Are : %d", iRet);

    return 0;
}

/*

    Note : In this Program While loop id used because we kmow we have to iterate but we
            dont know how many times but we know at which condition we have to stop

*/