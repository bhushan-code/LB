#include<iostream>
using namespace std;

double AdditionD(double Arr[], int iSize)
{
    double dSum = 0.0;
    int i= 0;
    for(i= 0; i<iSize; i++)
    {
        dSum = dSum +Arr[i];
    }
    return dSum;
}

int main()
{   
    double Brr[]= {10.7789,20.2689,30.1689,40.586};
    double dRet = 0.0;
    
    dRet = AdditionD(Brr,4);
    cout<<"Addition is : "<<dRet<<"\n";
    
    return 0;
}