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
           return 0;
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

    return 0;
}