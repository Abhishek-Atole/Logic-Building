#include <stdio.h>
int StrLen(char str[]) // Here the array is taken as a input to this function
{
    int iCnt = 0;

    while (*str != '\0')
    {
        iCnt++;
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
    iRet = StrLen(Arr);
    printf("Length of String is : %d", iRet);
    return 0;
}