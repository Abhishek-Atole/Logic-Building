//Write the program to display the Smallest number
#include<stdio.h>

int MinimumNumber(int iNo1,int iNo2)
{
    if(iNo1 < iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the First Number : ");
    scanf("%d",&iValue1);

    printf("Enter the Second Number : ");
    scanf("%d",&iValue2);

    iRet = MinimumNumber(iValue1,iValue2);
    printf("Minimum Number is : %d",iRet);
    return 0;
}