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
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

int  EvenDataSum(PNODE Head)

{
    int iSum     = 0;
    printf("\nThe Even Nodes are : \n");
    while (Head != NULL)
    {
        if (((Head->data) % 2) == 0)
        {
            iSum = iSum + Head->data;
        }
        Head = Head->next;
    }
    return iSum;
}

void Display(PNODE Head)
{
    printf("\n Elements of the Linked List Are : \n");
    printf("| %p | -> ", Head);
    while (Head != NULL)
    {

        printf("| %d | %p | -> ", Head->data, Head->next);
        Head = Head->next;
    }
    printf("NUll \n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    InsertFirst(&First, 100);
    InsertFirst(&First, 99);
    InsertFirst(&First, 98);
    InsertFirst(&First, 97);

    Display(First);


    iRet = EvenDataSum(First);
    printf("The Addition of Even Data Nodes : %d",iRet);
    return 0;
}