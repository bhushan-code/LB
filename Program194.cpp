#include<iostream>
using namespace std;

class Array
{
    public:
    int iSize;
    int *Arr;

    Array(int A)
    {
        iSize = A;
        Arr = new int[iSize];
    }

    void Accept()
    {
        int iCnt = 0;
        cout<<"Enter the Values\n";
        for(iCnt = 0; iCnt < iSize; iCnt++) 
        {
            cin>>Arr[iCnt];
        }
    }

    void Display()
    {
        int iCnt = 0;
        cout<<"Entered Values\n";
        for(iCnt = 0; iCnt < iSize; iCnt++) 
        {
            cout<<Arr[iCnt]<<"\n";
        }
    }


    void DisplayR()
    {
        int iCnt = 0;
        cout<<"Entered Values\n";
        for(iCnt = iSize-1; iCnt >= 0; iCnt--) 
        {
            cout<<Arr[iCnt]<<"\n";
        }
    }


    int CountEven()
    {
        int iCnt = 0;
        int iCount = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {   
            if(Arr[iCnt] % 2 == 0)
            {
                iCount++;
            }
        }
        return iCount;
    }

    ~Array()
    {
        delete[]Arr;
    }
};


int main()
{
    int iLength = 0, iRet = 0;

    cout<<"Enter number of element that you want to store : \n";
    cin>>iLength;

    Array aobj(iLength);

    aobj.Accept();
    aobj.Display();
    aobj.DisplayR();


    iRet = aobj.CountEven();

    cout<<"Count of Even element :"<<iRet<< "\n";

    return 0;
}