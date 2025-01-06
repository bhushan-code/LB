#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

// template <class T>
class SinglyLL
{
    public:
        PNODE head;
        int iCount;

        SinglyLL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no , int ipos);
        void DeleteFirst();        
        void DeleteLast();        
        void DeleteAtPos(int ipos);
        void Display();        
        int Count();      
};

// template <class T>
SinglyLL :: SinglyLL()
{
    head = NULL;
    iCount = 0;
}

// template <class T>
void SinglyLL :: InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;    
    newn->data = no;
    newn->next = NULL;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        newn->next = head;
        head = newn;
    }
    iCount++;
}

// template <class T>
void SinglyLL :: InsertLast(int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;   
    newn->data = no;
    newn->next = NULL;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        temp = head;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp->next = newn;
    }
    iCount++;
}

// template <class T>
void SinglyLL :: InsertAtPos(int no , int ipos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn->next = NULL;
    newn->data = no;

    if(ipos < 1 || ipos > iCount+1)
    {
        cout<<"Invalid Position";
        return;
    }
    
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        temp = head;
        int i = 0;
        for(i = 1; i<ipos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;   
        iCount++;
    }
}

// template <class T>
void SinglyLL :: DeleteFirst()
{
    PNODE temp = NULL;

    if(head == NULL)
    {
        return;
    }
    else if(head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        temp = head;

        head = head -> next;
        delete temp;
        
    }
    iCount--;
}

// template <class T>
void SinglyLL :: DeleteLast()
{
    PNODE temp = NULL;

    if(head == NULL)
    {
        return;
    }
    else if(head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        temp = head;

        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }

        delete temp->next;
        temp->next = NULL;
        
        iCount--;
    }
}

// template <class T>
void SinglyLL :: DeleteAtPos(int ipos)
{
    PNODE temp = NULL;
    PNODE target = NULL;

    if(ipos < 1 || ipos > iCount)
    {
        cout<<"Invalid Position";
        return;
    }
    
    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount+1)
    {
        DeleteLast();
    }
    else
    {
        temp = head;
        int i = 0;
        for(i = 1; i<ipos-1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = target->next;
        delete target;
        iCount--;
    }
    
}

// template <class T>
void SinglyLL :: Display()
{
    PNODE temp = head;

    cout<<"Elements of LinkedList are : \n";

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp -> next;
    }

    cout<<"NULL\n";
}

// template <class T>
int SinglyLL :: Count()
{
    return iCount;
}



int main()
{
    SinglyLL sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.InsertAtPos(75,4);

    sobj.Display();
    
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    sobj.DeleteAtPos(4);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;
}