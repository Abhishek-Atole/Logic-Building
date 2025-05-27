
//Printing this pAttern on the screen 
// 1    2   3   4   5   6
// *    *   *   *   *   *
#include<stdio.h>

void Display()
{
    int iCnt =0;
    for (iCnt =0 ;iCnt <= 6;iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    Display();
    return 0;
}