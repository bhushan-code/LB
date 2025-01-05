#include<iostream>
using namespace std;

template<class T>


T Addition(T Arr[], int iSize)
{
    T dSum;
    int i= 0;
    for(i= 0; i<iSize; i++)
    {
        dSum = dSum +Arr[i];
    }
    return dSum;
}

int main()
{   
    double Drr[]= {10.7789,20.2689,30.1689,40.586};
    double dRet = 0.0;
    
    float Frr[]= {10.7f,20.2f,30.1f,40.5f};
    float fRet = 0.0f;

    int Irr[]= {10,20,30,40};
    int iRet = 0;

    dRet = Addition(Drr,4);
    cout<<"Addition of Double is : "<<dRet<<"\n";
    
    fRet = Addition(Frr,4);
    cout<<"Addition of float is : "<<fRet<<"\n";
    
    iRet = Addition(Irr,4);
    cout<<"Addition of integer is : "<<iRet<<"\n";
    
    return 0;
}