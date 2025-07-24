#include <stdio.h>
#include <stdlib.h>

// Define the self-referential structure
struct node
{
    int data;
    struct node *next;
};

// Function to insert at the beginning of the linked list
void InsertFirst(struct node **Head, int no)
{
    struct node *newn = NULL;
    newn = (struct node *)malloc(sizeof(struct node));  // Heap allocation

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

// Function to display linked list details in tabular format
void Display(struct node *Head)
{
    int count = 0;

    printf("\n---------------------------------------------------------\n");
    printf("| %-18s | %-6s | %-18s |\n", "Node Address", "Data", "Next Address");
    printf("---------------------------------------------------------\n");

    while (Head != NULL)
    {
        printf("| %-18p | %-6d | %-18p |\n", 
                (void*)Head, 
                Head->data, 
                (void*)Head->next);
        Head = Head->next;
        count++;
    }

    printf("---------------------------------------------------------\n");
    printf("Total Nodes = %d\n", count);

    printf("\n Note:\n");
    printf(" All nodes are dynamically allocated (on the HEAP).\n");
    printf(" Pointer variable 'First' is on the STACK.\n");
    printf(" Each node contains:\n\t- Data field (int)\n\t- Next field (pointer to next node)\n");
}

// Main function
int main()
{
    struct node *First = NULL;  // Pointer on STACK

    // Inserting multiple values (creates list in reverse order)
    InsertFirst(&First, 11);
    InsertFirst(&First, 12);
    InsertFirst(&First, 13);
    InsertFirst(&First, 14);
    InsertFirst(&First, 15);

    Display(First);

    // 📌 Stack vs Heap Summary
    printf("\n========================= MEMORY ALLOCATION SUMMARY =========================\n");
    printf(" First (main pointer to list)       : STACK (holds address of first node)\n");
    printf(" Each node created by malloc()      : HEAP (persistent memory until freed)\n");
    printf(" newn (temporary pointer in Insert) : STACK (used during insertion)\n");

    return 0;
}
