
#include<stdio.h>

int main()
{
    char Name[50] ={'\0'};

    printf("Enter Your Name : \n");
    scanf("%[^'\n]s",Name); //until \n 

    printf("Hello %s\n",Name);
    
    return 0;
}
/*
PS D:\VIT\Marvellous DSA\C_Programming\Classwork\day> ./a.exe
Enter Your Name : 
Rahul RAmesh PAtil
Hello Rahul RAmesh PAtil
*/