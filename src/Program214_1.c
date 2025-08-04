#include <stdio.h>
#include <stdlib.h>

// Structure for each stack node
typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE, **PPNODE;

// Push a new element onto the stack
void Push(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    if (newn == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newn->data = No;
    newn->next = *Head;  // Attach existing list to new node
    *Head = newn;         // Update head to new node
    printf("Pushed: %d\n", No);
}

// Pop the top element from the stack
int POP(PPNODE Head)
{
    if (*Head == NULL)
    {
        printf("Stack is Empty... Cannot POP.\n");
        return -1;
    }

    PNODE Temp = *Head;
    int iValue = Temp->data;

    *Head = (*Head)->next;  // Move head to next
    free(Temp);             // Free old head node
    return iValue;
}

// Display the entire stack
void Display(PNODE Head)
{
    printf("\nCurrent Stack:\n");
    if (Head == NULL)
    {
        printf("\tStack is Empty.\n");
        return;
    }

    printf("Top ->\n");
    while (Head != NULL)
    {
        printf("\t\t ----------\n");
        printf("\t\t|   %3d    |\n", Head->data);
        printf("\t\t ----------\n");
        printf("\t\t| %8p |\n", (void*)Head->next);
        printf("\t\t ----------\n");
        Head = Head->next;
    }
    printf("\n");
}

// Entry point
int main()
{
    PNODE First = NULL;  // Stack top pointer
    int iRet = 0;

    // Pushing values onto the stack
    Push(&First, 15);
    Push(&First, 14);
    Push(&First, 13);
    Push(&First, 12);
    Push(&First, 11);

    Display(First);

    // Popping values
    for (int i = 0; i < 6; ++i)
    {
        iRet = POP(&First);
        if (iRet != -1)
        {
            printf("Popped Element: %d\n", iRet);
        }
    }

    Display(First);

    return 0;
}
