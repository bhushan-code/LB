// Generic Queue

#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;    
};

template <class T>
class Queue
{
    public:
        int iCount;
        struct node<T> * head;

        Queue();
        void enqueue(T no);
        T dequeue();
        void Display();
        int Count();
};

template <class T>
Queue<T>::Queue()
{
    iCount = 0;
    head = NULL;
}

template <class T>
void Queue<T>::enqueue(T no)
{
    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL;

    newn = new struct node<T>;
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
    }
    iCount++;
}

template <class T>
T Queue<T>::dequeue()
{
    struct node<T> * temp = NULL;
    T no;
    if(head == NULL)
    {
        cout<<"Queue is empty \n";
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
void Queue<T>::Display()
{
    cout<<"Elements of queue are : \n";
    struct node<T> * temp = head;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|\n";
        temp = temp->next;
    }
}

template <class T>
int Queue<T>::Count()
{
    return iCount;
}

int main()
{
    Queue<int> qobj1;
    Queue<int> qobj2;
    Queue<int> qobj3;

    qobj1.enqueue(5);
    qobj1.enqueue(7);
    qobj1.enqueue(10);

    qobj2.enqueue(7);
    qobj2.enqueue(15);

    qobj3.enqueue(23);
    qobj3.enqueue(67);
    qobj3.enqueue(75);
    qobj3.enqueue(50);

    qobj1.Display();
    qobj2.Display();
    qobj3.Display();

    return 0;
}
