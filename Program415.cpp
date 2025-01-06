// Generic Singly Circular LL

#include<iostream>
using namespace std;

template <class T>
struct node 
{
    T data;
    struct node *next;
};

template <class T>
class SinglyCL
{
    public:
        struct node<T> * head;
        struct node<T> * tail;
        int iCount;

        SinglyCL();

        void Display();
        int Count();
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int pos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int pos);
};

template <class T>
SinglyCL<T>::SinglyCL()
{
    head = NULL;
    tail = NULL;
    iCount = 0;
}

template <class T>
void SinglyCL<T>::Display()
{
    if(head == NULL && tail == NULL)
    {
        cout<<"LinkedList is empty\n";
        return;
    }
    
    cout<<"Elements of LinkedList are : \n";
    do
    {    
        cout<<"|"<<head->data<<"|->";
        head = head->next;
    }while(head != tail->next);
    cout<<"\n";
}

template <class T>
int SinglyCL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T>::InsertFirst(T no)
{
    struct node<T> * newn = NULL;
    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;

    if(head == NULL && tail == NULL)
    {
        head = newn;
        newn->next = head;
        tail = head;
    }
    else
    {
        newn->next = head;
        head = newn;
    }
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertLast(T no)
{
    struct node<T> * newn = NULL;
    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;

    if(head == NULL && tail == NULL)
    {
        head = newn;
        newn->next = head;
        tail = head;
    }
    else
    {
        tail->next = newn;
        newn->next = head;
        tail = newn;
    }
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertAtPos(T no, int pos)
{
    if(pos < 0 || pos > iCount+1)
    {
        cout<<"invalid position";
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        struct node<T> * newn = NULL;
        struct node<T> * temp = head;
        for(int i = 1; i<pos-1; i++)
        {
            temp = temp->next;
        }
        newn = new node<T>;
        newn->data = no;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next = newn;   
        iCount++;        
    }
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
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
        head = head->next;
        delete tail->next;
        tail->next = head;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
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
        struct node<T> * temp = head;
        while(temp->next != tail)
        {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = head;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int pos)
{
    if(pos < 0 || pos > iCount)
    {
        cout<<"invalid position";
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
        struct node<T> * target = NULL;
        struct node<T> * temp = head;
        for(int i = 1; i<pos-1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = target->next;
        delete target;

        iCount--;        
    }
}

int main()
{
    SinglyCL<int> obj;

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
