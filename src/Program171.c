#include <stdio.h>
#include <stdlib.h>

// Structure Declaration
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

// Linked List madhye pahilya node chya aagodar navi node add karne
void InsertFirst(PPNODE Head, int No)
{
    // STEP 1: Navi node sathi memory allocate karne
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    // STEP 2: Navi node madhil data initialize karne
    newn->data = No;
    newn->next = NULL;

    // STEP 3: Pahile check kara ki list rikami ahe ka
    if (*Head == NULL) // Jar list rikami asel tar
    {
        *Head = newn;
    }
    else // Jar list madhye kamit kami ek node asel tar
    {
        newn->next = *Head;  // Navi node che next he current head kade point kara
        *Head = newn;        // Navi node la head banva
    }
}

// Linked List madhil saglya node print karne
void Display(PNODE Head)
{
    printf("Elements of Linked List are : \n ");

    while (Head != NULL)
    {
        printf("| %d | -> ", Head->data);  // Pratyek node cha data print kara
        Head = Head->next;                // Pudhil node kade jaun
    }
    printf("NULL \n");
}

// Linked List madhil node chi sankhya count karne
int Count(PNODE Head)
{
    int iCnt = 0;
    while (Head != NULL)
    {
        iCnt++;            // Ek node count kara
        Head = Head->next; // Pudhil node kade jaa
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    // Linked List madhye suruvatila node insert karat aahot
    InsertFirst(&First, 101);   // InsertFirst(60, 101) -> dhara ki First chi address 60 ahe
    InsertFirst(&First, 51);    // InsertFirst(60, 51)
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Display(First); // Linked List print kara
    iRet = Count(First); // Total node count kara

    printf("Number of Nodes are : %d \n", iRet);
    return 0;
}
