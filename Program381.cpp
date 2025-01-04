#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;    
};

typedef struct node NODE;
typedef struct node* PNODE;


class Stack
{
    public:
        int iCount;
        PNODE head;

        Stack()
        {
            iCount = 0;
            head = NULL;
        }

        void Push(int no)
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

        int Pop()
        {
            PNODE temp = NULL;
            int no = -1;
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
        
        void Display()
        {
            cout<<"Elements of stack are : \n";
            PNODE temp = head;

            while(temp != NULL)
            {
                cout<<"|"<<temp->data<<"|\n";
                temp = temp->next;
            }
        }

        int Count()
        {
            return iCount;
        }

};


int main()
{
    Stack sobj;
    int iRet = 0;

    sobj.Push(101);
    sobj.Push(51);
    sobj.Push(21);
    sobj.Push(11);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"NUmber of elements are : "<<iRet<<"\n";


    iRet = sobj.Pop();
    cout<<"Poped of elements is : "<<iRet<<"\n";


    iRet = sobj.Pop();
    cout<<"Poped of elements is : "<<iRet<<"\n";


    cout<<sobj.Count();




    return 0;
}