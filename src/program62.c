//Reverse the input number and rerurn and print the reverse number.
#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit  = 0;
    int iRev = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = (iRev * 10) + iDigit;
    }
    return iRev;
}

int main ()
{
    int iValue = 0;
    int iAns = 0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);
    iAns = Reverse(iValue);
    printf("The Reverse Value is :%d ",iAns);

    return 0;
}