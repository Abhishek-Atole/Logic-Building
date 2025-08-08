#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE, **PPNODE;

void PUSHED(PPNODE Head, int No)
{
    PNODE Temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    printf("Pushed : %d\n", No);
    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = (*Head);
        *Head = newn;
    }
}

void POP(PPNODE Head)
{
    PNODE Temp = *Head;
    if (*Head == NULL)
    {
        printf("Queue is Empty...\n");
        return;
    }
    else
    {

        while (Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        free(Temp->next);
        Temp->next = NULL;
    }
}

void Display(PNODE Head)
{
    printf("\nStack is :| %p | -> \n", Head);
    while (Head != NULL)
    {
        printf("\t\t ----------\n");
        printf("\t\t|    %d    |\n", Head->data);
        printf("\t\t ----------\n");
        printf("\t\t| %p |\n", Head->next);
        printf("\t\t ----------\n");
        Head = Head->next;
    }
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
    PNODE First = NULL;
    int iRet = 0;

    printf("\n---------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t Queue is First in First out (FIFO) ...");
    printf("\n---------------------------------------------------------------------------------------------------------\n");

    printf("\n---------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t Pushed the Element in the Queue...");
    printf("\n---------------------------------------------------------------------------------------------------------\n");

    PUSHED(&First, 15);
    PUSHED(&First, 14);
    PUSHED(&First, 13);
    PUSHED(&First, 12);
    PUSHED(&First, 11);
    PUSHED(&First, 10);
    Display(First);
    iRet = Counter(First);
    printf("\nTotal Elements : %d\n", iRet);

    printf("\n---------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t POP the Element in the Queue...");
    printf("\n---------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < 3; i++)
    {
        POP(&First);
    }

    Display(First);
    iRet = Counter(First);
    printf("\nTotal Elements after pop: %d\n", iRet);

    return 0;
}