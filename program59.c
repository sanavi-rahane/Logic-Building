#include<stdbool.h>
#include<stdio.h>
//best Approch
bool CountPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2, bFlag = true; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {  
            bFlag = false;
            break;                  //Optimization 
        }
    }
    
    return bFlag;
}


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