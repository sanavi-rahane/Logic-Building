//2 4 6 8 10
//short hand operator 
//optimize code

#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;

    for(iCnt = 2;iCnt <= iNo; iCnt+=2) //short hand assignment operator
    {    
      printf("%d\t",iCnt);    
    }
    
}
//Time Complexity :  O(N/2)
int main()
{
    int iValue=0;
    printf("Please Enter Frequency\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}