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
void InsertAtPos(PPNODE first, int no,int pos)
{
    PNODE temp = NULL;
    int iCnt = 0;
    int iSize = 0;

    iSize = Count(*first);
      //negative pos  ||  more than size node
    if((pos < 1) || (pos > iSize+1)) //filter
    {
        printf("Invalid Size \n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(first,no);
    }
    else if(pos == iSize+1)
    {
        InsertLast(first,no);
    }
    else
    { 
        PNODE newn = NULL;
        newn = (PNODE)malloc(sizeof(NODE));
        newn -> next = NULL;
        newn -> data = no;

        temp = *first;
        for(iCnt = 1;iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }

}
void DeleteAtPos(PPNODE first,int pos)
{
    PNODE temp = NULL;
    PNODE target = NULL;
    int iCnt = 0;
    int iSize = 0;
    iSize = Count(*first);
      //negative pos  ||  more than size node
    if((pos < 1) || (pos > iSize)) //filter
    {
        printf("Invalid position \n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(first);
    }
    else if(pos == iSize)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;
        for(iCnt = 1;iCnt < pos-1;iCnt++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target->next;         // or temp->next = temp->next->next;
        free(target);
    }
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;
//insert
    InsertFirst(&head,10);
    Display(head);
    iRet = Count(head);
    printf("\nNumber of element : %d\n",iRet);

    InsertLast(&head,20);
    InsertLast(&head,30);
    InsertLast(&head,40);
    InsertLast(&head,50);
    InsertLast(&head,60);
    Display(head);
    iRet = Count(head);
    printf("\nNumber of element : %d\n",iRet);
//Delete
    DeleteFirst(&head);
    Display(head);
    iRet = Count(head);
    printf("\nNumber of element : %d\n",iRet);

    DeleteLast(&head);
    Display(head);
    iRet = Count(head);
    printf("\nNumber of element : %d\n",iRet);
//insert
    InsertAtPos(&head,105,3);
    Display(head);
    iRet = Count(head);
    printf("\nNumber of element : %d\n",iRet);

    DeleteAtPos(&head,3);
    Display(head);
    iRet = Count(head);
    printf("\nNumber of element : %d\n",iRet);

    
    return 0;
}