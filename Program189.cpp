#include<iostream>
using namespace std;

class Number
{
    public:
        int iNo;

        Number(int A)
        {
            this->iNo = A;
        }

        void DisplayFactors()                                               //Time complexity O(N/2)
        {
            int iCnt = 0;
            for(iCnt = 1; iCnt <= this->iNo/2; iCnt++)
            {
                if(this->iNo % iCnt == 0)
                {
                    cout<<iCnt<<"\n";
                }
            }
        }
};


int main()
{
    int iValue = 0;

    cout<<"Enter First number : \n";
    cin>>iValue;

    Number nobj(iValue);

    nobj.DisplayFactors();

    return 0;
}