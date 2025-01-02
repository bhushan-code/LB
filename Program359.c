#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE head, PNODE tail)
{}

int Count(PNODE head, PNODE tail)
{
    int iCount = 0;
    return iCount;
}

void InsertFirst(PPNODE head, PPNODE tail, int no)
{
   
}

void InsertLast(PPNODE head, PPNODE tail, int no)
{}

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

    InsertFirst(&first,&last,11);


    return 0;
}