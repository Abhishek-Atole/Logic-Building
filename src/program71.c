// Accept N numbers form user and print the even number form the user

#include <stdio.h>
#include <stdlib.h>

void DisplayEven(int Arr[], int iSize)
{
    int iCnt = 0;
    printf("Even Elemets of an Array is : ");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)           // Here Arr[iCnt]  is Written because we want the Element storen Not the Index Number.
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

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

    DisplayEven(ptr, iCount);
    free(ptr);

    return 0;
}