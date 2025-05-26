// Accept N numbers form user and print the Addition of Even Elements in the Array.
#include <stdio.h>
#include <stdlib.h>


int Addition(int Arr[],int iSize)
{
    int iCnt = 0;
    int iSum =0;

    for (iCnt = 0;iCnt <iSize;iCnt++)
    {
        if ((Arr[iCnt] % 2)== 0)
        {
            iSum =iSum + Arr[iCnt];
        }
    }
    return iSum;
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

    iRet = Addition(ptr,iCount);
    
    printf("The Addition of the Array is %d.\n",iRet);

    free(ptr);
    printf("Dynamic Memory Deallocates Successfully.");

    return 0;
}