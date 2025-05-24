// Check Wheather the number is palindrome or not (After reversal the original and reversal is same or not)

// Reverse the input number and rerurn and print the reverse number.
#include <stdio.h>
#include <stdbool.h>

bool CheckPalindrome(int iNo)
{

    int iCopy = iNo;         //iNo chi Value Copy keli Compare krysathi.
    int iDigit = 0;
    int iRev = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = (iRev * 10) + iDigit;
    }
    if (iCopy == iRev)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    int iAns = 0;
    printf("Enter the Number : ");
    scanf("%d", &iValue);
    iAns = CheckPalindrome(iValue);
    if (iAns == true)
    {
        printf("%d is the palindrome number.", iValue);
    }
    else
    {
        printf("%d is not the palindrome number.", iValue);
    }
    return 0;
}