#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;    
};

typedef struct node NODE;
typedef struct node* PNODE;


class Queue
{
    public:
        int iCount;
        PNODE head;

        Queue()
        {
            iCount = 0;
            head = NULL;
        }

        void enqueue(int no)
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
                while(temp->next != NULL)
                {
                    temp = temp ->next;

                }
                temp->next = newn;
            }
            iCount++;
        }

        int dequeue()
        {
            PNODE temp = NULL;
            int no = -1;
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
        
        void Display()
        {
            cout<<"Elements of queue are : \n";
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
   Queue qobj1;
   Queue qobj2;
   Queue qobj3;

    qobj1.enqueue(5);
    qobj1.enqueue(7);
    qobj1.enqueue(10);

    qobj2.enqueue(7);
    qobj2.enqueue(15);

    qobj3.enqueue(23);
    qobj3.enqueue(67);
    qobj3.enqueue(75);
    qobj3.enqueue(50);


    return 0;
}