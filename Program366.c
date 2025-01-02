#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
    struct node *prev;
}NODE, *PNODE, **PPNODE;


void Display(PNODE head, PNODE tail)
{
    
    if(head == NULL && tail == NULL)
    {
        printf("Linked list is Empty \n");
        return;
    }
    do
    {
        printf("| %d | <=> ",head->data);
        head = head->next;

    }while(head != tail->next);
}

int Count(PNODE head, PNODE tail)
{
    int iCount = 0;

     if(head == NULL && tail == NULL)
    {
        printf("Linked list is Empty \n");
        return 0;
    }
    do
    {
        iCount++;
        head = head->next;

    }while(head != tail->next);
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
{
    if(*head == NULL && *tail == NULL)
    {
        return;
    }
    else if(*head == *tail)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
    }
    else
    {
        *head = (*head)->next;
        free((*tail)->next);
        (*head)->prev = *tail;
        (*tail)->next = *head;
    }

}

void DeleteLast(PPNODE head, PPNODE tail)
{
    if(*head == NULL && *tail == NULL)
    {
        return;
    }
    else if(*head == *tail)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
    }
    else
    {
        *tail = (*tail)->prev;
        free((*tail)->next);
        (*head)->prev = *tail;
        (*tail)->next = *head;      
    }
}

void InsertAtPos(PPNODE head, PPNODE tail, int no, int ipos)
{
    int iCount = 0;
    int i = 0;

    PNODE temp = NULL;
    PNODE newn = NULL;

    if(ipos < 0 || ipos > iCount +1)
    {
        printf("Invalid Positio\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(head, tail, no);
    }
    else if(ipos == iCount+1)
    {
        InsertLast(head, tail, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *head;
        for(i = 1; i< ipos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteAtPos(PPNODE head, PPNODE tail, int ipos)
{}


int main()
{
    PNODE first = NULL;
    PNODE last = NULL;
    int iRet = 0;


    InsertFirst(&first,&last,51);
    InsertFirst(&first,&last,21);
    InsertFirst(&first,&last,11);

    InsertLast(&first,&last,101);
    InsertLast(&first,&last,111);
    InsertLast(&first,&last,121);

    Display(first,last);
    printf("\n");
    iRet = Count(first,last);
    printf("Count is : %d \n",iRet);

    DeleteFirst(&first,&last);

    Display(first,last);
    printf("\n");
    iRet = Count(first,last);
    printf("Count is : %d \n",iRet);

    DeleteLast(&first,&last);

    Display(first,last);
    printf("\n");
    iRet = Count(first,last);
    printf("Count is : %d \n",iRet);

 

    return 0;
}