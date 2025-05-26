#include<stdio.h>
#include<stdlib.h>

int MaximumValue(int Arr[],int iSize)
{
    int iCnt =0 ;
    int iMax =Arr[0];

    for (iCnt = 0;iCnt <iSize;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        
    }
    return iMax;
}

int main()
{
     int iCount = 0;
    int *ptr = NULL;
    int iRet = 0;
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

    iRet = MaximumValue(ptr ,iCount);
    printf("The Maximunm Number in the Array is : %d .",iRet);
    free(ptr);

    return 0;

}