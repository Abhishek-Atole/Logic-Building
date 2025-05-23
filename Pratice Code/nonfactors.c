#include <stdio.h>

int NonFactor(int iNo)
{
    int iCnt = 1;
    int iSum =0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
       
    for(iCnt= 1;iCnt <iNo;iCnt++) 
    {
        if (iNo % iCnt != 0)
        {
           iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number : ");
    scanf("%d", &iValue);
    iRet= NonFactor(iValue);
    
    printf("The Addition of Factors are : %d",iRet);
    return 0;
}