#include<iostream>
using namespace std;


class Array
{
    public: 
        float *Arr;
        int iSize;

        Array(int S);

        ~Array();

        void Accept();

        void Display();
        
        float Addition();
};

Array :: Array(int S)
{
    iSize = S;
    Arr = new float(iSize);

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

float Array :: Addition()
{
    int i = 0;
    float fSum = 0.0f;
    for(i= 0; i<iSize; i++)
    {
        fSum = fSum + Arr[i];
    }
    return fSum;
}



int main()
{   
    float fRet = 0.0f;

    Array aobj(5);
    aobj.Accept();
    aobj.Display();

    fRet = aobj.Addition();
    cout<<"Addition of all elements are : "<<fRet<<"\n";
    
    return 0;
}