#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
    struct node *prev;
}NODE, *PNODE, **PPNODE;


void Display(PNODE head, PNODE tail)
{}

int Count(PNODE head, PNODE tail)
{
    int iCount = 0;
    return iCount;
}

void InsertFirst(PPNODE head, PPNODE tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head == NULL && *tail == NULL)
    {
        *head = newn;
        *tail = *head;
    }
    else
    {
        newn->next = *head;
        (*head)->prev = newn;
        *head = newn;

    }
    (*head)->prev = *tail;
    (*tail)->next = *head;
}

void InsertLast(PPNODE head, PPNODE tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head == NULL && *tail == NULL)
    {
        *head = newn;
        *tail = *head;
    }
    else
    {
        (*tail)->next = newn;
        newn->prev = *tail;
        *tail = newn;
    }
    (*head)->prev = *tail;
    (*tail)->next = *head;

}

void DeleteFirst(PPNODE head, PPNODE tail)
{}

void DeleteLast(PPNODE head, PPNODE tail)
{}

void InsertAtPos(PPNODE head, PPNODE tail, int no, int ipos)
{}

void DeleteAtPos(PPNODE head, PPNODE tail, int ipos)
{}


int main()
{
    PNODE first = NULL;
    PNODE last = NULL;

    InsertFirst(&first,&last,51);
    InsertFirst(&first,&last,21);
    InsertFirst(&first,&last,11);

    InsertLast(&first,&last,101);
    InsertLast(&first,&last,111);
    InsertLast(&first,&last,121);

    return 0;
}