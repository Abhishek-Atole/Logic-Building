//Data Structure Started 

#include<stdio.h>
#include<stdlib.h>

struct  node                        // This one is the self referencial structure because we cant create the object inside the structure becausestructure dont know that how many bytes to allocates.
{
    int data;                   //4Bytes
    struct node *next;           //8 Bytes
};

int main ()
{
    struct node *First =NULL;       //*First is the Pointer Not the object

    return 0;
}