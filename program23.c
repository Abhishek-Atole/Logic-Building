//Write the program to display the largest number
#include<stdio.h>

int MaximumNumber(int iNo1,int iNo2)
{
    if(iNo1 > iNo2)
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

    iRet = MaximumNumber(iValue1,iValue2);
    printf("Largest Number is : %d",iRet);
    return 0;
}