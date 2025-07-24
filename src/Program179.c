#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;          //#
};

typedef struct node node;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head , int NO)
{}
void InsertLastt(PPNODE Head , int NO)
{}
void DeleteFirst(PPNODE Head , int NO)
{}
void DeleteLast(PPNODE Head , int NO)
{}
void InsertAtPosition(PPNODE Head , int NO,int iPos)
{}
void DeleteAtPosition(PPNODE Head , int NO,int iPos)
{}
void Display(PNODE Head)
{}
int Count(PNODE Head)
{

    return 0;
}


int main()
{
    PNODE First = NULL;
    return 0;            

}