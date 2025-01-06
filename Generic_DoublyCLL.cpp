// Generic Doubly Circular LL

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
class DoublyCL
{
    public:
        struct node<T> * head;
        struct node<T> * tail;
        int iCount;

        DoublyCL();
        void Display();
        int Count();
        void InsertFirst(T no);
        void InsertLast(T no);
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(T no, int ipos);
        void DeleteAtPos(int ipos);
};

template <class T>
DoublyCL<T>::DoublyCL()
{
    head = NULL;
    tail = NULL;
    iCount = 0;
}

template <class T>
void DoublyCL<T>::Display()
{
    if(head == NULL && tail == NULL)
    {
        cout<<"LL empty\n";
        return;
    }
    else
    {
        do
        {
            cout<<"|"<<head->data<<"|<=>";
            head = head->next;
        }while(head != tail->next);
    }
    cout<<"\n";
}

template <class T>
int DoublyCL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyCL<T>::InsertFirst(T no)
{
    struct node<T> * newn = NULL;
    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(head == NULL && tail == NULL)
    {
        head = newn;
        head->next = newn;
        tail = newn;
        head->prev = tail;
    }
    else
    {
        newn->next = head;
        head->prev = newn;
        head = newn;
        head->prev = tail;
    }
    iCount++;
}

template <class T>
void DoublyCL<T>::InsertLast(T no)
{
    struct node<T> * newn = NULL;
    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(head == NULL && tail == NULL)
    {
        head = newn;
        head->next = newn;
        tail = newn;
        head->prev = tail;
    }
    else
    {
        tail->next = newn;
        newn->prev = tail;
        tail = newn;
        tail->next = head;
    }
    iCount++;
}

template <class T>
void DoublyCL<T>::DeleteFirst()
{
    struct node<T> * temp = NULL;
    if(head == NULL && tail == NULL)
    {
        return;
    }
    else if(head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        temp = head;
        head = head->next;
        head->prev = tail;
        tail->next = head;
        delete temp;
    }
    iCount--;
}

template <class T>
void DoublyCL<T>::DeleteLast()
{
    struct node<T> * temp = NULL;
    if(head == NULL && tail == NULL)
    {
        return;
    }
    else if(head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        temp = tail;
        tail = tail->prev;
        head->prev = tail;
        tail->next = head;

        delete temp;
    }
    iCount--;
}

template <class T>
void DoublyCL<T>::InsertAtPos(T no, int ipos)
{
    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL;
    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(ipos < 0 || ipos > iCount+1)
    {
        cout<<"invalid position\n";
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
        temp->next->prev = newn;
        newn->prev = temp;
        temp->next = newn;
        iCount++;
    }
}

template <class T>
void DoublyCL<T>::DeleteAtPos(int ipos)
{
    struct node<T> * target = NULL;
    struct node<T> * temp = NULL;

    if(ipos < 0 || ipos > iCount)
    {
        cout<<"invalid position\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount)
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
        temp->next->prev = temp;
        delete target;
        iCount--;
    }
}

int main()
{
    DoublyCL <int> obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.InsertAtPos(75,4);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    obj.DeleteAtPos(4);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;
}
