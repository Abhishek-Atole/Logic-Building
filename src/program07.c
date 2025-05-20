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