#include<iostream>
using namespace std;

class Array
{
    public: 
        int *Arr;
        int iSize;

        Array(int S)
        {
            iSize = S;
            Arr = new int(iSize);
        
        }
        ~Array()
        {
            delete[]Arr;
        }

        void Accept()
        {
            int i = 0;
            cout<<"Enter the values :\n";
            for(i=0; i<iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            int i = 0;
            cout<<"Elements of the array are : \n";
            for(i=0; i<iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
        
        int Addition()
        {
            int i = 0;
            int iSum = 0;
            for(i= 0; i<iSize; i++)
            {
                iSum = iSum + Arr[i];
            }
            return iSum;
        }
};



int main()
{   
    int iRet = 0;

    Array aobj(5);
    aobj.Accept();
    aobj.Display();

    iRet = aobj.Addition();
    cout<<"Addition of all elements are : "<<iRet<<"\n";
    
    return 0;
}