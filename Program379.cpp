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
            PNODE temp = head;

            while(temp->next != NULL)
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
    sobj.Push(51);
    sobj.Push(21);
    sobj.Push(11);

    cout<<sobj.Pop();

    cout<<sobj.Count();




    return 0;
}