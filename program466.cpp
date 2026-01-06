//generic 
#include<iostream>
using namespace std;
//Arithamatic <int> obj(11,10);  

template <class T>
class Arithamatic
{
    public:
        T No1;
        T No2;

        Arithamatic(T A,T B) //template<class T> inline Arithamatic<T>::Arithamatic(T A, T B)
        {
            No1 = A;
            No2 = B;
        }
       

        T Addition()
        {
            T Ans ; 
            Ans = No1 + No2;
            return Ans;
        }

        T Substraction()
        {
            T Ans ; 
            Ans = No1 - No2;
            return Ans;
        }
};

int main()
{
  //  Arithamatic obj();   not allowed

    Arithamatic <int> obj(11,10);  

    cout<<"Additon is : "<<obj.Addition()<<"\n";
    cout<<"Substraction is : "<<obj.Substraction()<<"\n";

   

    return 0;
}