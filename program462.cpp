#include<iostream>
using namespace std;
template<class T>
T Addition (T No1,T No2)
{
    T Ans = 0;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    cout<<"Addition of characters : "<<Addition('c','b')<<"\n";
    cout<<"Addition of integres : "<<Addition(11,10)<<"\n";
    cout<<"Addition of Floats : "<<Addition(90.3f,78.5f)<<"\n";
    cout<<"Addition of Doubles : "<<Addition(78.67897,45.76454)<<"\n";

    return 0;
}