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
int main()
{
    int i, j, k;

    printf("Enter the Value for the i:");
    scanf("%d", &i);

    printf("Enter the Value for the j:");
    scanf("%d", &j);

    k = i + j;

    printf("The Addition of the Two Values is k : %d", k);
    return 0;
}

//Step 5 :Test the Code
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