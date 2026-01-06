//spacific
#include<iostream>
using namespace std;

class Arithamatic
{
    public:
        int No1;
        int No2;

        Arithamatic(int A,int B) //parametarized constructer
        {
            this->No1 = A;
            this->No2 = B;
        }
        //no destructoer needed here why?

        int Addition()
        {
            int Ans ; //not define in public ,define as local of addition coz it needed only for addition 
            Ans = No1 + No2;
            return Ans;
        }
};
int main()
{
  //  Arithamatic obj();   not allowed

    Arithamatic obj(11,10); //static object

   cout<<"Additon is : "<<obj.Addition()<<"\n";

    return 0;
}