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

void InsertFirst(struct node **Head, int No)
{
    PNODE newn = NULL;
    newn = (struct node *)malloc(sizeof(struct node));
    newn->data;
    newn->next;

    if (Head != NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
    printf("Null \n");
}
void Display(PNODE Head)
{
    printf("Elements of Linked List are : \n ");

    while (Head != NULL)
    {
        printf("| %d | -> ", Head->data);
        Head = Head->next;
    }
    printf("Null \n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First); // Display(100)
    return 0;
}