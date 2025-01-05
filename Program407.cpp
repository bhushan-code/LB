#include<iostream>
using namespace std;

template <class T>

class Array
{
    public: 
        T *Arr;
        int iSize;

        Array(int S);

        ~Array();

        void Accept();

        void Display();
        
        T Addition();
};

template <class T>
Array<T> :: Array(int S)
{
    iSize = S;
    Arr = new T(iSize);

}

template <class T>
Array<T> :: ~Array()
{
    delete[]Arr;
}

template <class T>
void Array<T> :: Accept()
{
    int i = 0;
    cout<<"Enter the values :\n";
    for(i=0; i<iSize; i++)
    {
        cin>>Arr[i];
    }
}

template <class T>
void Array<T> :: Display()
{
    int i = 0;
    cout<<"Elements of the array are : \n";
    for(i=0; i<iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

template <class T>
T Array<T> :: Addition()            //return value - class name - <T> - scope resulation - function()
{
    int i = 0;
    T fSum =0;
    for(i= 0; i<iSize; i++)
    {
        fSum = fSum + Arr[i];
    }
    return fSum;
}



int main()
{   
    Array <float>aobj(5);

    float fRet = 0.0f;

    aobj.Accept();
    aobj.Display();

    fRet = aobj.Addition();
    cout<<"Addition of all elements are : "<<fRet<<"\n";
    
    return 0;
}