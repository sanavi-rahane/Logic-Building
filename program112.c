//Call By Address in C
//ptr 100
//*ptr 10
//&ptr 2001
#include<stdio.h>
void Display(int *ptr)    //integer pointer 
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n",*ptr);  //issue here
    }
}
int main()
{
    int Arr[] = {10,20,30,40};    //integer value
    Display(Arr);     //Display(100)  
   
    return 0;
}


//output:
/*

10
10
10
10
*/