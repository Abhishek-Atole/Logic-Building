#include <stdio.h>  // Standard input-output library for printf and scanf
#include <stdbool.h> // Library to use boolean data type

// Function to check whether a number is even or odd
int CheckEvent(int iNo)
{
    // If the number is divisible by 2, return true (even)
    if ((iNo % 2) == 0)
    {
        return true; 
    }
    else // Otherwise, return false (odd)
    {
        return false;
    }
}

int main()
{
    // Variable declarations
    auto int iValue = 0;  // Variable to store user input
    auto int bRet = false; // Variable to store function return value  (bRet = Boolean Return)

    // Prompting user for input
    printf("Enter the Value : ");
    scanf("%d", &iValue); // Taking input from the user

    // Calling CheckEvent function and storing the result in bRet
    bRet = CheckEvent(iValue);

    // Checking the returned result and printing the appropriate message
    if (bRet == true)
    {
        printf("%d is an Even Number \n", iValue);
    }
    else
    {
        printf("%d is an Odd Number \n", iValue);
    }

    return 0; // Indicating successful program execution
}
