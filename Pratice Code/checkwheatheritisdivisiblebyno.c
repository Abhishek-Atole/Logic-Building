#include <stdio.h>
#include <stdbool.h>

bool Check(int iNo1, int iNo2)
{
    if ((iNo1 % iNo2) == 0)
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
    int iDivisible = 0;
    bool iRet = false;
    printf("Enter the Number : ");
    scanf("%d", &iValue);
    printf("Enter the Divisor Number : ");
    scanf("%d", &iDivisible);

    iRet = Check(iValue, iDivisible);

    if (iRet == true)
    {
        printf("%d is Divisible by %d.", iValue, iDivisible);
    }
    else
    {
        printf("%d is not Divisible by %d.", iValue, iDivisible);
    }

    return 0;
}