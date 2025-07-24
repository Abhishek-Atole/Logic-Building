#include <stdio.h>
#include <stdlib.h>

// This is the Self Referential Struccture Because this is this structure is its own reference poninter in it which points to the next node in the linked list
struct node
{
    int data;
    struct node *next;
};

void InsertFirst(struct node **Head, int no)

{
    struct node *newn = NULL;
    newn = (struct node *)malloc(sizeof(struct node));

    newn->data = no;
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

void Display(struct node *Head)
{
    printf("---------------------------------------------------------\n");
    printf("|\tNode Addr\t|  Data\t|  Next Addr\t|\n");
    printf("---------------------------------------------------------\n");
    
    while (Head != NULL)
    {
        printf("|\t%p\t|  %d\t|  %p\t|\n", 
               (void*)Head, 
               Head->data, 
               (void*)Head->next);
        Head = Head->next;
    }

    printf("---------------------------------------------------------\n");
    printf("Note:\n");
    printf("Node Addr : Address of current node\n");
    printf("Data      : Integer data stored in the node\n");
    printf("Next Addr : Address of the next node (NULL if last node)\n");
}


int main()
{
    struct node *First = NULL; // Creating the pointer of the the whole structure node which pointes to Null or nothing.(Allocated on Heap)
    InsertFirst(&First, 11);   // The MEmery Allocated fortheFirst on Heap is Assume 1000 so noe the address of the Firston heap is sent to the Head
    InsertFirst(&First, 12);
    InsertFirst(&First, 13);
    InsertFirst(&First, 14);
    InsertFirst(&First, 15);
    InsertFirst(&First, 16);
    InsertFirst(&First, 17);
    InsertFirst(&First, 18);
    InsertFirst(&First, 19);
    InsertFirst(&First, 20);
    InsertFirst(&First, 21);
    InsertFirst(&First, 22);
    InsertFirst(&First, 23);
    InsertFirst(&First, 24);
    InsertFirst(&First, 25);
    InsertFirst(&First, 26);
    InsertFirst(&First, 27);
    InsertFirst(&First, 28);
    InsertFirst(&First, 29);
    Display(First);
    return 0;
}
