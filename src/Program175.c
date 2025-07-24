#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int NO)
{
    PNODE newn = (PNODE)malloc (sizeof(NODE));

    newn->data = NO;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else{
        newn->next = *Head;
        *Head = newn;
    }
}
void InsertLast(PPNODE Head, int No)
{
    PNODE Temp = *Head;

    PNODE newn = (PNODE) malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
            
        }Temp->next = newn;
        
    }

}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if ((*Head)->next == NULL)
    {
        free (*Head);
        *Head = NULL;
    }
    else{
        *Head = (*Head)->next;

        free(Temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL)
    {
        return;
    }
    else if ((*Head)->next == NULL)
    {
        free (*Head);
        *Head = NULL;
    }
    else
    {
        while(Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        free(Temp->next);
        Temp->next = NULL;
        
        
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

int CountNodes(PNODE Head)
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
    
    InsertFirst(&First , 101);
    InsertFirst(&First , 102);
    InsertFirst(&First , 103);
    InsertFirst(&First , 104);
    Display(First);
    iRet = CountNodes(First);
    printf("Number of Nodes in the Linked List is : %d\n\n",iRet);

    InsertLast(&First,  100);
    Display(First);
    iRet = CountNodes(First);
    printf("Number of Nodes in the Linked List is : %d\n\n",iRet);


    DeleteFirst(&First);
    Display(First);
    iRet = CountNodes(First);
    printf("Number of Nodes in the Linked List is : %d\n\n",iRet);


    DeleteLast(&First);
    Display(First);
    iRet = CountNodes(First);
    printf("Number of Nodes in the Linked List is : %d\n\n",iRet);

    return 0;
}