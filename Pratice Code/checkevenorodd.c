#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    if((iNo % 2) == 0)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int iValue =0;
    bool iRet =  false;
    printf("Enter the Number : ");
    scanf("%d",&iValue);
    iRet = CheckEvenOdd(iValue);

    if (iRet == true)
    {
        printf("%d is the Even Number.",iValue);
    }
    else
    {
        printf("%d is the Odd Number.",iValue);
    }

    return 0;
}
