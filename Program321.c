//doubly linear linked list


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;                                  //$
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
    newn->prev = NULL;                                  //$

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
        newn->prev = temp;                          //$
    }

}

void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    if((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;

        *head = (*head)->next;
        temp->next->prev = NULL;                //$
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
    if((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        while((temp->next->next) != NULL)
        {
            temp =temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }

}

void Display(PNODE head)
{
    printf("Elements of Doubly linkedlins :\n");
    while(head != NULL)
    {
        printf("| %d |<=>",head->data);
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


int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);

    InsertLast(&first, 101);
    InsertLast(&first, 111);
    InsertLast(&first, 121);
    DeleteFirst(&first);
    DeleteLast(&first);

    Display(first);

    iRet = Count(first);
    printf("Number of elements are : %d\n",iRet);

    return 0;
}