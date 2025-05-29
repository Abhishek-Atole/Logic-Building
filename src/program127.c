#include <stdio.h>
void Display(char str[])   // Here the array is taken as a input to this function
{ 
    printf("String is : %s\n",str);
}

int main()
{
    char Arr[20]; // Array to store the input string (max 19 characters + null terminator '\0')

    // Prompt the user to enter a string
    printf("Enter the String : \n");
    scanf("%[^'\n']s", Arr);

    Display(Arr);
    return 0 ;
}