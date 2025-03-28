#include <stdio.h>

// Function to calculate percentage
// Takes two float values as input (marks obtained and total marks)
// Returns the percentage as a float value
float CalculatePercentage(float fMarks, float fTotal)
{
    // Declaring a float variable to store percentage
    auto float fPercentage = 0.0f;
    
    // Calculating percentage using the formula (marks / total) * 100
    fPercentage = ((fMarks / fTotal) * 100);
    
    // Returning the calculated percentage
    return fPercentage;
}

int main()
{
    // Variable declaration
    auto float fValue1 = 0.0f;  // Stores marks obtained (can be decimal)
    auto int iValue2 = 0;       // Stores total marks (integer value)
    auto float fRet = 0.0f;     // Stores the calculated percentage
    
    // Accept user input for marks obtained
    printf("Enter the Marks: ");
    scanf("%f", &fValue1);
    
    // Accept user input for total marks
    printf("Enter the Total Marks: ");
    scanf("%d", &iValue2);
    
    // Function call to calculate percentage
    // Implicit type promotion occurs as 'iValue2' (int) is passed to a float parameter
    fRet = CalculatePercentage(fValue1, iValue2);
    
    // Displaying the calculated percentage along with total marks
    printf("The Percentage out of %d is: %f\n", iValue2, fRet);
    
    return 0;
}

/*
Concepts Covered:
1. Function Declaration and Definition:
   - Created a function `CalculatePercentage` that takes two float parameters and returns a float value.

2. Auto Storage Class:
   - Used `auto` keyword (optional, as local variables are auto by default).

3. Type Casting and Implicit Type Conversion:
   - The function receives a float and an integer, and implicit conversion ensures accuracy.

4. Arithmetic Operations:
   - Performed division and multiplication to compute the percentage.

5. Input/Output Functions:
   - Used `printf()` for displaying messages and `scanf()` for taking user input.

6. Integer to Float Promotion:
   - When passing an integer to a float function parameter, implicit promotion occurs.
*/
