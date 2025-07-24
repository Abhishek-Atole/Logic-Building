#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int NO)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = NO;
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

void InsertLast(PPNODE Head, int NO)
{
    PNODE Temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = NO;
    newn->next = NULL;

        if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while (Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
    }
}
void Display(PNODE Head)
{
    printf("\nElements of the Linked List are : \n\n");
    printf("| %d | -> ",Head);
    while (Head != NULL)
    {
        printf("| %d | %d | -> ",Head->data,Head->next);
        Head = Head ->next;
    }
    printf("NULL \n\n");
    
}
int Count(PNODE Head)
{
    int iCnt =  0;
    while (Head != NULL)
    {
        iCnt++;
        Head = Head ->next;
    }
    return iCnt;
    
}
int main()
{
    int iRet =  0;
    PNODE First = NULL;
    InsertFirst(&First, 101);
    InsertFirst(&First, 102);
    InsertFirst(&First, 103);
    InsertFirst(&First, 104);
    InsertFirst(&First, 105);
    InsertFirst(&First, 106);
    
    Display(First);
    iRet =  Count(First);
    printf("The Number of nodes in the Linked List are : %d",iRet);

    InsertLast(&First, 100);
    InsertLast(&First, 99);
    InsertLast(&First, 98);

    Display(First);
    iRet =  Count(First);
    printf("The Number of nodes in the Linked List are : %d",iRet);


    return 0;
}