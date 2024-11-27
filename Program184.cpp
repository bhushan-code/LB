#include<iostream>
using namespace std;

int Addition(int iValue1, int iValue2)
{
    int iRet = 0;
    iRet = iValue1+iValue2;
    return iRet;
}

int main()
{
    int iNo1 = 10, iNo2 = 20, iAns = 0;

    iAns = Addition(iNo1,iNo2);

    cout<<"Addition is : "<<iAns<<"\n";

    return 0;
}