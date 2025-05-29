#include <stdio.h>
int CountDigits(char str[]) // Here the array is taken as a input to this function
{
    int iCnt = 0;

    while (*str != '\0')
    {

        if ((*str >= '0') && (*str <= '9' ))
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char Arr[20]; // Array to store the input string (max 19 characters + null terminator '\0')
    int iRet = 0;

    // Prompt the user to enter a string
    printf("Enter the String : \n");
    scanf("%[^'\n']s", Arr);
    iRet = CountDigits(Arr);
    printf("Count of Digits in string is : %d", iRet);
    return 0;
}