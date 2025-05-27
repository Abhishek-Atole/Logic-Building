// Program to Choose the Maximum or minumum Nuber form the Array

#include <stdio.h>
#include <stdlib.h>

void MaximumMinimum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    printf("The Maximum Value is : %d\n", iMax);
    printf("The Minimum Value is : %d\n", iMin);
}

int main()
{
    int iCnt = 0;
    int iCount = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : ");
    scanf("%d", &iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf("Dynamic Memory allocated successfully for the % d numbers.\n", iCount);

    for (iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("Enter the Numbers for index No %d : \n", iCnt);
        scanf("%d", &ptr[iCnt]);
    }
    MaximumMinimum(ptr, iCount);
    free(ptr);
    printf("Dynamic Memory Deallocates Successfully.\n");
    return 0;
}