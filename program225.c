
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
    char cValue = '\0';

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);  

    printf("Enter Charecter :\n");
    //added space before %c to solve the problem
    scanf(" %c",&cValue);  //initial space will work for all OS
    iRet = CountOcuurence(Arr,cValue);
    printf("Number of Ocurences are : %d",iRet);

    return 0;
}
/*
Enter String : 
hello
Enter Charecter :
l
Number of Ocurences are : 2
*/