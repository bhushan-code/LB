#include<iostream>
using namespace std;



int main()
{
    int iLength = 0, iCnt = 0;

    int *Arr = NULL;


    cout<<"Enter number of element that you want to store : \n";
    cin>>iLength;

    Arr = new int[iLength];                                         //resourse allocation(Constructor)

    cout<<"Enter the Values\n";
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Entered Values\n";

    for(iCnt = 0; iCnt < iLength; iCnt++)                           //logic(fuction)
    {
        cout<<Arr[iCnt]<<"\n";
    }

    delete[]Arr;                                                    //resourse deallocation(Destructor)

    return 0;
}