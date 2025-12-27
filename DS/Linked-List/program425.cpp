#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLL
{
    public:
        PNODE first;
        int iCount;

        SinglyLL()
        {
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
            else
            {
                temp = first;
                while (temp->next != NULL)
                {
                    temp =temp->next;
                }
                temp->next = newn;
                
            }
            iCount++;
        }
        
        void Display()    //change for new way can be done with for and without count just using the same consition as while using temp != NULL
        {
            PNODE temp = NULL;
            temp =first;
            int iCnt = 0;
            for (iCnt = 1;iCnt <= iCount;iCnt++)
            {
                cout<<"|"<<temp->data<<" |->";
                temp = temp->next;
            }
            cout<<"NULL\n";

            
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
    cout<<"Number of Node are : "<<iRet<<"\n";

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of Node are : "<<iRet<<"\n";

}