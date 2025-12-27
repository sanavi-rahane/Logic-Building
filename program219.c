
#include<stdio.h>
int CountA(char str[])
{
    int iCount = 0;

    while (*str != '\0')
    {

       if(*str == 'A')
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

    iRet = CountA(Arr);
    printf("Count of A is : %d",iRet);

    return 0;
}
/*

*/