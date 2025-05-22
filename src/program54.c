// Form Here Problems on Digits started from Here
#include <stdio.h>

void Display(int iNo)
{
    int iDigit = 0;

    printf(" -------------------------------------------------------------\n");
    printf("Value of iNo is : %d\n", iNo);  //721

    printf(" -------------------------------------------------------------\n");
    iDigit = iNo % 10;
    printf("Digit is : %d \n", iDigit); //1
    iNo = iNo / 10;
    printf("Value of iNo is : %d\n", iNo); //72

    printf(" -------------------------------------------------------------\n");
    iDigit = iNo % 10;
    printf("Digit is : %d \n", iDigit); //2
    iNo = iNo / 10;
    printf("Value of iNo is : %d\n", iNo); //7

    printf(" -------------------------------------------------------------\n");
    iDigit = iNo % 10;
    printf("Digit is : %d \n", iDigit); //7
    iNo = iNo / 10;
    printf("Value of iNo is : %d\n", iNo); //0
}

int main()
{
    auto int iValue = 721;
    // printf("Enter the Number");
    // scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
