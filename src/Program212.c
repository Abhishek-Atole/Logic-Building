#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

void Push(PPNODE Head,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    if(*Head == NULL)
    {
        *Head == NULL;
    }
    else
    {
        newn ->next = (*Head)->next;
        *Head = newn;
    }
}



int main()
{
    PNODE First = NULL;
    Push(&First,15);
    Push(&First,14);
    Push(&First,13);
    Push(&First,12);
    Push(&First,11);
    return 0;
}
