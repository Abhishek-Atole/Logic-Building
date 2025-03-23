// Accept radius form user and calculate the area of circle

// step 1 : Understand the problem statement
// conclusion : We ara going to use the formula PI*Radius*Radius.

// Stepu 2 : Algorithm

/*
    Start
        Accept the input form the user and store it in the Radius
        Create the Variable PI ansd store value 3.14
        Calculate Area PI * RADIUS * RADIUS
        Display the value of areaa of the user
    Stop
*/

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     CalculateAra
//  Description :       It is used to calculate the area of the circle
//  Input :             Float
//  Output :            Float
//  Author :            Abhishek Himmatrao Atole
//  Date :              23/03/2025
//
///////////////////////////////////////////////////////////////////////////////////////

float CalculteArea(float fvalue)
{
    float fAns = 0.0f;
    float PI = 3.14f;
    fAns = PI * fvalue * fvalue;
    return fAns;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//     Entry Point Function
//
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fRadius = 0.0f;
    float fArea = 0.0f;

    printf("Enter the Radius :\n");
    scanf("%f", &fRadius);

    fArea = CalculteArea(fRadius);

    printf("The Area of Circle is :%f", fArea);

    return 0;
}


//Test Cases

/*
    Test Case 1 :
    Input : 1
    Output : 3.140000

    Test Case 2 :
    Input : 25
    output : 1962.500000
    
    Test Case 3 :
    Input : 0
    Output : 0
*/