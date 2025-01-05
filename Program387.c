#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insert(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*head == NULL)   //tree is empty
    {
        *head = newn;
    }
    else                //tree contain at least one node
    {
        temp = *head;

        while(1)        //infinite loop
        {
            if(no > temp->data)   //greater
            {
                if(temp->rchild == NULL)
                {
                    temp -> rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(no < temp->data)  //smaller
            {
                  if(temp->lchild == NULL)
                {
                    temp -> lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
            else if(no == temp->data)   //identical
            {
                printf("Unable to insert as element is duplicate \n");
                free(newn);
                break;
            }
        }
    }
}

void Inorder(PNODE head)
{
    if(head != NULL)
    {
        Inorder(head->lchild);
        printf("%d\n",head->data);
        Inorder(head->rchild);
    }
}

void Preoder(PNODE head)
{
    if(head != NULL)
    {
        printf("%d\n",head->data);
        Preoder(head->lchild);
        Preoder(head->rchild);
    }
}

void Postorder(PNODE head)
{
    if(head != NULL)
    {
        Postorder(head->lchild);
        Postorder(head->rchild);
        printf("%d\n",head->data);
    }
}


int main()
{
    PNODE first = NULL;
    Insert(&first,51);
    Insert(&first,21);
    Insert(&first,101);

    Inorder(first);
    Preoder(first);
    Postorder(first);

    return 0;
}


//In order   21 51 101
//preorder   51 21 101
//post order 21 101 51