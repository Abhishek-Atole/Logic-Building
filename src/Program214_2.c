#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE, **PPNODE;

void PUSH(PPNODE Head, int No)
{
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
        newn->next = *Head;
        *Head = newn;
    }
}

int POP(PPNODE Head)
{
    int iValue = 0;
    PNODE Temp = *Head;
    if (*Head == NULL)
    {
        printf("Stack is Empty..\n");
        return -1;
    }
    else
    {
        iValue = (*Head)->data;
        *Head = (*Head)->next;
        free(Temp);
    }
    return iValue;
}

void Display(PNODE Head)
{
    if (Head == NULL)
    {
        printf("Stack is Empty..\n");
        return;
    }
    printf("\n | %8p | --> \n");
    while (Head != NULL)
    {
        printf("\t\t\t ----------\n");
        printf("\t\t\t|   %3d    |\n", Head->data);
        printf("\t\t\t|----------|\n");
        printf("\t\t\t| %8p |\n", (void *)Head->next);
        printf("\t\t\t ----------\n");
        Head = Head->next;
    }
    printf("\t\t\t --> NUll..\n");
}

int main()
{
    int iRet = 0;
    PNODE First = NULL;

    PUSH(&First, 15);
    PUSH(&First, 14);
    PUSH(&First, 13);
    PUSH(&First, 12);
    PUSH(&First, 11);
    Display(First);

    for (int i = 1; i < 6; i++)
    {
        iRet = POP(&First);
        printf("POP Data : %d\n", iRet);
    }
    Display(First);

    return 0;
}
