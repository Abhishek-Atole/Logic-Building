// Problem Statement : Accept Two values from ṭhe user and perform the addition
// Step 1: Understand the Problem Statement
// conclusion: We have to Accept 2 integers and perform its addition.

// Step 2 : Write the algorithm
/*
    Start
        Accept first number form the user an dstore it into the no1
        Accept the second number form the user and store it into the no2
        Createthe variable Ans To store the result named ad Ans
        Perform the addition of no1 no2 and store the redult in Ans
        Display the result form Ans to the user
    Stop
*/

// Step3 : Decide the programming language (C/C++/Java/Python)

// We Select c Programming

// step 4: Write the  Program

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
//   Function Name :    Addition
//   Description :      It is Used to perform the Addition of two Integers
//   Input Operator :   Integer , Integer
//   Output :           Integer
//   Author :           Abhishek Himmataro Atole
//   Date   :           22/03/2025
//   Upadates :         23/03/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

// Addition is a function which accepts 2 parameters as integers and it ruturns integer

int Addition(int iNo1, int iNo2)
{
    int iSum = 0;               // Variable to store the value of addition
    iSum = iNo1 + iNo2;
    return iSum;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//      Entry Point function of an Application which performs addition of 2 integers
//
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int ivalue1 = 0;        //variable to store first input
    int ivalue2 = 0;        //variable to store second input
    int iAns = 0;           // variable to store the result

    printf("Enter the Value for the ivalue1:");
    scanf("%d", &ivalue1);

    printf("Enter the Value for the ivalue2 :");
    scanf("%d", &ivalue2);

    iAns = Addition(ivalue1, ivalue2);          // Function call to perform addition

    printf("The Addition is :%d\n", iAns);
    return 0;
}

// Step 5 :Test the Code
/*
    Test case : 1
    Input :  10 11
    Output : 21

    Test case : 2
    Input : 12 -6
    Output : 6

    Test case :3
    Input : 10 0
    Output : 10

    Test case : 4
    Input : -11 -11
    Output : -22

*/