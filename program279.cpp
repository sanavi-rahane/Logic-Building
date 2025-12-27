//OOP approch (generic)
#include<iostream>
using namespace std;

template <class T>
class Arithematic
{
    public:
        T No1;
        T No2;

    Arithematic(T A,T B)
    {
        No1 = A;
        No2 = B;
    }

    int Addition()
    {
        T Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }

    int Substraction()
    {
        T Ans = 0;
        Ans = No1 - No2;
        return Ans;
    }

};

int main()
{

    Arithematic aobj1(11,10);  //error
    Arithematic aobj2(101,50);  //error

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj1.Substraction()<<"\n";

    cout<<aobj2.Addition()<<"\n";
    cout<<aobj2.Substraction()<<"\n";
    
    return 0;
}
//error is required template argument 
