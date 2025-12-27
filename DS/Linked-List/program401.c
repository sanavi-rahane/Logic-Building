//Signly Linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
int Count(PNODE first)
{
    int iCount = 0;
    while (first->next != NULL)
    {
        iCount++;
        first = first->next;
    }
    return iCount;
    
}
void InsertFirst(PPNODE first,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = (*first);
        *first = newn;
    }
}
void InsertLast(PPNODE first,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else if((*first)->next == NULL)  //at least one node
    {
       (*first)->next = newn;
    }
    else
    {
        temp = *first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        
    }
}
void InsertAtPos(PPNODE first,int no,int pos)
{
    int iSize = 0;
    int iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    iSize = Count(*first);

    if(pos < 1 || pos > iSize+1)
    {
        printf("Invalid Position \n");
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
        temp =*first;
        for(iCnt = 1; iCnt < pos-1;iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }

}
void Display(PNODE first)
{
    printf("\n");
    while (first != NULL)
    {
        printf("| %d |-> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
    
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;
    if(*first == NULL)
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
        temp = *first;
        *first = (*first)->next;
        free(temp);
    }
}
void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;
    if(*first == NULL)
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
        temp = *first;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
        
    }
}
void DeleteAtPos(PPNODE first,int pos)
{
    PNODE temp = NULL;
    PNODE target = NULL;
    int iCnt = 0;
    int iSize = 0;
    iSize = Count(*first);

    if(pos < 1 || pos > iSize)
    {
        printf("Invalid Position \n");
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
        temp->next = target->next; 
        free(target);
    }
}
int main()
{
    PNODE head = NULL;
    InsertFirst(&head,10);
    InsertFirst(&head,7);
    InsertFirst(&head,5);
    Display(head);

    InsertLast(&head,12);
    Display(head);

    InsertAtPos(&head,8,3);
    Display(head);

    DeleteFirst(&head);
    Display(head);
    DeleteLast(&head);
    Display(head);

    DeleteAtPos(&head,2);
    Display(head);
    return 0;
}