#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertFirst(PPNODE head, int No)
{
    PNODE newn = NULL;
    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;  

    if(*head ==NULL)
    {
        return;
    }
    else if((*head)->next==NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

void InsertLast(PPNODE head, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;  

    if(*head == NULL)
    {
        return;
    }
    else if((*head)->next==NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        while((temp)->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("%d",head->data);
        head= head->next;
    }
}


int main()
{
    PNODE first = NULL;
    
    InsertFirst(&first, 11);


    return 0;
}