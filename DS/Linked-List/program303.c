
#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node obj;
    printf("%ld\n",sizeof(obj)); //8 bite pointer and 4 padding =16

    return 0;
}