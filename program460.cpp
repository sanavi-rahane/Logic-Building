//to learn generic coding in Cpp
#include<iostream>
using namespace std;
//type conversion but data loss coz float 10.5 but in int data accepted only 10
int Addition (int No1,int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    float i = 0.0f,j=0.0f;
    float Ret = 0.0f;

    cout<<"Enter First Number : \n";
    cin>>i;

    cout<<"Enter Second Number : \n";
    cin>>j;

    Ret = Addition(i,j);

    cout<<"Addition is : "<<Ret<<"\n";
    return 0;
}