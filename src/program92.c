
//Printing this pAttern on the screen 
// 1#   2#  3#  4#  5#

#include<stdio.h>

void Display(int iNo)
{
    int iCnt =0;
    char ch = 'a';
    for (iCnt =1 ;iCnt<iNo;iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }

    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter the Count : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}