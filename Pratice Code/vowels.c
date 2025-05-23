#include <stdio.h>
#include <stdbool.h>

bool CheckVowels(char ch)
{
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' ||
        ch == 'i' || ch == 'o' || ch == 'u')
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
    char cValue = 0;
    bool iRet = false;
    printf("Enter the Character : ");
    scanf("%c", &cValue);
    iRet = CheckVowels(cValue);
    if (iRet == true)
    {
        printf("%c is the Vowel.", cValue);
    }
    else
    {
        printf("%c is not Vowel.", cValue);
    }
    return 0;
}