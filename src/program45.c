#include <stdio.h>

/*
    Function: DisplayFactor
    Purpose : Prints all factors of the given number except itself.
    Input   : iNo - The number for which factors are to be displayed.
    Output  : Prints each factor on a new line.
*/
void DisplayFactor(int iNo)
{
    int iCnt = 0; // Loop counter, starts from 1

    printf("Factors of %d are:\n", iNo);

    // Loop from 1 to iNo-1 and print all numbers that divide iNo exactly
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        // If iNo is divisible by iCnt, then iCnt is a factor
        if ((iNo % iCnt) == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iValue = 0; // Variable to store user input

    printf("Enter the Number: ");
    scanf("%d", &iValue); // Take input from user

    // Call DisplayFactor to print all factors of the entered number
    DisplayFactor(iValue);

    return 0;
}

/*
    Program Flow:
    1. Start program.
    2. Declare integer variable iValue.
    3. Prompt user to enter a number.
    4. Read user input into iValue.
    5. Call DisplayFactor(iValue):
        - Print heading.
        - Loop from 1 to iValue-1:
            - If iValue is divisible by current number, print it.
    6. End program.
*/



/*
                     ┌───────────────┐
                     │ Start Program │
                     └───────┬───────┘
                             ↓
                ┌──────────────────────┐
                │ Declare iValue = 0    │
                └────────┬─────────────┘
                         ↓
           ┌──────────────────────────┐
           │ Print "Enter the Number" │
           └────────┬────────────────┘
                    ↓
        ┌─────────────────────────────┐
        │ Take user input iValue = 10 │
        └─────────────┬───────────────┘
                      ↓
          ┌───────────────────────┐
          │ Call DisplayFactor(10)│
          └────────┬──────────────┘
                   ↓
   ┌───────────────────────────────┐
   │ Print "Factors of 10 are:"    │
   └───────────┬───────────────────┘
               ↓
   ┌───────────────────────────────────────────┐
   │ Initialize iCnt = 1                        │
   │ Loop from iCnt = 1 to iNo-1 (9 in this case)│
   └────────────────────────┬──────────────────┘
                            ↓
               ┌──────────────────────────┐
               │ Check if 10 % iCnt == 0  │
               └───────┬──────────────────┘
                       ↓
            ┌───────────────────────┐
            │ If true, print iCnt   │
            └───────┬───────────────┘
                    ↓
          ┌─────────────────────┐
          │ iCnt = 1 → Print 1  │
          │ iCnt = 2 → Print 2  │
          │ iCnt = 3 → Skip     │
          │ iCnt = 4 → Skip     │
          │ iCnt = 5 → Print 5  │
          │ iCnt = 6 → Skip     │
          │ iCnt = 7 → Skip     │
          │ iCnt = 8 → Skip     │
          │ iCnt = 9 → Skip     │
          └───────────┬─────────┘
                      ↓
         ┌───────────────────────┐
         │ End of Loop (iCnt=10) │
         └─────────────┬─────────┘
                       ↓
         ┌──────────────────┐
         │ Return to main() │
         └───────┬──────────┘
                 ↓
         ┌──────────────────┐
         │ End Program      │
         └──────────────────┘

*/