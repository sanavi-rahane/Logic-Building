#include<stdio.h>
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
int main()
{
    //struct node obj;
    NODE obj;
    printf("%ld\n",sizeof(obj));  //12

    return 0;
}