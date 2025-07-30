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
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
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

// Function to Delete the Last Elemenrtor nodein the Linked List

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE Temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));
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
        newn->prev = Temp;
        Temp->next = newn;
    }
}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;
    if (*Head == NULL)
    {
        return;
    }
    else if (Temp->next == NULL)
    {
        free(Temp);
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
    else if (Temp->next == NULL)
    {
        free(Temp);
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

void Display(PNODE Head)
{
    printf("The Elements of the Linked List are : \n");

    printf("| %p | ->  ", Head);
    while (Head != NULL)
    {
        printf("| %p | %d | %p | -> ", Head->prev, Head->data, Head->next);
        Head = Head->next;
    }
    printf("NULL \n");
}

int Counter(PNODE Head)
{
    int iCnt = 0;
    while (Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

// Function To Insert the Node at the Particular Position in the Linked list.

void InsertAtPosition(PPNODE Head, int No, int Ipos)
{
    int iSize = Counter(*Head);
    PNODE newn = NULL;
    PNODE Temp = *Head;
    int i = 0;
    if ((Ipos < 1) || (Ipos > iSize + 1))
    {
        printf("Invalid Position Entered \n");
        return;
    }
    if (Ipos == 1)
    {
        InserFirst(Head, No);
    }
    else if (Ipos == iSize + 1)
    {
        InsertLast(Head, No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for (i = 1; i < Ipos - 1; i++)
        {
            Temp = Temp->next;
        }
        newn->prev = Temp;
        newn->next = Temp->next;
        Temp->next = newn;
    }
}

void DeleteAtPosition(PPNODE Head, int ipos)
{
    PNODE Temp = *Head;
    PNODE Targetdnode = NULL;
    int i = 0;
    int iSize = Counter(*Head);

    if ((ipos > 1) && (ipos > iSize))
    {
        printf("Incorrect Postion out of Boundries \n");
        return;
    }

    if (ipos == 1)
    {
        DeleteFirst(Head);
    }
    else if (ipos == iSize)
    {
        DeleteLast(Head);
    }
    else
    {
        for (i = 1; i < (ipos - 1); i++)
        {
            Temp = Temp->next;
        }
        Targetdnode = Temp->next;
        Temp->next = Temp->next->next;
        Targetdnode->next->prev = Temp;
        free(Targetdnode);
    }
}

int main()
{
    int iRet = 0;       // Variable to catch the return value of the nodes count
    PNODE First = NULL; // Creating the First pointer which holds the adress of the Linked List

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Calling the Insert First Element to to add theNode at the First of the Linked List(It Gives Address of the First Memener and the and the Data)
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    InserFirst(&First, 100); //
    InserFirst(&First, 99);
    Display(First);                             // Calling Display Function and the Providing the Address of the First Memeber or Node of the LInked List
    iRet = Counter(First);                      // Calling the Function to Count the Number of Nodes Present in the linked List
    printf("The Number of Nodes: %d \n", iRet); // Printf Function to Print the counting of the Node inthe Linked List

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Calling Insert Last Function to add the Node at the End or last ofthe existing linked list.
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    InsertLast(&First, 101);
    InsertLast(&First, 102);
    Display(First);                             // Calling Display Function and the Providing the Address of the First Memeber or Node of the LInked List
    iRet = Counter(First);                      // Calling the Function to Count the Number of Nodes Present in the linked List
    printf("The Number of Nodes: %d \n", iRet); // Printf Function to Print the counting of the Node inthe Linked List

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Calling InsertATPosition Function to add the data at particular Position
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    InsertAtPosition(&First, 1, 1);
    InsertAtPosition(&First, 2, 2);
    InsertAtPosition(&First, 6, 6);
    InsertAtPosition(&First, 8, 8);
    InsertAtPosition(&First, 10, 10);
    Display(First);                             // Calling Display Function an d the Providing the Address of the First Memeber or Node of the LInked List
    iRet = Counter(First);                      // Calling the Function to Count the Number of Nodes Present in the linked List
    printf("The Number of Nodes: %d \n", iRet); // Printf Function to Print the counting of the Node inthe Linked List

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Calling the DeleteFirst Element to Delete the Node at the First of the Linked List(It Gives Address of the First Memener )
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    DeleteFirst(&First);
    Display(First);                             // Calling Display Function an d the Providing the Address of the First Memeber or Node of the LInked List
    iRet = Counter(First);                      // Calling the Function to Count the Number of Nodes Present in the linked List
    printf("The Number of Nodes: %d \n", iRet); // Printf Function to Print the counting of the Node inthe Linked List

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Calling the Delete Last Function to Delete the Node at the End of the Linked List(We Gives Address of the First Memeber )
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    DeleteLast(&First);
    Display(First);                             // Calling Display Function an d the Providing the Address of the First Memeber or Node of the LInked List
    iRet = Counter(First);                      // Calling the Function to Count the Number of Nodes Present in the linked List
    printf("The Number of Nodes: %d \n", iRet); // Printf Function to Print the counting of the Node inthe Linked List

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // Calling the DeleteAtPOSition Function to Delete the Node at the Particular Positionm of the Linked List(We Gives Address of the First Memeber and the Position to delete)
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    DeleteAtPosition(&First, 4);
    DeleteAtPosition(&First, 1);
    DeleteAtPosition(&First, 6);
    Display(First);                             // Calling Display Function an d the Providing the Address of the First Memeber or Node of the LInked List
    iRet = Counter(First);                      // Calling the Function to Count the Number of Nodes Present in the linked List
    printf("The Number of Nodes: %d \n", iRet); // Printf Function to Print the counting of the Node inthe Linked List

    return 0;
}