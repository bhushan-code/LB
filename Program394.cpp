#include<iostream>
using namespace std;

float AdditionF(float no1, float no2)
{
    float Ans = 0.0f;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    float iRet = 0.0f;

    iRet = AdditionF(11.70f,10.20f);

    cout<<"Addition is : "<<iRet<<"\n";

    return 0;
}