#include <stdio.h>

int main()
{
    char Arr[20]; // Array to store the input string (max 19 characters + null terminator '\0')

    // Prompt the user to enter a string
    printf("Enter the String : \n");

    // Read a line of input (including spaces) until Enter is pressed
    // %[^'\n']s : 
    //   %      - format specifier
    //   [^'\n']- read everything except newline (Enter)
    //   s      - for string
    // This allows the user to input multiple words until Enter is pressed
    scanf("%[^'\n']s", Arr);

    // Display the entered string
    printf("Entered String is : %s \n", Arr);

    return 0;
}