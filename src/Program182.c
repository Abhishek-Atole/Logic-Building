#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE Temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

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
        newn->prev = Temp->next;
        Temp->next = newn;
    }
}

void Display(PNODE Head)
{
    printf("The Linked List is : \n");
    printf(" | %p | -> ", Head);
    while (Head != NULL)
    {
        printf("| %p | %d | %p | -> ", Head->prev, Head->data, Head->next);
        Head = Head->next;
    }
    printf(" NULL \n");
}

int Counter(PNODE Head)
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
    int iRet = 0;
    PNODE First = NULL;

    InsertFirst(&First, 14);
    InsertFirst(&First, 12);
    InsertFirst(&First, 10);
    Display(First);
    iRet = Counter(First);
    printf("The No of Nodes are : %d\n", iRet);

    InsertLast(&First, 16);
    InsertLast(&First, 17);
    Display(First);
    iRet = Counter(First);
    printf("The No of Nodes are : %d\n", iRet);

    return 0;
}