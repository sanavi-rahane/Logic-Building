// 1 2 3 4 5

#include<stdio.h>
void display()
{
    int iCnt=0;
    iCnt = 1;
    while(iCnt <= 5)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }

}
int main()
{
    display();
    return 0;
}