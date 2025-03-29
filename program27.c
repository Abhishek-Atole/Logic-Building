// write the program to display highest number form three numbers

#include <stdio.h>
int MaxiumumNumber(int iNo1, int iNo2, int iNo3)
{
    if ((iNo1 >= iNo2) && (iNo2 >=iNo3))
    {
        return iNo1;
    }
    else if ((iNo1 >= iNo3) && (iNo2 >= iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter the first Number : ");
    scanf("%d", &iValue1);
    printf("Enter the Second Number : ");
    scanf("%d", &iValue2);
    printf("Enter the Third Number : ");
    scanf("%d", &iValue3);

    iRet = MaxiumumNumber(iValue1, iValue2, iValue3);

    printf("The Largest Number is : %d", iRet);
    return 0;
}