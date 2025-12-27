//Array Started 
#include<stdio.h>

int main()
{
    int Arr[] = {10,20,30,40};   
    printf("%d\n",Arr); //base address of first element  //best way
    printf("%d\n",&Arr);  //base address
    printf("%d\n",&(Arr[0]));

    printf("%lu\n",sizeof(Arr)); //total Size of array which is 16 here
    return 0;
}