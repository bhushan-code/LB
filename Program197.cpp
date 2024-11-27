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

    void Reverse()
    {
        int iStart = 0;
        int iEnd = iSize-1;
        int temp = 0;

        while(iStart < iEnd)
        {
            temp = Arr[iStart]; 
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = temp;

            iStart++;
            iEnd--;
        }
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

    aobj.Reverse();

    cout<<"Element of array after reversal : \n";
    aobj.Display();
 
    return 0;
}