#include <stdio.h>
#include <stdlib.h>

void Display(int *Arr, int iSize)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t", Arr[iCnt]);
    }
}
int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the Number of Elements : "); // Ask user for how many numbers they want to enter
    scanf("%d", &iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the Elements : \n"); // Prompt the user to enter the elements
    for (iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    Display(ptr, iCount);
    return 0;
}