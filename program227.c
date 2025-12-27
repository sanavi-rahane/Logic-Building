//count number of small charecters in a string using ASSII
#include<stdio.h>
int CountSmall(char str[])
{
    int iCount = 0;

    while (*str != '\0')
    {
       if((*str >= 97) && (*str <= 122))
       {
         iCount++;
       }
        str++;
    }
    return iCount;
    
}
int main()
{
    char Arr[50] ={'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);  

    iRet = CountSmall(Arr);
    printf("Number of small charectrs are : %d",iRet);

    return 0;
}
/*
*/
