#include <stdio.h>
#include <stdbool.h>

bool EvenNumber(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > iCnt)
    {
        printf("%d\n" ,2*iCnt);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;
    bool iRet = false;
    printf("Enter the Number : ");
    scanf("%d", &iValue);
    EvenNumber(iValue);
    return 0;
}
