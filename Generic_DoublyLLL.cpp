// Generic Doubly Linear LL

#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

template <class T>
class Doubly
{
    public:
        int iCount;
        struct node<T> *head;

        Doubly();
        void Display();
        int Count();
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPosition(T no, int pos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int pos);
};

template <class T>
Doubly<T>::Doubly()
{
    head = NULL;
    iCount = 0;
}

template <class T>
void Doubly<T>::Display()
{
    struct node<T> *temp = NULL;
    temp = head;
    cout<<"Elements are : \n NULL <=>";
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |<=>";
        temp = temp->next;
    }
    cout<<" NULL\n";
}

template <class T>
int Doubly<T>::Count()
{
    return iCount;
}

template <class T>
void Doubly<T>::InsertFirst(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        newn->next = head;
        head->prev = newn;
        head = newn;
    }
    iCount++;
}

template <class T>
void Doubly<T>::InsertLast(T no)
{
    struct node<T> *temp = NULL;
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        temp = head;  
        while(temp->next != NULL)
        {
            temp = temp->next;
        }   
        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}

template <class T>
void Doubly<T>::InsertAtPosition(T no, int pos)
{
    struct node<T> *temp = NULL;
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if(pos < 0 || pos > iCount+1)
    {
        return;
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if (pos == iCount+1)
    {
        InsertLast(no);
    }
    else 
    {
        temp = head; 
        int i = 0;
        for(i = 1; i < pos-1; i++)
        {
            temp = temp->next;
        }
        newn->prev = temp;
        newn->next = temp->next;
        newn->next->prev = newn;
        temp->next = newn;
    }
}

template <class T>
void Doubly<T>::DeleteFirst()
{
    struct node<T> *temp = head;

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
        head = head->next;
        head->prev = NULL;
        delete temp;
    }
    iCount--;
}

template <class T>
void Doubly<T>::DeleteLast()
{
    struct node<T> *temp = NULL;

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
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        iCount--;
    }
}

template <class T>
void Doubly<T>::DeleteAtPosition(int pos)
{
    struct node<T> *temp = NULL;
    struct node<T> *target = NULL;

    if(pos < 0 || pos > iCount)
    {
        return;
    }

    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = head;
        int i = 0;
        for(i = 1; i < pos-1; i++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target->next;
        target->next->prev = temp;
        delete target;
        iCount--;
    }
}

int main()
{
    Doubly<int> dobj;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21); 
    dobj.InsertFirst(11);

    dobj.InsertLast(101);
    dobj.InsertLast(121);
    dobj.InsertLast(151);
    dobj.InsertAtPosition(75,4);

    dobj.Display();
    cout<<"Count is : "<<dobj.Count()<<"\n";

    dobj.DeleteAtPosition(4);
    dobj.DeleteFirst();
    dobj.DeleteLast();

    dobj.Display();
    cout<<"Count is : "<<dobj.Count()<<"\n";

    return 0;
}
