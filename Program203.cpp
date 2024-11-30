#include<iostream>
using namespace std;

int main()
{
    int iNo1 = 13;
    int iNo2 = 24;

    int iAns = 0;

    iAns = iNo1 & iNo2;
    cout<<"Bitwise and : "<<iAns<<"\n";

    iAns = iNo1 | iNo2;
    cout<<"Bitwise or : "<<iAns<<"\n";

    iAns = iNo1 ^ iNo2;
    cout<<"Bitwise xor : "<<iAns<<"\n";


    return 0;
}

//first converted in binary then bitwise worked