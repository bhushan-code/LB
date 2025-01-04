#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL
{
    public:
        PNODE head;
        PNODE tail;
        int iCount;

        SinglyCL()
        {
            head = NULL;
            tail = NULL;
            iCount = 0;
        }

        void Display()
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

        void InsertLast(int no)
        {
            PNODE newn = NULL;
            newn = new NODE;
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


        void InsertAtPos(int no, int pos)
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
                PNODE newn = NULL;
                PNODE temp = head;
                for(int i = 1; i<pos-1; i++)
                {
                    temp = temp->next;
                }
                newn = new NODE;
                newn->data = no;
                newn->next = NULL;

                newn->next = temp->next;
                temp->next = newn;   
                iCount++;        
            }
        }

        void DeleteFirst()
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

        void DeleteLast()
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
                PNODE temp = head;
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

        void DeleteAtPos(int pos)
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
                PNODE target = NULL;
                PNODE temp = head;
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
};

int main()
{
    SinglyCL obj;

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