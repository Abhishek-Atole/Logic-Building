// Form Here Problems on Digits started from Here
#include <stdio.h>

void Display(int iNo)
{
    int iDigit = 0;
    printf("%d\n",iNo);
    iDigit = iNo % 10;
    printf("%d \n", iDigit);

    iNo = iNo / 10;
    printf("%d\n", iNo);

    iDigit = iNo % 10;
    printf("%d \n", iDigit);

    iNo = iNo / 10;
    printf("%d\n", iNo);

    iDigit = iNo % 10;
    printf("%d \n", iDigit);

    iNo = iNo / 10;
    printf("%d\n", iNo);
}

int main()
{
    auto int iValue = 721;
    // printf("Enter the Number");
    // scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
