/*
    START
        Accept number and store as no
        Dicide no by 2
        If the emainder is 0 
            then display as Even 
        otherwise 
            display as Odd
    STOP

    */
#include<stdio.h>
void CheckEvenOdd(int iNo)   
{
    int iRem=0;
    iRem = iNo % 2;
    if(iRem==0)
    {
        printf("it is Even Number\n");
    }
    else
    {
        printf("It is Odd Number\n");
    }
}
int main()
{
    int iValue=0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);
    return 0;
}