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


void InsertFirst(PPNODE head, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
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

void InsertLast(PPNODE head, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
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

void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;
    if(*head ==NULL)
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
    if(*head ==NULL)
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

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
    printf("\n");
}

int Count(PNODE head)
{
    int iCount=0;
    while(head->next != NULL)
    {
        iCount++;
        head = head->next;
    }
    return iCount;
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


    Display(first);

    iRet = Count(first);
    printf("%d\n",iRet);

    DeleteFirst(&first);
    
    Display(first);

    iRet = Count(first);
    printf("%d\n",iRet);

    DeleteLast(&first);

    Display(first);

    iRet = Count(first);
    printf("%d\n",iRet);


    return 0;
}