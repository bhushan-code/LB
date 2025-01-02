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

void Display(PNODE head)
{
    printf("Elements are : \n");
    while(head != NULL)
    {
        printf("| %d | <=> ",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCount = 0;
    while(head != NULL)
    {
        iCount++;
        head = head->next;
    }
    return iCount;
}

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE) malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head == NULL)
    {
        *head =newn;
    }
    else
    {
        newn->next = *head;
        (*head)->prev = newn;
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

    if(*head == NULL)
    {
        *head =newn;
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

void InsertAtPosition(PPNODE head, int no, int pos)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    int iCount = Count(*head);

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    if(pos < 0 || pos > iCount+1)
    {
        printf("Invalid Input\n");
        return;
    }
    if(pos == 1)
    {
        InsertFirst(head,no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(head, no);
    }
    else
    {
        temp = *head;
        for(int i = 1; i <pos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        newn->prev = temp;
        temp->next = newn;
        temp->next->prev = newn;
    }
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
        temp = *head;
        *head = (*head)->next;
        free(temp);
        (*head)->prev = NULL;
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
        while(temp->next->next !=NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }

}

void DeleteAtPosition(PPNODE head, int pos)
{
    PNODE temp = NULL;
    PNODE target = NULL;
    
    int iCount = Count(*head);

    if(pos < 0 || pos > iCount)
    {
        printf("Invalid Input\n");
        return;
    }
    if(pos == 1)
    {
        DeleteFirst(head);
    }
    else if(pos == iCount)
    {
        DeleteLast(head);
    }
    else
    {
        temp = *head;
        for(int i = 1; i < pos-1; i++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target->next;
        target->next->prev = temp;
        free(target);
    }

}


int main()
{
    PNODE first = NULL;

    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,101);
    InsertLast(&first,111);
    InsertLast(&first,121);
    InsertAtPosition(&first,75,4);


    Display(first);
    printf("Element count are : %d\n",Count(first));

    DeleteAtPosition(&first,4);

    Display(first);
    printf("Element count are : %d\n",Count(first));
 

    return 0;
}