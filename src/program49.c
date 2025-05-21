// Take the input form  user and check that number is perfect number or not
// perfect number = addition of the factors is equal to the that number
/*
    Start
        Step 1: Accept a number from the user and store it in a variable iNo
        Step 2: Initialize iSum to 0 to store the sum of factors
        Step 3: Loop from 1 to iNo / 2 using counter iCnt
            Step 3.1: For each iCnt, check if iNo is divisible by iCnt (i.e., iNo % iCnt == 0)
            Step 3.2: If yes, add iCnt to iSum (iSum = iSum + iCnt)
        Step 4: After the loop ends, compare iSum with iNo
            Step 4.1: If iSum == iNo, it is a Perfect Number; return true
            Step 4.2: Else, return false
        Step 5: Display the result to the user based on the boolean return
    Stop
*/


#include <stdio.h>
#include <stdbool.h>

// Function to check whether a number is a Perfect Number
bool PerfectNumber(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    // Loop to find and sum up all proper divisors (factors) of iNo
    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        // Check if iCnt is a factor of iNo
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;  // Add the factor to sum
        }
    }

    // Check if the sum of factors equals the number itself
    if (iSum == iNo)
    {
        return true;    // It's a Perfect Number
    }
    else
    {
        return false;   // Not a Perfect Number
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    // Input from user
    printf("Enter the number: ");
    scanf("%d", &iValue);

    // Function call
    bRet = PerfectNumber(iValue);

    // Output the result based on boolean return
    if (bRet == true)
    {
        printf("%d is a Perfect Number.\n", iValue);
    }
    else
    {
        printf("%d is not a Perfect Number.\n", iValue);
    }

    return 0;
}



//Dry Run

/*
    iSum = 0

Loop iCnt from 1 to 14 (since 28/2 = 14):

- iCnt = 1: 28 % 1 == 0 → iSum = 0 + 1 = 1
- iCnt = 2: 28 % 2 == 0 → iSum = 1 + 2 = 3
- iCnt = 3: 28 % 3 != 0 → skip
- iCnt = 4: 28 % 4 == 0 → iSum = 3 + 4 = 7
- iCnt = 5: 28 % 5 != 0 → skip
- iCnt = 6: 28 % 6 != 0 → skip
- iCnt = 7: 28 % 7 == 0 → iSum = 7 + 7 = 14
- iCnt = 8: 28 % 8 != 0 → skip
- iCnt = 9 to 13: skip (not divisors)
- iCnt = 14: 28 % 14 == 0 → iSum = 14 + 14 = 28

Final iSum = 28

Since iSum == iValue → Output: "28 is a Perfect Number."

*/