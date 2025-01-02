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
        {}

        int Count()
        {
            return iCount;
        }

        void InsertFirst(int no){}
        void InsetLast(int no){}

        void DeleteFirst(int no){}
        void DeleteLast(int no){}

        void InsertAtPos(int no, int ipos){}
        void DeleteAtPos(int ipos){}      
};


int main()
{
    DoublyCL dobj;
    int iRet = 0;
    
    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertFirst(101);
    dobj.InsertFirst(111);
    dobj.InsertFirst(121);

    dobj.InsertAtPos(75);
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    dobj.Display();

    return 0;
}