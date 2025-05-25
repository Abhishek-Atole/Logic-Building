#include<stdio.h>       // Preprocessor directive to include standard input/output functions like printf and scanf
#include<stdlib.h>      // For memory management functions like malloc, calloc, realloc, and free

int main()              // Main function: Entry point of the program
{
    int icount = 0;     // Variable to store the number of elements to be input by the user
    int *ptr = &icount; // Pointer to integer: initially pointing to address of icount (not needed, will be overwritten by malloc)
    int iCnt = 0;       // Loop counter variable

    printf("Enter the Number of Elements : "); // Ask user for how many numbers they want to enter
    scanf("%d",&icount);                       // Take input and store it in icount

    // Dynamic memory allocation using malloc
    // malloc allocates memory in bytes at runtime
    // icount * sizeof(int) gives total number of bytes needed for icount integers
    // (int *) is used to convert the void pointer returned by malloc to int pointer
    ptr = (int *) malloc (icount * sizeof(int));
    // pointer_Name = (Type_Casting)(Data_Type_Return) malloc (no of elements * size of each element)
    // return value of malloc is of type (void *) — a generic pointer

    printf("Enter the Elements : \n"); // Prompt the user to enter the elements

    // Loop to take icount number of inputs and store them in dynamically allocated memory
    for (iCnt = 0; iCnt < icount; iCnt++)
    {
        // Take input from user and store at ith index of ptr
        // ptr[iCnt] accesses ith integer in the allocated memory
        // &ptr[iCnt] gives the address where scanf stores the value
        scanf("%d", &ptr[iCnt]);
    }
    free(ptr);

    return 0;   // End of program, return 0 means successful execution
}
