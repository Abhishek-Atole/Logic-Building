#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    printf("Inside InsertFirst:\n");
    printf("-----------------------------------\n");
    printf("Before malloc:\n");
    printf("Head (address of First)           : %d\n", (int)Head);
    printf("*Head (First - head node)         : %d\n", (int)*Head);
    printf("&Head (address of Head ptr)       : %d\n\n", (int)&Head);

    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    printf("After malloc:\n");
    printf("newn (heap node address)          : %d\n", (int)newn);
    printf("&newn (stack address of newn)     : %d\n", (int)&newn);
    printf("*newn (data field uninitialized)  : %d\n\n", *((int *)newn));

    newn->data = No;
    newn->next = NULL;

    printf("After initialization:\n");
    printf("newn->data                        : %d\n", newn->data);
    printf("newn->next                        : %d\n\n", (int)newn->next);

    if (*Head == NULL)
    {
        *Head = newn;

        printf("*Head == NULL block executed\n");
        printf("*Head (now points to newn)        : %d\n", (int)*Head);
        printf("(*Head)->data                     : %d\n", (*Head)->data);
        printf("(*Head)->next                     : %d\n", (int)(*Head)->next);
    }
    else
    {
        newn->next = *Head;
        *Head = newn;

        printf("*Head != NULL block executed\n");
        printf("newn->next (points to old Head)   : %d\n", (int)newn->next);
        printf("*Head (now points to newn)        : %d\n", (int)*Head);
        printf("(*Head)->data                     : %d\n", (*Head)->data);
    }

    printf("-----------------------------------\n\n");
}

void Display(PNODE Head)
{
    printf("Linked List Elements:\n");
    while (Head != NULL)
    {
        printf("| Data: %d | Next: %d | -> ", Head->data, (int)Head->next);
        Head = Head->next;
    }
    printf("NULL\n\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;
    while (Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    printf("Inside main():\n");
    printf("Initial value of First            : %d\n", (int)First);
    printf("Address of First                  : %d\n", (int)&First);
    printf("==========================================\n\n");

    int iRet = 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First);

    iRet = Count(First);
    printf("Total number of nodes in list     : %d\n", iRet);

    return 0;
}
