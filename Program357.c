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

void Display(PNODE head, PNODE tail)
{
    if(head == NULL && tail == NULL)            
    {
        printf("LinkedList is empty\n");
        return;
    }
    printf("Elements of LinkedList are : \n");

    do
    {
        printf("| %d | -> ",head->data);
        head = head->next;
    }while(head != tail->next);

}

int Count(PNODE head, PNODE tail)
{
    int iCount = 0;
    
    if(head == NULL && tail == NULL)
    {
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
    
    if((*head  == NULL) && (*tail == NULL))
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
    (*tail)->next = *head;
}

void InsertLast(PPNODE head, PPNODE tail, int no)
{

    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    
    if((*head  == NULL) && (*tail == NULL))
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        (*tail)->next = newn;
        *tail = newn;
    }
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
        (*tail)->next = *head;        
    }
}

void DeleteLast(PPNODE head, PPNODE tail)
{
    PNODE temp = NULL;
    
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
        temp = *head;
        while(temp->next != *tail)
        {
            temp = temp->next;
        }
        free(*tail);
        *tail = temp;
        (*tail)->next = *head;        
    }

}

void InsertAtPos(PPNODE head, PPNODE tail, int no, int ipos)
{
    int iCount = 0;
    iCount = Count(*head,*tail);

    PNODE temp = NULL;
    PNODE newn = NULL;


    if(ipos < 0 || ipos > iCount+1)
    {
        printf("Invalid position\n");
        return;
    }
    
    if(ipos == 1)
    {
        InsertFirst(head,tail,no);
    }   
    else if(ipos == iCount+1)
    {
        InsertLast(head,tail,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        temp = *head;
        for(int i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE head, PPNODE tail, int ipos)
{
    int iCount = 0;
    iCount = Count(*head,*tail);

    PNODE temp = NULL;
    PNODE target = NULL;


    if(ipos < 0 || ipos > iCount)
    {
        printf("Invalid position\n");
        return;
    }
    else if(ipos == 1)
    {
        DeleteFirst(head,tail);
    }   
    else if(ipos == iCount)
    {
        DeleteLast(head,tail);
    }
    else
    {
        temp = *head;
        for(int i = 1; i<ipos-1; i++)
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
    PNODE last = NULL;
    int iRet = 0;


    InsertFirst(&first, &last, 51);
    InsertFirst(&first, &last, 21);
    InsertFirst(&first, &last, 11);

    InsertLast(&first, &last, 101);
    InsertLast(&first, &last, 111);
    InsertLast(&first, &last, 121);

    InsertAtPos(&first, &last,75,4);

    Display(first,last);
    printf("\n");

    iRet = Count(first,last);
    printf("Number of element is LL : %d\n", iRet);

    DeleteAtPos(&first, &last,4);

    Display(first,last);
    printf("\n");

    iRet = Count(first,last);
    printf("Number of element is LL : %d\n", iRet);


    return 0;
}