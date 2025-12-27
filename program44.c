//Accept two number  check first num  is divisible by second or not

//Input : 12    2       Output : true
//Input : 12    3       Output : false
//Input : 12    5       Output : false
//Input : 21    7       Output : true

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo1, int iNo2)
{
    if(iNo1 % iNo2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    bRet = CheckDivisible(iValue1,iValue2);

    if(bRet == true)
    {
        printf("It is completely Divisible\n");
    }
    else
    {
        printf("is Not Divisible\n");
    }

    return 0;
}