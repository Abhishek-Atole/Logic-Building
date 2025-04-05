#include <stdio.h>
int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    printf("The Factors of %d are : \n", iNo);

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
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
    printf("Enter the Value : ");
    scanf("%d", &iValue);
    iRet = SumFactors(iValue);
    printf("The Addition of Factors is : %d",iRet);
    return 0;
}

//time complexity : O(N)