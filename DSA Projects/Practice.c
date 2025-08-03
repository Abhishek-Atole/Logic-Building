#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "dlist_data.txt"

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

// Function Prototypes
void InsertFirst(PPNODE, int);
void InsertLast(PPNODE, int);
void InsertAtPos(PPNODE, int, int);
void DeleteFirst(PPNODE);
void DeleteLast(PPNODE);
void DeleteAtPos(PPNODE, int);
void Display(PNODE);
void DisplayReverse(PNODE);
int Count(PNODE);
void SearchByValue(PNODE, int);
void UpdateByPosition(PNODE, int, int);
void UpdateByValue(PNODE, int, int);
void SaveToFile(PNODE);
void LoadFromFile(PPNODE);
void ConvertToCircular(PPNODE);
void FreeAll(PPNODE);
void ShowMenu(PNODE);
void SortDescending(PNODE Head);
void SortAscending(PNODE Head);

int main()
{
    PNODE Head = NULL;
    int choice = -1;

    while (choice != 0)
    {
        ShowMenu(Head);
        printf("Enter your choice: ");
        scanf("%d", &choice);

        int val, pos, cont;

        switch (choice)
        {
        case 1:
            do
            {
                printf("Enter value to insert at last: ");
                scanf("%d", &val);
                InsertFirst(&Head, val);
                printf("Insert more? (1-Yes, 0-No): ");
                scanf("%d", &cont);
            } while (cont);
            break;

        case 2:
            do
            {
                printf("Enter value to insert at last: ");
                scanf("%d", &val);
                InsertLast(&Head, val);
                printf("Insert more? (1-Yes, 0-No): ");
                scanf("%d", &cont);
            } while (cont);
            break;

        case 3:
            printf("Enter position: ");
            scanf("%d", &pos);
            printf("Enter value to insert at position %d: ", pos);
            scanf("%d", &val);
            InsertAtPos(&Head, val, pos);
            break;

        case 4:
            DeleteFirst(&Head);
            break;

        case 5:
            DeleteLast(&Head);
            break;

        case 6:
            printf("Enter position to delete: ");
            scanf("%d", &pos);
            DeleteAtPos(&Head, pos);
            break;

        case 7:
            Display(Head);
            break;

        case 8:
            DisplayReverse(Head);
            break;

        case 9:
            printf("Node Count: %d\n", Count(Head));
            break;

        case 10:
            printf("Enter value to search: ");
            scanf("%d", &val);
            SearchByValue(Head, val);
            break;

        case 11:
            printf("Enter position to update: ");
            scanf("%d", &pos);
            printf("Enter new value: ");
            scanf("%d", &val);
            UpdateByPosition(Head, pos, val);
            break;

        case 12:
            printf("Enter old value to update: ");
            scanf("%d", &pos);
            printf("Enter new value: ");
            scanf("%d", &val);
            UpdateByValue(Head, pos, val);
            break;

        case 13:
            SaveToFile(Head);
            break;

        case 14:
            LoadFromFile(&Head);
            break;

        case 15:
            ConvertToCircular(&Head);
            break;

        case 16:
            SortAscending(Head);
            break;

        case 17:
            SortDescending(Head);
            break;

        case 18:
            FreeAll(&Head);
            break;

        case 0:
            FreeAll(&Head);
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid option!\n");
        }
    }

    return 0;
}

// Function Definitions

void InsertFirst(PPNODE Head, int val)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = val;
    newn->prev = NULL;
    newn->next = *Head;

    if (*Head != NULL)
        (*Head)->prev = newn;

    *Head = newn;
}

void InsertLast(PPNODE Head, int val)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = val;
    newn->next = NULL;
    newn->prev = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        PNODE temp = *Head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newn;
        newn->prev = temp;
    }
}

