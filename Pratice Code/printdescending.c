#include <stdio.h>

void DisplayNumbers(int iNo)
{
    int iCnt = 0;
    for (iCnt = iNo; iCnt >=1; iCnt--)
    {
        printf("Value is : %d\n", iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number of times to Print  : ", iValue);
    scanf("%d", &iValue);
    DisplayNumbers(iValue);
    return 0;
}