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

// Insert at first
void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    if (newn == NULL) return;

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

// Insert at last
void InsertLast(PPNODE Head, int No)
{
    PNODE Temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    if (newn == NULL) return;

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

// Display forward
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

// ✅ Display in reverse
void DisplayReverse(PNODE Head)
{
    PNODE Temp = Head;
    if (Temp == NULL) return;

    // Move to last node
    while (Temp->next != NULL)
    {
        Temp = Temp->next;
    }

    printf("The Linked List in Reverse is : \n");
    while (Temp != NULL)
    {
        printf("| %p | %d | %p | <- ", Temp->prev, Temp->data, Temp->next);
        Temp = Temp->prev;
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

void InsertAtPosition(PPNODE Head, int No, int iPos)
{
    int iSize = Counter(*Head);
    if ((iPos < 1) || (iPos > iSize + 1))
    {
        printf("Invalid Position Entered \n");
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(Head, No);
    }
    else if (iPos == iSize + 1)
    {
        InsertLast(Head, No);
    }
    else
    {
        PNODE Temp = *Head;
        PNODE newn = (PNODE)malloc(sizeof(NODE));
        if (newn == NULL) return;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for (int i = 1; i < (iPos - 1); i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        newn->prev = Temp;
        Temp->next->prev = newn;
        Temp->next = newn;
    }
}

void DeleteFirst(PPNODE Head)
{
    if (*Head == NULL) return;

    if (((*Head)->next == NULL) && ((*Head)->prev == NULL))
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        PNODE Temp = *Head;
        *Head = (*Head)->next;
        (*Head)->prev = NULL;
        free(Temp);
    }
}

void DeleteLast(PPNODE Head)
{
    if (*Head == NULL) return;

    if (((*Head)->next == NULL) && ((*Head)->prev == NULL))
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        PNODE Temp = *Head;
        while (Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        free(Temp->next);
        Temp->next = NULL;
    }
}

void DeleteAtPosition(PPNODE Head, int iPos)
{
    int iSize = Counter(*Head);
    if ((iPos < 1) || (iPos > iSize))
    {
        printf("Invalid Position \n");
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if (iPos == iSize)
    {
        DeleteLast(Head);
    }
    else
    {
        PNODE Temp = *Head;
        for (int i = 1; i < (iPos - 1); i++)
        {
            Temp = Temp->next;
        }

        PNODE TargetNode = Temp->next;
        Temp->next = TargetNode->next;
        TargetNode->next->prev = Temp;
        free(TargetNode);
    }
}

// ✅ Search by value
void Search(PNODE Head, int No)
{
    int pos = 1, found = 0;
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

// ✅ Sort the list (Bubble sort by data)
void SortList(PPNODE Head)
{
    int swapped;
    PNODE ptr1;
    PNODE lptr = NULL;

    if (*Head == NULL) return;

    do
    {
        swapped = 0;
        ptr1 = *Head;

        while (ptr1->next != lptr)
        {
            if (ptr1->data > ptr1->next->data)
            {
                int temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

int main()
{
    int iRet = 0;
    PNODE First = NULL;

    InsertFirst(&First, 14);
    InsertFirst(&First, 12);
    InsertFirst(&First, 10);
    InsertLast(&First, 16);
    InsertLast(&First, 17);
    InsertAtPosition(&First, 11, 2);
    InsertAtPosition(&First, 13, 4);
    InsertAtPosition(&First, 15, 6);

    Display(First);
    DisplayReverse(First);

    printf("Total Nodes: %d\n", Counter(First));

    printf("\nSearching for 13...\n");
    Search(First, 13);

    printf("\nSorting List...\n");
    SortList(&First);
    Display(First);

    return 0;
}
