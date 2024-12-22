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

void Display(PNODE head)
{
    printf("Elements are :\n");
    while(head != NULL)
    {
        printf(" | %d | ",head->data);
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

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;   
        *head = newn;
    }

}

void InsertLast(PPNODE head, int no)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

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

    }
    
}

void InsertAtPos(PPNODE head, int no, int pos)
{
    int iCount = 0;
    iCount = Count(*head);

    PNODE temp = NULL;
    PNODE newn = NULL;


    if(pos < 0 || pos > iCount+1)
    {
        printf("Invalid position\n");
        return;
    }
    else if(pos == 1)
    {
        InsertFirst(head,no);
    }   
    else if(pos == iCount+1)
    {
        InsertLast(head,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        temp = *head;
        for(int i = 1; i < pos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
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

void DeleteAtPos(PPNODE head, int pos)
{
     int iCount = 0;
    iCount = Count(*head);

    PNODE temp = NULL;
    PNODE target = NULL;


    if(pos < 0 || pos > iCount)
    {
        printf("Invalid position\n");
        return;
    }
    else if(pos == 1)
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
        for(int i = 1; i<pos-1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = target->next;
        free(target);
    }

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

    
    Display(first);
    iRet = Count(first);
    printf("Count of elements are : %d\n",iRet);

    InsertAtPos(&first,75,4);
    

    Display(first);
    iRet = Count(first);
    printf("Count of elements are : %d\n",iRet);

    DeleteAtPos(&first,4);

    Display(first);
    iRet = Count(first);
    printf("Count of elements are : %d\n",iRet);

    return 0;

}