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
        newn->prev = Temp;
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

void DisplayReverse(PNODE Head)
{
    PNODE Temp = Head;
    if (Temp == NULL)
        return;

    // Move to last node
    while (Temp->next != NULL)
    {
        Temp = Temp->next;
    }

    printf("The Linked List in Reverse is : \n");
    printf(" | %p | -> ", Head);
    while (Temp != NULL)
    {
        printf("| %p | %d | %p | <- ", Temp->prev, Temp->data, Temp->next);
        Temp = Temp->prev;
    }
    printf(" NULL \n");
}

void Search(PNODE Head, int No)
{
    int pos = 1;
    int found = 0;
    while (Head != NULL)
    {
        if (Head->data == No)
        {
            printf("Value %d found at position %d\n", No, pos);
            found = 1;
        }
        Head = Head->next;
        pos++;
    }
    if (!found)
    {
        printf("Value %d not found in the list.\n", No);
    }
}

void SortList(PPNODE Head)
{
    int swapped;
    PNODE Temp;
    PNODE lptr = NULL;

    if (*Head == NULL)
        return;

    do
    {
        swapped = 0;
        Temp = *Head;

        while (Temp->next != lptr)
        {
            if (Temp->data > Temp->next->data)
            {
                int temp = Temp->data;
                Temp->data = Temp->next->data;
                Temp->next->data = temp;
                swapped = 1;
            }
            Temp = Temp->next;
        }
        lptr = Temp;
    } while (swapped);
}

int main()
{
    int iRet = 0;
    PNODE First = NULL;

    InsertFirst(&First, 14);
    InsertFirst(&First, 12);
    InsertFirst(&First, 10);

    InsertLast(&First, 11);
    InsertLast(&First, 17);

    Display(First);
    iRet = Counter(First);
    printf("The No of Nodes are : %d\n", iRet);

    DisplayReverse(First);

    Search(First, 12);

    SortList(&First);
    Display(First);
    iRet = Counter(First);
    printf("The No of Nodes are : %d\n", iRet);


    printf("Total Memory Used: %lu bytes\n", Counter(First) * sizeof(NODE));


    return 0;
}