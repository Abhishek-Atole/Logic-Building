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
{
    (void)Head; // Suppress unused parameter warning
    (void)NO;
}
void InsertLastt(PPNODE Head , int NO)
{
    (void)Head; // Suppress unused parameter warning
    (void)NO;
}
void DeleteFirst(PPNODE Head , int NO)
{
    (void)Head; // Suppress unused parameter warning
    (void)NO;
}
void DeleteLast(PPNODE Head , int NO)
{
    (void)Head; // Suppress unused parameter warning
    (void)NO;
}
void InsertAtPosition(PPNODE Head , int NO,int iPos)
{
    (void)Head; // Suppress unused parameter warning
    (void)NO;
    (void)iPos;
}
void DeleteAtPosition(PPNODE Head , int NO,int iPos)
{
    (void)Head; // Suppress unused parameter warning
    (void)NO;
    (void)iPos;
}
void Display(PNODE Head)
{
    (void)Head; // Suppress unused parameter warning
}
int Count(PNODE Head)
{
    (void)Head; // Suppress unused parameter warning
    return 0;
}


int main()
{
    PNODE First = NULL;
    (void)First; // Suppress unused variable warning
    return 0;            

}