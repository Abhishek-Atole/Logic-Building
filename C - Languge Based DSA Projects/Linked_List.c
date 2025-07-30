#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InserFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE Temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while (Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
        newn->prev = Temp;
    }
}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;
    if (*Head == NULL)
    {
        return;
    }
    else if ((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = Temp->next;
        Temp->next->prev = NULL;
        free(Temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;
    if (*Head == NULL)
    {
        return;
    }
    else if ((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
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

void DisplayForward(PNODE Head)
{
    printf(" | %p | ->  ", Head);
    while (Head != NULL)
    {
        printf("| %p | %d | %p | <==> ", Head->prev, Head->data, Head->next);
        Head = Head->next;
    }
    printf("NULL \n");
}

void DisplayReverse(PNODE Head)
{

    if (Head == NULL)
    {
        printf("List is Empty.");
        return;
    }
    while (Head->next != NULL)
    {
        Head = Head->next;
    }
    while (Head != NULL)
    {
        printf("| %p | %d | %p | <==> ", Head->next, Head->data, Head->prev);
        Head = Head->prev;
    }
    printf("Null \n");
}

int NodesCounter(PNODE Head)
{
    int iCnt = 0;
    while (Head != 0)
    {
        Head = Head->next;
        iCnt++;
    }
    return iCnt;
}

void InsertAtPosition(PPNODE Head, int No, int iPos)
{
    int iSize = NodesCounter(*Head);

    if ((iPos < 1) || (iPos > iSize + 1))
    {
        printf("Invalid postion ..\n");
        return;
    }

    if (iPos == 1)
    {
        InserFirst(Head, No);
    }
    else if (iPos == iSize + 1)
    {
        InsertLast(Head, No);
    }
    else
    {
        PNODE newn = (PNODE)malloc(sizeof(NODE));
        PNODE Temp = *Head;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;
        for (int i = 1; i < (iPos - 1); i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        newn->prev = Temp;
        Temp->next->prev = newn;
        Temp->next = newn;
    }
}

void DeleteAtPosition(PPNODE Head, int iPos)
{
    int iSize = NodesCounter(*Head);
    PNODE TargetNode = NULL;
    PNODE Temp = *Head;

    if ((iPos < 1) || (iPos > iSize))
    {
        printf("Invalid Position.. \n");
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if (iPos == iSize)
    {
        DeleteLast(Head);
    }
    else
    {
        for (int i = 1; i < (iSize - 1); i++)
        {
            Temp = Temp->next;
        }
        TargetNode = Temp->next;
        Temp->next = TargetNode->next;
        TargetNode->prev = Temp;
        free(TargetNode);
    }
}

void SearchByValue(PNODE Head, int iVal)

{
    int iPos = 1;
    int iFound = 0;
    while (Head != NULL)
    {
        if (Head->data == iVal)
        {
            printf("Value Found At pos : %d \n", iPos);
            iFound = 1;
        }
        iPos++;
        Head = Head->next;
    }
    if (!iFound)
    {
        printf("Value Not Found\n");
    }
}

void GetDataFormPosition(PNODE Head, int iPos)
{
    int iSize = NodesCounter(Head);
    if ((iPos < 1) || (iPos > iSize))
    {
        printf("Invalid Position....\n");
        return;
    }
    for (int i = 1; i < iPos; i++)
    {
        Head = Head->next;
    }
    printf("The Value At Position %d is : %d\n", iPos, Head->data);
}

void UpdateByValue(PNODE Head, int oldVal, int NewVal)
{

    int iUpdated = 0;
    while (Head != NULL)
    {
        if (Head->data == oldVal)
        {
            Head->data = NewVal;
            printf("Value Updated Successfully to ...\n");
            iUpdated++;
        }
        Head = Head->next;
    }
    if (iUpdated)
    {
        printf("Value Changed form %d to %d\n", oldVal, NewVal);
    }
    else
    {
        printf("Value Not Found in Linked list..\n");
    }
}

void UpdateByPosition(PNODE Head, int iPos, int NewVal)
{
    int iUpdated = 0;

    int iSize = NodesCounter(Head);
    if (iPos < 1 || iPos > iSize)
    {
        printf("Invalid Position ..\n");
        return;
    }

    for (int i = 1; i < iPos; i++)
    {
        Head = Head->next;
    }
    Head->data = NewVal;
}

void FreeAllNodes(PPNODE Head)
{
    PNODE Temp = *Head;

    while ((Temp != NULL))
    {
        PNODE DeleteNode = Temp;
        Temp = Temp->next;
        free(DeleteNode);
    }
    *Head = NULL;
}

void SortAscending(PNODE Head)
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

void Menu(PNODE Head)
{
    printf("\n-------------------------------------------------------------------------------------------\n");
    printf("|                     Main Menu of the Doubly Linear Linked List Oprations                  |\n");
    printf("-------------------------------------------------------------------------------------------\n");
    printf("|   1.   |   Insert Element at First.                                                      \n");
    printf("|   2.   |   Insert Element at Last.                                                       \n");
    printf("|   3.   |   Insert Element At Position.                                                   \n");
    printf("|   4.   |   Delete the First Element.                                                     \n");
    printf("|   5.   |   Delete the Last Element.                                                      \n");
    printf("|   6.   |   Delete Element at the Position                                                \n");
    printf("|   7.   |   Display the Linked List (Forward)                                             \n");
    printf("|   8.   |   Display the Linked List (Reverse)                                             \n");
    printf("|   9.   |   Counter (Total Number of Nodes).                                              \n");
    printf("|   10.  |   Search the postion of the Node by Values                                      \n");
    printf("|   11.  |   Get the Value of the Node form position                                       \n");
    printf("|   12.  |   Update the Values by Using values                                             \n");
    printf("|   13.  |   Update the Values by Using Position                                           \n");
    printf("|   14.  |   Sort the List Ascending order                                                 \n");
    printf("|   15.  |   sort the List Descending order                                           \n");
    printf("|   16.  |   Free All Nodes                                                                \n");
    printf("|   00.  |   Exit                                                                           \n");
    printf("--------------------------------------------------------------------------------------------\n");
    printf(" Occupied Memory: %d nodes | %lu bytes = %lu bytes\n\n", NodesCounter(Head), sizeof(NODE), NodesCounter(Head) * sizeof(NODE));
}
int main()
{
    PNODE First = NULL;
    int iChoice = -1;

    while (iChoice != 0)
    {
        Menu(First);
        int ival, iContinue, iNewValue, ioldvalue, iPos = 0;
        printf("Enter your choice :  ");
        scanf("%d", &iChoice);

        switch (iChoice)
        {
        case 1:
            do
            {
                printf("Enter the Data to add at First Node: ");
                scanf("%d", &ival);
                InserFirst(&First, ival);
                printf("Node Added Successfully...\n");

                // Validate iContinue to be 0 or 1 only
                do
                {
                    printf("Press 1 to Continue or 0 to return to Main Menu: ");
                    scanf("%d", &iContinue);

                    if (iContinue != 0 && iContinue != 1)
                    {
                        printf("Invalid input! Please enter 1 or 0 only.\n");
                    }
                } while (iContinue != 0 && iContinue != 1);

            } while (iContinue == 1);
            break;

        case 2:
            do
            {
                printf("Enter the Data At Last : ");
                scanf("%d", &ival);
                InsertLast(&First, ival);
                printf("Node Added Successfully...\n");

                do
                {
                    printf("Press 1 to Continue & 0 To Main Menu : ");
                    scanf("%d", &iContinue);

                    if (iContinue != 0 && iContinue != 1)
                    {
                        printf("Invalid Input...\n");
                    }
                } while (iContinue != 1 && iContinue != 0);

            } while (iContinue == 1);
            break;

        case 3:
            do
            {
                printf("Enter the Position to add the Node : ");
                scanf("%d", &iPos);
                printf("Enter the Data at position : ");
                scanf("%d", &ival);

                InsertAtPosition(&First, ival, iPos);

                do
                {
                    printf("Press 1 to Continue & 0 To Main Menu : ");
                    scanf("%d", &iContinue);

                    if (iContinue != 0 && iContinue != 1)
                    {
                        printf("Invalid Input...\n");
                    }
                } while (iContinue != 1 && iContinue != 0);

            } while (iContinue == 1);
            break;

        case 4:
            DeleteFirst(&First);
            printf("First Node Deleted Successfully...");
            break;

        case 5:
            DeleteLast(&First);
            printf("Last Node Deleted Successfully...");
            break;

        case 6:
            printf("Enter the Position to Delete : ");
            scanf("%d", &iPos);
            DeleteAtPosition(&First, iPos);
            printf("Node Number %d is Deleted.\n", iPos);

        case 7:
            printf("List (Forward) : ");
            DisplayForward(First);
            break;

        case 8:
            printf("List (Reverse) : ");
            DisplayReverse(First);
            break;

        case 9:
            NodesCounter(First);
            printf("Total Nodes : %d\n", NodesCounter(First));
            break;

        case 10:
            printf("Enter the Data to Search Position : ");
            scanf("%d", &ival);
            SearchByValue(First, ival);
            break;

        case 11:
            printf("Enter the Position : ");
            scanf("%d", &iPos);
            GetDataFormPosition(First, iPos);
            break;

        case 12:
            printf("Enter the Old Value to Replace : ");
            scanf("%d", &ioldvalue);
            printf("Enter the New Value : ");
            scanf("%d", &iNewValue);
            UpdateByValue(First, ioldvalue, iNewValue);
            break;

        case 13:
            printf("Enter the Position of Node : ");
            scanf("%d", &iPos);
            printf("Enter the New Value : ");
            scanf("%d", &iNewValue);
            UpdateByPosition(First, iPos, iNewValue);
            break;

        case 14:
            SortAscending(First);
            break;

        case 15:
            SortDescending(First);
            break;

        case 16:
            FreeAllNodes(&First);
            printf("All Nodes Are Freed Succcesfully...\n");
            break;

        case 0:
            FreeAllNodes(&First);
            printf("Exiting...\n");
            break;

        default:
            printf("Invald Option Selected...\n\n");
        }
    }
    return 0;
}