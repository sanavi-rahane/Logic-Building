#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first , int no)
{
    PNODE newn = NULL;  
    newn = (PNODE)malloc(sizeof(NODE)); 
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL) 
    {
         (*first) = newn;
    }
    else                
    {
        newn->next = (*first);
        (*first) = newn;
    }

}
void InsertLast(PPNODE first , int no)
{
    PNODE newn = NULL;  
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE)); 
    newn->data = no;
    newn->next = NULL;

    if((*first) == NULL) 
    {
         *first = newn;
    }
    else                
    {
        temp = *first;

        while (temp->next != NULL)      // type 2
        {
            temp = temp->next;
        }
        temp->next = newn;
        
    }

}
void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;
    if(*first  == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = (*first);
        *first = (*first)->next;
        free(temp);
    }
}
void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;
    if(*first  == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = (*first);
        while (temp->next->next != NULL) //type 3 while
        {
            temp  = temp->next;   
        }
        free(temp->next);
        temp->next = NULL;   
    }
}

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d |->",first -> data);
        first = first -> next;
    }
    printf("NULL \n");
    
}

int Count(PNODE first)
{
    int iCount = 0;
    while (first != NULL)
    {
        iCount++;
        first = first->next;

    }
    return iCount;
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,75);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);


    Display(head);
    iRet = Count(head);
    printf("\nNumber of element : %d\n",iRet);

    InsertLast(&head,78);
    InsertLast(&head,108);
    InsertLast(&head,7348);


    Display(head);
    iRet = Count(head);
    printf("\nNumber of element : %d\n",iRet);

    DeleteFirst(&head);
    Display(head);
    iRet = Count(head);
    printf("\nNumber of element : %d\n",iRet);

    DeleteLast(&head);
    Display(head);
    iRet = Count(head);
    printf("\nNumber of element : %d\n",iRet);



    
    return 0;
}