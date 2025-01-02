#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
}

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    public:
        PNODE head;
        int iCount;


        DoublyLL()
        {
            head = NULL;
            iCount = 0;
        }

        void Display()
        {}
        int Count()
        {
            return iCount;
        }
        void InsertFirst(int No)
        {}
        void InsertLast(int No)
        {}
        void DeleteFirst()
        {}
        void DeleteLast()
        {}
        void InsertAtPos(int No, int ipos)
        {}
        void DeleteAtPos(int ipos)
        {}


};

int main()
{
    int iRet = 0;

    DoublyLL dobj;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);
    
    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.InsertAtPos(75,4);

        
    iRet = dobj.Count();
    coout<<"Count is : "<<iRet;

    dobj.Display();

    



    return 0;
}