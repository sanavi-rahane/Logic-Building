
#include<stdio.h>
int CountOcuurence(char str[],char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
       if(*str == ch)
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

    iRet = CountOcuurence(Arr,'d');
    printf("Number of Ocurences are : %d",iRet);

    return 0;
}
/*

*/