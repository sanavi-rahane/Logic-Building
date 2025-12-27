//Call By Address in C


#include<stdio.h>
void Display(int Arr[])  
{
    int iCnt = 0;
                        //issue
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n",Arr[iCnt]); 
        
    }
}
int main()
{
    int Brr[] = {10,20,30,40,50,60,70};    
    Display(Brr);     
   
    return 0;
}


//output:
/*
10
20
30
40

*/