#include <stdio.h>

int DisplayFactor(int iNo)
{
    int iCnt = 0;
    printf("Factor of %d are : \n", iNo);
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Ente the Number : ");
    scanf("%d", &iValue);

    DisplayFactor(iValue);
    return 0;
}



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