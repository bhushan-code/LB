#include<iostream>
using namespace std;

int main()          //refer notebook 
{
    int iNo = 0;
    int iMask = 2;  //refer notebook 
    int iResult = 0;

    cout<<"Enter the number : \n";
    cin>>iNo;

    iResult = iNo & iMask;

    if(iResult == 0)
    {
        cout<<"Second bit is OFF\n";
    }
    else
    {
        cout<<"Second bit is ON\n";
    }

    return 0;
}

//first converted in binary then bitwise worked