// Write the program to calculat the average of three numbers

#include <stdio.h>
float Average(int iNo1, int iNo2, int iNo3)
{
    float fAverage = 0.0f;
    fAverage = ((iNo1 + iNo2 + iNo3) / 3);
    return fAverage;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    float fRet = 0.0f;

    printf("Enter the First Number : ");
    scanf("%d", &iValue1);

    printf("Enter the Second Number : ");
    scanf("%d", &iValue2);
    
    printf("Enter the Third Number : ");
    scanf("%d", &iValue3);

    fRet = Average(iValue1, iValue2, iValue3);
    printf("The Average is : %f\n",fRet);
    return 0;
}