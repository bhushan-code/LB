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

class DoublyCL
{
    public:
        PNODE head;
        PNODE tail;
        int iCount;

        DoublyCL()
        {
            head = NULL;
            tail = NULL;
            iCount = 0;
        }

        void Display()
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
            newn->prev = NULL;

            if(head == NULL && tail == NULL)
            {
                head = newn;
                head->next = newn;
                tail = newn;
                head->prev= tail;
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

        void InsertLast(int no)
        {
            PNODE newn = NULL;
            newn = new NODE;
            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            if(head == NULL && tail == NULL)
            {
                head = newn;
                head->next = newn;
                tail = newn;
                head->prev= tail;
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
        
        void DeleteFirst()
        {
            PNODE temp = NULL;
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

        void DeleteLast()
        {
            PNODE temp = NULL;
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
        
        void InsertAtPos(int no, int ipos)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;
            newn = new NODE;
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
                temp->next =newn;
                iCount++;
            }
        }
        
        void DeleteAtPos(int ipos)
        {
            PNODE target = NULL;
            PNODE temp = NULL;
   

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

};

int main()
{
    DoublyCL obj;
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