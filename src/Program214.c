#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE, **PPNODE;

void Push(PPNODE Head, int No)
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

int POP(PPNODE Head)
{
    int iValue = 0;
    PNODE Temp = *Head;
    if (*Head == NULL)
    {
        printf("Stack is Empty...\n");
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
    printf("Stack is :| %p | -> \n", Head);
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

int main()
{
    int iRet = 0;
    PNODE First = NULL;

    printf("\n---------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t Stack is Last in First out ...");
    printf("\n---------------------------------------------------------------------------------------------------------\n");

    printf("\n---------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t Pushed the Element in the Stack...");
    printf("\n---------------------------------------------------------------------------------------------------------\n");

    Push(&First, 15);
    Push(&First, 14);
    Push(&First, 13);
    Push(&First, 12);
    Push(&First, 11);

    Display(First);

    printf("\n---------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t POP the Element form the Stack...");
    printf("\n---------------------------------------------------------------------------------------------------------\n");

    iRet = POP(&First);
    printf("Poped Element is : %d\n", iRet);

    iRet = POP(&First);
    printf("Poped Element is : %d\n", iRet);

    iRet = POP(&First);
    printf("Poped Element is : %d\n", iRet);

    iRet = POP(&First);
    printf("Poped Element is : %d\n", iRet);

    iRet = POP(&First);
    printf("Poped Element is : %d\n", iRet);

    iRet = POP(&First);
    printf("Poped Element is : %d\n", iRet);

    Display(First);

    return 0;
}
