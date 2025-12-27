//Accept number from user and count the number of digits on that number

#include<stdio.h>
int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    
    while (iNo != 0)  
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCount++;
    }
    return iCount;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter NUmber : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("Number Of Digits are : %d\n",iRet);
    
    return 0;
}