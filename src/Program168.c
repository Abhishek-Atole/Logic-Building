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


void InsertFirst(struct node ** Head, int No)
{
    PNODE newn = NULL;
    newn = (struct node *) malloc (sizeof(struct node));
    newn->data;
    newn->next;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    return 0;
}