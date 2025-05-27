
// Printing this Pattern on the screen

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
    for (iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
    for (iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter the Count : ");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}