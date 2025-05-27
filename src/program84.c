#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iNo)
{
    int iCnt =0 ;
    int iFrequency =0;

    for (iCnt = 0;iCnt <iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
        
    }
    return iFrequency;
}

int main()
{
     int iCount = 0;
    int *ptr = NULL;
    int iValue =0;
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

    printf("Enter the Number For search Frequency : ");
    scanf("%d",&iValue);

    iRet = Frequency(ptr ,iCount,iValue);
    printf("\n\t%d occurs %d times in the array.\n",iValue,iRet);
    printf("\n");
    free(ptr);

    return 0;

}