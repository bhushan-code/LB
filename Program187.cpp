#include<iostream>
using namespace std;

void DisplayFactors(int iNo)        //Time complexity O(N)
{
    int iCnt = 0;
    for(iCnt=1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\n";
        }
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter First number : \n";
    cin>>iValue;

    DisplayFactors(iValue);

    return 0;
}

