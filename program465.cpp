//spacific
#include<iostream>
using namespace std;

class Arithamatic
{
    public:
        int No1;
        int No2;

        Arithamatic(int A,int B) 
        {
            this->No1 = A;
            this->No2 = B;
        }
       

        int Addition()
        {
            int Ans ; 
            Ans = No1 + No2;
            return Ans;
        }

        int Substraction()
        {
            int Ans ; 
            Ans = No1 - No2;
            return Ans;
        }
};
int main()
{
  //  Arithamatic obj();   not allowed

    Arithamatic *obj = new Arithamatic(11,10); //dynamic object

    cout<<"Additon is : "<<obj->Addition()<<"\n";
    cout<<"Substraction is : "<<obj->Substraction()<<"\n";

    delete obj;

    return 0;
}