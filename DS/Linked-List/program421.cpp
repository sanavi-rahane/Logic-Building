//Singly linked list in CPP OOP approch
#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
        PNODE first;
        int iCount;

        SinglyLL()
        {
            cout<<"Object of SinglyLL gets created.\n";
            first = NULL;
            iCount = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;
            newn = new NODE;
            newn->data = no;
            newn->next = NULL;

            if(first == NULL)
            {
                first = newn;
            }
            else
            {
                newn->next = first;
                first = newn;
            }
            iCount++;
        }
        void InsertLast(int no)
        {
            PNODE temp = NULL;
            PNODE newn = NULL;
            newn = new NODE;
            newn->data = no;
            newn->next = NULL;

            if(first == NULL)
            {
                first = newn;
            }
            else if(first->next == NULL)
            {
                first->next = newn;
            }
            else
            {
                temp = first;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = newn;
                
            }
            iCount++;
        }
        void InsertAtPos(int no,int pos)
        {

            PNODE temp = NULL;
            PNODE newn = NULL;
            int iCnt = 0;

            if((pos < 1) || (pos > iCount+1))
            {
                printf("Invalid Position\n");
                return;
            }

            if(pos == 1)
            {
                InsertFirst(no);
            }
            else if(pos == iCount+1)
            {
                InsertLast(no);
            }
            else
            {
                newn = new NODE;
                newn->data = no;
                newn->next = NULL;

                temp = first;
                for(iCnt = 1;iCnt < pos-1;iCnt++)
                {
                    temp = temp->next;
                }
                newn->next = temp->next;
                temp->next = newn;
                iCount++;
            }
            
        }

        void DeleteFirst()
        {
            PNODE temp = NULL;
            if(first == NULL)
            {
                return;
            }
            else if(first->next == NULL)
            {
                delete first;
                first = NULL;
            }
            else
            {

                temp = first;
                first = temp->next;
                free(temp);
            }
            iCount--;
        }
        void DeleteLast()
        {
            PNODE temp = NULL;
            if(first == NULL)
            {
                return;
            }
            else if(first->next == NULL)
            {
                free(first);
                first = NULL;
            }
            else
            {

                temp = first;
                while (temp->next->next != NULL)
                {
                    temp = temp->next;
                }
                free(temp->next);
                temp->next = NULL;
            }
            iCount--;
        }
        void DeleteAtPos(int pos)
        {
            PNODE temp = NULL;
            PNODE target = NULL;
            int iCnt = 0;
            if((pos < 1) || (pos > iCount))
            {
                printf("Invalid Position \n");
                return;
            }

            if(pos == 1)
            {
                DeleteFirst();
            }
            else if(pos == iCount)
            {
                DeleteLast();
            }
            else
            {
                temp = first;
               
                for(iCnt = 1;iCnt < pos-1;iCnt++)
                {
                    temp = temp->next;
                }
                target = temp->next;
                temp->next = target->next;
                free(target);
                iCount--;
            
            }
        }

        void Display()
        {
            PNODE temp = NULL;
            temp = first;
            printf("\n");
            while (temp !=  NULL)
            {
                printf("| %d | -> ",temp->data);
                temp = temp->next;
            }
            printf("NULL\n");
            
        }
        int Count()
        {
            return iCount;
        }
        
};
int main()
{

    SinglyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj.InsertAtPos(25,3);
   
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj.DeleteFirst();
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
   
    obj.DeleteLast();
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj.DeleteAtPos(3);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}