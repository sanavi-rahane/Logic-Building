//Call By Address in C
//*(ptr+0) = 10
//*(ptr+1) = 20
//*(ptr+2) = 30
//*(ptr+3) = 40
//*(ptr+0)  == ptr[0]
#include<stdio.h>
void Display(int *Arr)   
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n",*(Arr + iCnt));
        
    }
}
int main()
{
    int Brr[] = {10,20,30,40};    
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