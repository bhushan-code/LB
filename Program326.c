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

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;                                  //$

    if(*head == NULL)
    {
        *head = newn; 
    }
    else
    {
        newn->next = *head;
        (*head)->prev = newn;                           //$
        *head = newn;
    }

}


void InsertLast(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;                                  

    if(*head == NULL)
    {
        *head = newn; 
    }
    else
    {
        temp = *head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;                          
    }

}

void Display(PNODE head)
{
    printf("Elements of Doubly linkedlins :\n");
    printf("NULL <=> ");
    while(head != NULL)
    {
        printf("| %d | <=> ",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int Count = 0;

    while(head != NULL)
    {
        Count++;
        head = head->next;
    }
    return Count;
}

void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    else if((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        *head = (*head)->next;
        free((*head)->prev);            //$
        (*head)->prev = NULL;           //$
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;
    if(*head == NULL)
    {
        return;
    }
    else if((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
    

}

void InsertAtPosition(PPNODE head, int iNo, int iPos)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    

}

void DeleteAtPosition(PPNODE head, int iPos)
{

}


int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);


    InsertLast(&first, 101);
    InsertLast(&first, 121);
    InsertLast(&first, 151);

    Display(first);
    iRet = Count(first);
    printf("Element are : %d\n",iRet);


    DeleteFirst(&first);

    Display(first);
    iRet = Count(first);
    printf("Element are : %d\n",iRet);

    DeleteLast(&first);


        Display(first);
    iRet = Count(first);
    printf("Element are : %d\n",iRet);

    return 0;
}