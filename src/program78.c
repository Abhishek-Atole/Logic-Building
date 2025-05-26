// Accept N numbers form user and print the Average of the array

#include <stdio.h>
#include <stdlib.h>

float Average(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return ((float)(iSum) / (float)(iSize));
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    float iRet = 0.0f;
    int iCnt = 0;

    // Teake the input form user to know the number of elements in the array and store it in iCount Variable.
    printf("Enter the Number of Elements : ");
    scanf("%d", &iCount);

    // Dynamic Memory Allocation

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamically Memory Allocated Succesfully for %d elements.\n", iCount);

    // Get the Input form  the user for the elements in the array metioned above.

    for (iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("Enter the Value for the Array Index No %d : ", iCnt);
        scanf("%d", &ptr[iCnt]);
    }

    // Call the External Funtion to calculate the average of all the Elements nad store it into iRet.

    iRet = Average(ptr, iCount);

    printf("The Average of the All the Elements in the Array is : %f \n", iRet);
    free(ptr);
    printf("Dynamic Memory Deallocates Successfully.");
    return 0;
}