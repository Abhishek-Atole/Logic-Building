// check wheather yhe number is prime or not
//  concept : a natural number which has only two divisible value ( first  divisible 1 and  second divisible is that number itself)

#include <stdio.h>
#include <stdbool.h>
bool CheckPrime(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)            // updater ( if negative number is in input so we convert it in positive)
    {
        iNo = -iNo;
    }
    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int iValue = 0;
    bool bRet = 0;
    printf("Enter the number : ");
    scanf("%d", &iValue);
    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        printf("%d is a prime number\n", iValue);
    }
    else
    {
        printf("%d is not a prime number\n", iValue);
    }
    return 0;
}