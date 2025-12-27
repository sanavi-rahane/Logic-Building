
#include<iostream>
using namespace std;

template <class T, class W> 

void Count(T no1, W no2)
{
    cout<<no1<<'\n';
    cout<<no2;
}
int main()
{
 
    Count(10,10.5f);
}

