#include<iostream>
using namespace std;


class Check
{
    public:
    int iNo;

    Check(int A)
    {
        iNo = A;
    }
    
    int CountDigit()
    {
        static int Count = 0;
        if(iNo != 0)
        {
            iNo = iNo/10;
            Count++;
            CountDigit();
        }
        return Count;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"enter the number : ";
    cin>>iValue;

    Check cobj(iValue);
    iRet = cobj.CountDigit();

    cout<<iRet;

    return 0;
}