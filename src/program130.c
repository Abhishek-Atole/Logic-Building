#include <stdio.h>
int CountLetter(char str[], char Ch) // Here the array is taken as a input to this function
{
    int iCnt = 0;

    while (*str != '\0')
    {

        if (*str == Ch)
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
    char cValue = 0;

    // Prompt the user to enter a string
    printf("Enter the String : \n");
    scanf("%[^'\n']s", Arr);
    printf("Enter the Character for Frequency Calculator : ");
    scanf(" %c", &cValue);
    /*
        Here the Complexity is there in the first String we Take the String as input and after
        and at the last in the string there is the enter (%[^'\n] means accept the String upto enter is pressed
        so now when we pressed enter there are two  enters so one is used and another exist the code .
        2 . So there is small trick that if we add the space before the %c then the enter is neglected by spcace.)
    */
    iRet = CountLetter(Arr, cValue);
    printf("Count of letter a is : %d", iRet);
    return 0;
}