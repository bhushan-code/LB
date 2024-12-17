#include<stdlib.h>
#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     //Allocate the memory

    newn->data = no;                        //Initialize the members
    newn->next = NULL;

    if(*head == NULL)                       //case1 (Linklist empty)
    {
        *head = newn;
    }
    else                                    //case2(Linklist atleast contain one node)
    {
        newn->next = *head;
        *head = newn;
    }
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    return 0;
}