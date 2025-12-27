//2 4 6 8 10
#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;

    for(iCnt = 1;iCnt <= iNo; iCnt++) //iCnt=iCnt+1   sequence
    {
        if((iCnt % 2) == 0)  //selection
        {
             printf("%d\t",iCnt); 
        }
    }
}
//Time Complexity : O(N)
int main()
{
    int iValue=0;
    printf("Please Enter Frequency\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}