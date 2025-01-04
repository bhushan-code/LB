//Stack 

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void Push(PPNODE head, int no)             //InsertFirst()
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

int Pop(PPNODE head)            //Deletefirst()
{
    PNODE temp = NULL;
    int no = -1;

    if(*head == NULL)
    {
        printf("Stack is Empty\n");
    }
    else if((*head)->next == NULL)
    {
        no = (*head)->data;
        free(*head);
        *head = NULL;
    }
    else
    {
        no = (*head)->data;
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    return no;
}

void Display(PNODE head)
{

}

int Count(PNODE head)
{
    int iCount = 0;
    while(head != NULL)
    {
        head = head->next;
        iCount++;
    }
        
    return iCount;
}



int main()
{
    PNODE first = NULL;
    int iRet = 0;

    Push(&first,51);
    Push(&first,21);
    Push(&first,11);


    iRet = Pop(&first);
    printf("Pop element is : %d\n",iRet);


    iRet = Pop(&first);
    printf("Pop element is : %d\n",iRet);

    return 0;
}