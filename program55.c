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
            break;                  //Optimization 
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
//  Time Complexity :worst case : O(N/2)
//                   Best case : 1

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

/*
    Time Complexity : For Prime -- N/2
    Time Complexity : For Non Prime -- either 1 or 2


*/