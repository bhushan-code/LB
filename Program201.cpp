#include<iostream>
using namespace std;

int main()
{
    int iNo = 83;
    int Digit = 0;

    while(iNo != 0)
    {
        Digit = iNo % 2;
        cout<<Digit;
        iNo = iNo / 2;
    }
    cout<<"\n";

    return 0;
}