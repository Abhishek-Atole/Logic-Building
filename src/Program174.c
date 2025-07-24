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
    PNODE newn = (PNODE)malloc(sizeof(NODE));
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
void InsertLast(PPNODE Head, int No)
{
    PNODE Temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
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
    printf("\nElements of Linked List are : \n\n ");
    printf("| %d | -> ", Head);
    while (Head != NULL)
    {
        printf("| %d | %d | -> ", Head->data, Head->next); // Pratyek node cha data print kara
        Head = Head->next;                                 // Pudhil node kade jaun
    }
    printf("NULL \n\n");
}

// Linked List madhil node chi sankhya count karne
int Count(PNODE Head)
{
    int iCnt = 0;
    while (Head != NULL)
    {
        iCnt++;            // Ek node count kara
        Head = Head->next; // Pudhil node kade jaa
    }
    return iCnt;
}
void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;

    if (*Head == NULL)
    {
        return;
    }
    else if ((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head= (*Head)->next;
        free(Temp);
    }
}
void DeleteLast(PPNODE Head)
{
    PNODE Temp = * Head;

    if(Temp == NULL)
    {
        return;
    }
    else if(Temp ->next == NULL)
    {
        free(Temp);
        *Head = NULL;
    }
    else
    {
        while(Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        free(Temp->next);
        Temp->next =NULL;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    // Linked List madhye suruvatila node insert karat aahot
    InsertFirst(&First, 101); // InsertFirst(60, 101) -> assume ki First chi address 60 ahe
    InsertFirst(&First, 102);  // InsertFirst(60, 51)
    InsertFirst(&First, 103);
    InsertFirst(&First, 104);
    Display(First);      // Linked List print kara
    iRet = Count(First); // Total node count kara
    printf("Number of Nodes are : %d \n\n", iRet);



    InsertLast(&First, 100);
    InsertLast(&First, 99);
    Display(First);      // Linked List print kara
    iRet = Count(First); // Total node count kara
    printf("Number of Nodes are : %d \n\n", iRet);



    DeleteFirst(&First);
    Display(First);      // Linked List print kara
    iRet = Count(First); // Total node count kara
    printf("Number of Nodes are : %d \n\n", iRet);


    DeleteLast(&First);
    Display(First);      // Linked List print kara
    iRet = Count(First); // Total node count kara
    printf("Number of Nodes are : %d \n\n", iRet);

    return 0;
}