void InsertAtPos(PPNODE Head, int val, int pos)
{
    int size = Count(*Head);
    if (pos < 1 || pos > size + 1)
    {
        printf("Invalid Position\n");
        return;
    }
    if (pos == 1)
        InsertFirst(Head, val);
    else if (pos == size + 1)
        InsertLast(Head, val);
    else
    {
        PNODE newn = (PNODE)malloc(sizeof(NODE));
        newn->data = val;
        PNODE temp = *Head;

        for (int i = 1; i < pos - 1; i++)
            temp = temp->next;

        newn->next = temp->next;
        newn->prev = temp;
        temp->next->prev = newn;
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE Head)
{
    if (*Head == NULL)
        return;

    PNODE temp = *Head;
    *Head = (*Head)->next;

    if (*Head != NULL)
        (*Head)->prev = NULL;

    free(temp);
}

void DeleteLast(PPNODE Head)
{
    if (*Head == NULL)
        return;

    PNODE temp = *Head;
    if (temp->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while (temp->next != NULL)
            temp = temp->next;
        temp->prev->next = NULL;
        free(temp);
    }
}

void DeleteAtPos(PPNODE Head, int pos)
{
    int size = Count(*Head);
    if (pos < 1 || pos > size)
    {
        printf("Invalid Position\n");
        return;
    }

    if (pos == 1)
        DeleteFirst(Head);
    else if (pos == size)
        DeleteLast(Head);
    else
    {
        PNODE temp = *Head;

        for (int i = 1; i < pos; i++)
            temp = temp->next;

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
}

void Display(PNODE Head)
{
    printf("List (forward): ");
    while (Head != NULL)
    {
        printf("|%d|<=>", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

void DisplayReverse(PNODE Head)
{
    if (Head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    while (Head->next != NULL)
        Head = Head->next;

    printf("List (reverse): ");
    while (Head != NULL)
    {
        printf("|%d|<=>", Head->data);
        Head = Head->prev;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int cnt = 0;
    while (Head != NULL)
    {
        cnt++;
        Head = Head->next;
    }
    return cnt;
}

void SearchByValue(PNODE Head, int val)
{
    int pos = 1, found = 0;
    while (Head != NULL)
    {
        if (Head->data == val)
        {
            printf("Found at position: %d\n", pos);
            found = 1;
        }
        Head = Head->next;
        pos++;
    }
    if (!found)
        printf("Value not found!\n");
}

void UpdateByPosition(PNODE Head, int pos, int newVal)
{
    int size = Count(Head);
    if (pos < 1 || pos > size)
    {
        printf("Invalid Position\n");
        return;
    }

    for (int i = 1; i < pos; i++)
        Head = Head->next;

    Head->data = newVal;
    printf("Updated at position %d\n", pos);
}

void UpdateByValue(PNODE Head, int oldVal, int newVal)
{
    int updated = 0;
    while (Head != NULL)
    {
        if (Head->data == oldVal)
        {
            Head->data = newVal;
            updated++;
        }
        Head = Head->next;
    }
    if (updated)
        printf("Updated %d nodes\n", updated);
    else
        printf("Value not found!\n");
}

void SaveToFile(PNODE Head)
{
    FILE *fp = fopen(FILENAME, "w");
    if (!fp)
    {
        printf("Error opening file!\n");
        return;
    }

    while (Head != NULL)
    {
        fprintf(fp, "%d\n", Head->data);
        Head = Head->next;
    }

    fclose(fp);
    printf("Saved to file.\n");
}

void LoadFromFile(PPNODE Head)
{
    FILE *fp = fopen(FILENAME, "r");
    if (!fp)
    {
        printf("File not found!\n");
        return;
    }

    FreeAll(Head);
    int val;
    while (fscanf(fp, "%d", &val) != EOF)
        InsertLast(Head, val);

    fclose(fp);
    printf("Loaded from file.\n");
}

void ConvertToCircular(PPNODE Head)
{
    if (*Head == NULL)
        return;

    PNODE temp = *Head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = *Head;
    (*Head)->prev = temp;

    printf("Converted to Doubly Circular Linked List\n");
}

void FreeAll(PPNODE Head)
{
    PNODE temp = *Head;
    while (temp != NULL)
    {
        PNODE toDelete = temp;
        temp = temp->next;
        free(toDelete);
    }
    *Head = NULL;
    printf("Freed all nodes.\n");
}

void SortAscending(PNODE Head)
{
    int temp;
    PNODE i = NULL;
    PNODE j = NULL;

    if (Head == NULL)
        return;

    for (i = i->next; i->next != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (i->data > j->data)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    printf("List sorted in ascending order.\n");
}

void SortDescending(PNODE Head)
{
    int temp;
    PNODE i = NULL;
    PNODE j = NULL;

    if (Head == NULL)
        return;

    for (i = Head; i->next != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (i->data < j->data)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    printf("List sorted in descending order.\n");
}

void ShowMenu(PNODE Head)
{
    printf("\n");
    printf("||================================================||\n");
    printf("||         DOUBLY LINKED LIST MAIN MENU           ||\n");
    printf("||================================================||\n");
    printf("||  1. Insert First                               ||\n");
    printf("||  2. Insert Last                                ||\n");
    printf("||  3. Insert At Position                         ||\n");
    printf("||  4. Delete First                               ||\n");
    printf("||  5. Delete Last                                ||\n");
    printf("||  6. Delete At Position                         ||\n");
    printf("||  7. Display                                    ||\n");
    printf("||  8. Display Reverse                            ||\n");
    printf("||  9. Count                                      ||\n");
    printf("|| 10. Search by Value                            ||\n");
    printf("|| 11. Update by Position                         ||\n");
    printf("|| 12. Update by Value                            ||\n");
    printf("|| 13. Save to File                               ||\n");
    printf("|| 14. Load from File                             ||\n");
    printf("|| 15. Convert to Circular                        ||\n");
    printf("|| 16. Sort Ascending                             ||\n");
    printf("|| 17. Sort Descending                            ||\n");
    printf("|| 18. Free All Nodes                             ||\n");
    printf("||  0. Exit                                       ||\n");
    printf("||================================================||\n");
    printf(" Occupied Memory: %d nodes | %lu bytes = %lu bytes\n\n", Count(Head), sizeof(NODE), Count(Head) * sizeof(NODE));
}
