#include<iostream>
using namespace std;

//scope resolution 
//return value - class name - scope resolution

class Array
{
    public: 
        int *Arr;
        int iSize;

        Array(int S);

        ~Array();

        void Accept();

        void Display();
        
        int Addition();
};

Array :: Array(int S)
{
    iSize = S;
    Arr = new int(iSize);

}
Array :: ~Array()
{
    delete[]Arr;
}

void Array :: Accept()
{
    int i = 0;
    cout<<"Enter the values :\n";
    for(i=0; i<iSize; i++)
    {
        cin>>Arr[i];
    }
}

void Array :: Display()
{
    int i = 0;
    cout<<"Elements of the array are : \n";
    for(i=0; i<iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

int Array :: Addition()
{
    int i = 0;
    int iSum = 0;
    for(i= 0; i<iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}



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