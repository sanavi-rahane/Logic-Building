#include<iostream>
using namespace std;
int Addition (double No1,double No2)
{
    double Ans = 0;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    float i = 0.0f,j=0.0f;
    float Ret = 0.0f;

    cout<<"Enter First Number : \n";
    cin>>i;

    cout<<"Enter Second Number : \n";   //cin and cout are bydefault in generic in CPP
    cin>>j;

    Ret = Addition(i,j);

    cout<<"Addition is : "<<Ret<<"\n";
    return 0;
}