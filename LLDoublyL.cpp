// Doubly linear linked list

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class Doubly
{
    public:
        int iCount;
        PNODE head;

        Doubly()
        {
            head = NULL;
            iCount = 0;
        }

        void Display()
        {
            PNODE temp = NULL;
            temp = head;
            cout<<"Elements are : \n NULL <=>";
            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" |<=>";
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
                head->prev = newn;
                head = newn;
            }
            iCount++;

        }

        void InsertLast(int no)
        {
            PNODE temp = NULL;
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

        void InsertAtPosition(int no,int pos)
        {
            PNODE temp = NULL;
            PNODE newn = NULL;
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
                newn->prev = temp;//300
                newn->next = temp->next;//400
                newn->next->prev = newn;//350
                temp->next = newn;//350
            }
        }

        void DeleteFirst()
        {
            PNODE temp = head;

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
                iCount--;
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
                target = temp->next;        //400
                temp->next = target->next;  //500
                target->next->prev = temp;  //300
                delete target;              //400
                iCount--;
            }
        }
};

int main()
{
    Doubly dobj;
 
 
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