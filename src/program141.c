#include <stdio.h>
void Strlwr(char str[]) // Here the array is taken as a input to this function
{

    while (*str != '\0')
    {

        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
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
    Strlwr(Arr);
    printf("Updated String is :  %s", Arr);
    return 0;
}