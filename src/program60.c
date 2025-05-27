// Form Here Problems on Digits started from Here
#include <stdio.h>

int SumofDigits(int iNo)
{
    int iSum = 0;
    int iDigit = 0;
    // Joparyanta iNo  0 hot
    // Nahi Toparyanta
    while (iNo != 0)
    {

        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        // iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;
    printf("Enter the Number : ");
    scanf("%d", &iValue);
    iRet = SumofDigits(iValue);
    printf("Sum of digits Are : %d", iRet);

    return 0;
}

/*

    Note : In this Program While loop id used because we kmow we have to iterate but we
            dont know how many times but we know at which condition we have to stop

*/