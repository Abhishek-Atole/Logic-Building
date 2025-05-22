//(Decrementing Loop)
#include <stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt =1;iCnt <=iNo;iCnt++)
    {
        printf("\n", iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number of times you want to display Jay Ganesh on screen.. : ");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}