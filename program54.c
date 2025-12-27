#include<stdbool.h>
#include<stdio.h>

bool CountPrime(int iNo)
{
    int iCnt = 0, iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFrequency++;
        }
    }
    
    if(iFrequency == 0)     //No Factor
    {
        return true;
    }
    else            //Atlest One factor
    {
        return false;
    }
}
//  Time Complexity : O(N/2)

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet=CountPrime(iValue);
    
    if(bRet == true)
        printf("%d is a Prime Number\n",iValue);
    else
        printf("%d is Not a Prime Number\n",iValue);


    return 0;
}