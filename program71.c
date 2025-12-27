//Accept number from user and return the sum of all digits of that number

#include<stdio.h>
int SumDigits(int iNo)
{
    int iSum = 0, iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)  
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum=iSum + iDigit;
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter NUmber : \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);
    printf("Sum of Digits : %d\n",iRet);
    
    return 0;
}