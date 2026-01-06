//generic 
#include<iostream>
using namespace std;

template <class T>
class Arithamatic
{
    public:
        T No1;
        T No2;

        Arithamatic(T A,T B) 
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

    Arithamatic <int> iobj(11,10);  

    cout<<"Additon is : "<<iobj.Addition()<<"\n";
    cout<<"Substraction is : "<<iobj.Substraction()<<"\n";

    Arithamatic <double> dobj(11.8967,10.4567);  

    cout<<"Additon is : "<<dobj.Addition()<<"\n";
    cout<<"Substraction is : "<<dobj.Substraction()<<"\n";

    return 0;
}