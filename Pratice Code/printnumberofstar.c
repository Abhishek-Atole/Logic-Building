#include <stdio.h>

void DisplayStars(int iNo)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number of times to Print  : ", iValue);
    scanf("%d", &iValue);
    DisplayStars(iValue);
    return 0;
}