//To Capitalize the letter   we have to add  and substract 32.
// Because  in the ASCII table the "A" is Placed At 65 Number and "a" is Placed at 97 number.
//so the logic is  a is  next 32 form the A

#include <stdio.h>

char DisplayConvert(char cValue)
{
    if (cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
        printf("Lower Case characteristics : %c", cValue);
    }
    else if (cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32;
        printf("Upper Case characteristics : %c", cValue);
    }
    
}

int main()
{
    char cValue = 0;
    printf("Enter the Character : ");
    scanf("%c", &cValue);
    DisplayConvert(cValue);
    return 0;
}