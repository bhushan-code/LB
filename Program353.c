// temp pointer //dont use this program
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
    if(head == NULL && tail == NULL)            //filter
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

void InsertAtPos(PPNODE head, PPNODE tail, int no, int ipos)
{}

void DeleteFirst(PPNODE head, PPNODE tail)
{
    PNODE temp = *head;                                                     // temp pointer //dont use this program
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
        free(temp);
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
       
       
    }

}

void DeleteAtPos(PPNODE head, PPNODE tail, int ipos)
{}



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

    DeleteFirst(&first,&last);

    Display(first,last);
    printf("\n");

    iRet = Count(first,last);
    printf("Number of element is LL : %d\n", iRet);


    return 0;
}