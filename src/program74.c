// Accept N numbers form user and print the Odd number of form that N Numbers
#include <stdio.h>
#include <stdlib.h>

int OddCount(int Arr[], int iSize)
{
    int iCnt = 0;
    int iOddCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] % 2) != 0)           // Here Arr[iCnt]  is Written because we want the Element storen Not the Index Number.
        {
            iOddCnt++;
        }
    }
    return iOddCnt;
    printf("\n");
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the Number of Elements : ");
    scanf("%d", &iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf("Dynamic Memory Allocated Succesfully for %d elements.\n", iCount);

    printf("Enter the %d Elements.\n", iCount);

    for (iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("Enter the Value of for Index %d : ", iCnt);
        scanf("%d", &ptr[iCnt]);
    }

    iRet = OddCount(ptr, iCount);
    printf("The Odd Numbers Count In an Array is  : %d\n",iRet);

    free(ptr);
    printf("Dynamic Memory Deallocates Successfully.");

    return 0;
}