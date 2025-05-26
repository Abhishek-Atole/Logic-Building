#include <stdio.h>  //for printf and scanf
#include <stdlib.h> //For malloc and free

void Display(int Arr[], int iSize) // Here we Can also use int * Arr
                                   // Because it is internally same it is written as int Arr[0] in the array.
{
    int iCnt = 0;
    printf("\n Elements of the array are : \n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t", Arr[iCnt]);
    }
    printf("\n");
}

int main() // Main Function
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the Number of Elements : ");
    scanf("%d", &iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic Memory allocated succesfully for %d elements\n", iCount);

    printf("Enter the %d Value : \n", iCount);
    for (iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\n Enter the element no %d : ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    Display(ptr, iCount); // Here We call the Display funtion and and provides the address of the
                          // pointer and the values of iCount.

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully.");

    return 0; // Return indicates the os that 0  indicates executed successfully.
}

/*

    Time Complexity is order of N  ==  O(N)

*/