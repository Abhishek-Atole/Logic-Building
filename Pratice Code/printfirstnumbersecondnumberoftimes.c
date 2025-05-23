#include <stdio.h>

int PrintNumbers(int iNo1, int iNo2)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iNo2; iCnt++)
    {
        printf("%d\n", iNo1);
    }
    
}

int main()
{
    int iValue1 = 0;
    int iFrequecncy = 0;
    int iRet = 0;
    printf("Enter the Value1 : ", iValue1);
    scanf("%d", &iValue1);
    printf("Enter the Value2 : ", iFrequecncy);
    scanf("%d", &iFrequecncy);
    iRet = PrintNumbers(iValue1, iFrequecncy);
    return 0;
}