//Accept two number  check first num  is divisible by second or not

//Input : 12    2       Output : true
//Input : 12    3       Output : false
//Input : 12    5       Output : false
//Input : 21    7      Output : true

#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    if(iValue1 % iValue2 == 0)
    {
        printf("%d is completely Divisible by %d\n",iValue1,iValue2);
    }
    else
    {
        printf("%d is Not Divisible by %d\n",iValue1,iValue2);
    }

    return 0;
}