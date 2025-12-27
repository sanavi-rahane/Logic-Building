// 1 2 3 4 5

#include<stdio.h>
void display()
{
    int iCnt=0;
    for(iCnt = 1;iCnt <= 5; iCnt++)
    {
        printf("*\t"); //static loop as loop has same body 
    }

}
int main()
{
    display();
    return 0;
}