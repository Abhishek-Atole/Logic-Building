#include <stdio.h>  // Preprocessor directive to include standard input/output library

#define PI 3.14  // Macro definition for the value of PI (used for area calculation)

// Function to calculate the area of a circle given the radius
float CalculateArea(float fvalue)  // Function definition, takes float parameter 'fvalue' as radius
{
    // Declare a local float variable 'fAns' to store the calculated area
    auto float fAns = 0.0f;

    // Formula for area of circle: Area = PI * radius^2
    fAns = PI * fvalue * fvalue;

    // Return the calculated area
    return fAns;
}

int main()  // Main function - entry point of the program
{
    // Declare a local float variable to store the radius of the circle
    // Here the Variable is Initialised with 0.0f because it is float datatype 
    // if the f is not not written after 0.0 then it is consider as the double datatype
    auto float fRadius = 0.0f;

    // Declare a local float variable to store the calculated area of the circle
    auto float fArea = 0.0f;

    // Prompt the user to enter the radius of the circle
    printf("Enter the Radius :\n");

    // Read the user's input (radius) and store it in the fRadius variable
    scanf("%f", &fRadius);

    // Call the 'CalculateArea' function to calculate the area based on the input radius
    fArea = CalculateArea(fRadius);

    // Output the calculated area to the console
    printf("The Area of Circle is : %f", fArea);

    // Return 0 to indicate successful execution of the program
    return 0;
}
