#include<stdio.h>
int addition(int a,int b)
{
    int add=0;
    add=a+b;
    return add;
}
int main()
{
    int i,j;
    printf("Enter First Number\n");
    scanf("%d",&i);
    printf("Enter First Number\n");
    scanf("%d",&j);
   int sum = addition(i,j);
   printf("Addition is %d",sum);
}