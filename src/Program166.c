#include <stdio.h>   // standard input-output header file include केली जाते
#include <stdlib.h>  // memory related functions साठी header file

// ही node ची definition आहे - singly linked list साठी
struct node
{
    int data;              // data field - इथे आपला data store होतो
    struct node *next;     // pointer to next node - पुढच्या node कडे direction दाखवतो
};

// typedef वापरून आपल्याला short नाम दिले आहेत
typedef struct node NODE;     // आता struct node ला आपण NODE म्हणू शकतो
typedef struct node *PNODE;   // struct node pointer ला PNODE म्हणू शकतो
typedef struct node **PPNODE; // double pointer म्हणजे pointer to pointer to node

int main()
{
    NODE *First = NULL;    // सुरुवातीला linked list खाली आहे म्हणजे pointing to NULL

    return 0;              // program successfully exit होतो
}
