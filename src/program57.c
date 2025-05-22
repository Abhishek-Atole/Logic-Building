// Form Here Problems on Digits started from Here
#include <stdio.h>

void Display(int iNo)
{
    int iDigit = 0;
    //Joparyanta iNo  0 hot
    //Nahi Toparyanta
    while (iNo > 0)
    {
        printf(" -------------------------------------------------------------\n");
        iDigit = iNo % 10;
        printf("Digit is : %d \n", iDigit); // 1
        iNo = iNo / 10;
        printf("Value of iNo is : %d\n", iNo); // 72
    }
}

int main()
{
    auto int iValue = 0;
    printf("Enter the Number : ");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;
}

/*

    Note : In this Program While loop id used because we kmow we have to iterate but we
            dont know how many times but we know at which condition we have to stop

*/