//singly linear linkedlinst

#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct noed** PPNODE;

class SinglyLL
{
    public:
        PNODE head;
        int iCount;

        SinglyLL()
        {
            head = NULL;
            iCount = 0;
        }

        void Display()
        {
            PNODE temp = head;
            cout<<"Elements are : \n";
            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" |->";
                temp = temp->next;
            }
            cout<<" NULL\n";
        }

        int Count()
        {
            
            return iCount;
        }
        
        void InsertFirst(int no)
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
        
        void InsertLast(int no)
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
                    temp = temp->next;
                }
                temp->next = newn;
            }
            iCount++;
        }
        
        void DeleteFirst()
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
                head = temp->next;
                delete temp;
            }
            iCount--;
        }
        
        void DeleteLast()
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
                    temp = temp->next;
                }
                delete temp->next;
                temp->next = NULL;
            }

            iCount--;
        }
        
        void InsertAtPosition(int no,int pos)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;

            newn = new NODE;
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
            else if(pos == iCount+1)
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
                newn->next = temp->next;
                temp->next = newn;
                iCount++;
            }
        }
        
        void DeleteAtPosition(int pos)
        {
            PNODE temp = NULL;
            PNODE target = NULL;

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
                delete target;
                iCount--;
            }
        }        
};




int main()
{
    SinglyLL sobj;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);
    
    
    sobj.Display();
    cout<<"Count is : "<<sobj.Count()<<"\n";

    sobj.InsertAtPosition(75,4);

    sobj.Display();
    cout<<"Count is : "<<sobj.Count()<<"\n";

    sobj.DeleteAtPosition(4);

    sobj.Display();
    cout<<"Count is : "<<sobj.Count()<<"\n";






    return 0;
}