#include <stdio.h>
#include <stdbool.h>
bool CheckPrime(int iNo)
{
    auto int iCnt = 0;
    auto bool bFlag = true;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}
int main()
{
    auto int iValue = 0;
    auto bool bRet = false;
    printf("Enter the number : ");
    scanf("%d", &iValue);
    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        printf("%d is a prime number\n", iValue);
    }
    else
    {
        printf("%d is not a prime number\n", iValue);
    }
    return 0;
}

/*
┌────────────────────────────┐
│         Start              │
└────────────┬───────────────┘
             ▼
┌────────────────────────────┐
│ Prompt: "Enter the number" │
└────────────┬───────────────┘
             ▼
┌────────────────────────────┐
│    Accept input (iValue)   │
└────────────┬───────────────┘
             ▼
┌────────────────────────────┐
│    Call CheckPrime(iValue)│
└────────────┬───────────────┘
             ▼
┌────────────────────────────┐
│ if iNo < 0 then iNo = -iNo │
└────────────┬───────────────┘
             ▼
┌────────────────────────────┐
│ Loop iCnt from 2 to iNo/2  │
│  If iNo % iCnt == 0        │
│     set bFlag = false      │
│     break                  │
└────────────┬───────────────┘
             ▼
┌────────────────────────────┐
│ Return bFlag to main       │
└────────────┬───────────────┘
             ▼
┌────────────────────────────┐
│ If bRet is true            │
│     Print "Prime"          │
│ Else                       │
│     Print "Not Prime"      │
└────────────┬───────────────┘
             ▼
┌────────────────────────────┐
│            End             │
└────────────────────────────┘

*/

// dry run
/*

    Initial:

        iValue = 11

Function Call:

         CheckPrime(11)
        iNo = 11

        iCnt initialized to 0

        bFlag = true

Loop from iCnt = 2 to 11/2 = 5:
iCnt = 2 → 11 % 2 = 1 → continue

iCnt = 3 → 11 % 3 = 2 → continue

iCnt = 4 → 11 % 4 = 3 → continue

iCnt = 5 → 11 % 5 = 1 → continue

Loop completes without setting bFlag = false.

Return:

    Return true → bRet = true

Output:

    "11 is a prime number"

*/