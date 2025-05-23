#include <stdio.h>

void DisplayStars(int iNo)
{
    int iCnt = 0;
    while(iNo > 0)
    {
        printf("*");
        iNo--;
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