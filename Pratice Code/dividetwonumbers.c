#include <stdio.h>

int Division(int iNo1, int iNo2)
{
    int iAns = 0;

    if (iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    printf("Enter the Value1 : ", iValue1);
    scanf("%d", &iValue1);
    printf("Enter the Value2 : ", iValue2);
    scanf("%d", &iValue2);
    iRet = Division(iValue1, iValue2);
    printf("Division is : %d \n", iRet);

    return 0;
}