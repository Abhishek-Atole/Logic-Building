#include <stdio.h>
int CountLetter(char str[]) // Here the array is taken as a input to this function
{
    int iCnt = 0;

    while (*str != '\0')
    {

        if (*str == 'a')
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
    iRet = CountLetter(Arr);
    printf("Count of letter a is : %d", iRet);
    return 0;
}