#include <stdio.h>
void ReplaceVowels(char str[]) // Here the array is taken as a input to this function
{
    int iCnt = 0;

    while (*str != '\0')
    {

        if ((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'B') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            *str = '_';
        }
        str++;
    }
}

int main()
{
    char Arr[20]; // Array to store the input string (max 19 characters + null terminator '\0')
    // Prompt the user to enter a string
    printf("Enter the String : \n");
    scanf("%[^'\n']s", Arr);
    ReplaceVowels(Arr);
    printf("Updated String is :  %s", Arr);
    return 0;
}