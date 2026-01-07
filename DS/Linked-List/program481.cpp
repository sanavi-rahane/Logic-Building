//spacific oop code os Doubly linear Linked List 
#include<iostream>
using namespace std;
#pragma pack(1)
class node
{
    public :
        int data;
        node *next;
        node *prev;

        node(int no)
        {
            this->data = no;
            this->next = NULL;
            this->prev = NULL;
        }
};

class DoublyLLL
{
    public:
        node *first;
        int iCount ;

        DoublyLLL();
        
        void Insertfirst(int);
        void Insertlast(int);
        void InsertAtPos(int,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        void Display();
        int Count();
};

DoublyLLL :: DoublyLLL()
{
    cout<<"Linked List gets created\n";
    this->first = NULL;
    this->iCount = 0;
}
void DoublyLLL :: Insertfirst(int no)
{
    node *newn = NULL;
    newn = new node(no);

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;
        this->first = newn;
    }
    this->iCount++;
}
void  DoublyLLL :: Insertlast(int no)
{
    node *newn = NULL;
    newn = new node(no);

    node *temp = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
       temp = this->first;
       while (temp->next != NULL)
       {
            temp = temp->next;
       }
       temp->next = newn;
       newn->prev = temp;   
    }
    this->iCount++;
}
void DoublyLLL :: InsertAtPos(int no,int pos)
{

}

void DoublyLLL :: DeleteFirst()
{
   
    if(this->first == NULL)                 //LL is empty
    {
        return ;
    }
    else if(this->first->next == NULL)       // LL contains 1 Node    
    {
        delete this->first;
        this->first = NULL;
    }
    else                                    //LL contains more than 1 node
    {
        
        this->first = this->first->next;
        delete this->first->prev;
        this->first->prev = NULL;
    }
    this->iCount--;
}
void  DoublyLLL :: DeleteLast()
{
    node *temp = NULL;
    if(this->first == NULL)
    {
        return ;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp = temp->prev;
        delete temp->next;
        temp->next = NULL;   
    }
    this->iCount--;
}
void DoublyLLL :: DeleteAtPos(int pos)
{

}

void DoublyLLL :: Display()
{
    node *temp = NULL;
    temp = first;
    cout<<"\nNULL <=> ";
    while (temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
    
}
int DoublyLLL :: Count()
{
    return this->iCount;
}

int main()
{
    DoublyLLL *dobj = new DoublyLLL();

    dobj->Insertfirst(51);
    dobj->Insertfirst(21);
    dobj->Insertfirst(11);

    dobj->Display();
    cout<<"Number of Elements are : "<<dobj->Count()<<"\n";

    dobj->Insertlast(101);
    dobj->Insertlast(111);
    dobj->Insertlast(121);

    dobj->Display();
    cout<<"Number of Elements are : "<<dobj->Count()<<"\n";

    dobj->DeleteFirst();
    dobj->Display();
    cout<<"Number of Elements are : "<<dobj->Count()<<"\n";

    dobj->DeleteLast();
    dobj->Display();
    cout<<"Number of Elements are : "<<dobj->Count()<<"\n";
    
    delete dobj;
    return 0;
}