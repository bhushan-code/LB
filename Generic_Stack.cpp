// Generic Stack

#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;    
};

template <class T>
class Stack
{
    public:
        int iCount;
        struct node<T> * head;

        Stack();
        void Push(T no);
        T Pop();
        void Display();
        int Count();
};

template <class T>
Stack<T>::Stack()
{
    iCount = 0;
    head = NULL;
}

template <class T>
void Stack<T>::Push(T no)
{
    struct node<T> * newn = NULL;
    newn = new struct node<T>;
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

template <class T>
T Stack<T>::Pop()
{
    struct node<T> * temp = NULL;
    T no;
    if(head == NULL)
    {
        cout<<"Stack is empty \n";
        return -1;
    }
    else if(head->next == NULL)
    {
        no = head->data;
        delete head;
        head = NULL;
    }
    else
    {
        no = head->data;
        temp = head;
        head = head->next;
        delete temp;
    }
    iCount--;
    return no;
}

template <class T>
void Stack<T>::Display()
{
    cout<<"Elements of stack are : \n";
    struct node<T> * temp = head;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|\n";
        temp = temp->next;
    }
}

template <class T>
int Stack<T>::Count()
{
    return iCount;
}

int main()
{
    Stack<int> sobj;  
    int iRet = 0;

    sobj.Push(101);
    sobj.Push(51);
    sobj.Push(21);
    sobj.Push(11);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    iRet = sobj.Pop();
    cout<<"Popped element is : "<<iRet<<"\n";

    iRet = sobj.Pop();
    cout<<"Popped element is : "<<iRet<<"\n";

    cout<<"Number of elements are : "<<sobj.Count()<<"\n";

    return 0;
}
