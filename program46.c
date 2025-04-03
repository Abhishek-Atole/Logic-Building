#include <stdio.h>
void GetFactor(int iNo)
{
    int iCnt = 0;
    printf("The Factors Are : \n");

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
        printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the Number : ");
    scanf("%d", &iValue);

    GetFactor(iValue);
    return 0;
}


/* 

Space Complexity : O(N)

*/