//Generic code os Doubly linear Linked List 
#include<iostream>
using namespace std;
#pragma pack(1)
template <class T>
class node
{
    public :
        T data;
        node *next;
        node *prev;

        node(T no)
        {
            this->data = no;
            this->next = NULL;
            this->prev = NULL;
        }
};

template <class T>
class DoublyLLL
{
    public:
        node<T> *first;
        int iCount ;

        DoublyLLL();
        
        void Insertfirst(T);
        void Insertlast(T);
        void InsertAtPos(T,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        void Display();
        int Count();
};
template <class T>
DoublyLLL<T> :: DoublyLLL()
{
    cout<<"Linked List gets created\n";
    this->first = NULL;
    this->iCount = 0;
}
template <class T>
void DoublyLLL<T> :: Insertfirst(T no)
{
    node<T> *newn = NULL;
    newn = new node<T>(no);

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
template <class T>
void  DoublyLLL<T> :: Insertlast(T no)
{
    node<T> *newn = NULL;
    newn = new node<T>(no);

    node<T> *temp = NULL;

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
template <class T>
void DoublyLLL<T> :: InsertAtPos(T no,int pos)
{
    node<T> *newn = NULL;
    node<T> *temp = NULL;
    int iCnt = 0;

    if(pos < 1 || pos > this->iCount+1)
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(pos == 1)
    {
        this->Insertfirst(no);
    }
    else if(pos == this->iCount+1)
    {
        this->Insertlast(no);
    }
    else
    {
        newn = new node<T>(no);
        temp = first;
        for(iCnt = 1;iCnt < pos-1;iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        this->iCount++;
    }
}
template <class T>
void DoublyLLL<T> :: DeleteFirst()
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
template <class T>
void  DoublyLLL<T> :: DeleteLast()
{
    node<T> *temp = NULL;
    if(this->first == NULL)                 //LL is empty
    {
        return ;
    }
    else if(this->first->next == NULL)          //LL contains 1 node
    {
        delete this->first;
        this->first = NULL;
    }
    else                                //LL contains more than 1 node
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
template <class T>
void DoublyLLL<T> :: DeleteAtPos(int pos)
{
    node<T> *temp = NULL;
    int iCnt = 0;
    if(pos < 1 || pos > this->iCount)           //check for valid position
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(pos == 1)                              //delete first node
    {
        this->DeleteFirst();
    }
    else if(pos == this->iCount)              //delete last node
    {
        this->DeleteLast();
    }
    else                                     // delete in middle
    {
        temp = first;
        for(iCnt = 1;iCnt < pos-1;iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        this->iCount--;
    }
}
template <class T>
void DoublyLLL<T> :: Display()
{
    node<T> *temp = NULL;
    temp = first;
    cout<<"\nNULL <=> ";
    while (temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
    
}
template <class T>
int DoublyLLL<T> :: Count()
{
    return this->iCount;
}

int main()
{
    DoublyLLL<char> *dobj = new DoublyLLL<char>();

    dobj->Insertfirst('c');
    dobj->Insertfirst('b');
    dobj->Insertfirst('a');

    dobj->Display();
    cout<<"Number of Elements are : "<<dobj->Count()<<"\n";

    dobj->Insertlast('x');
    dobj->Insertlast('y');
    dobj->Insertlast('z');

    dobj->Display();
    cout<<"Number of Elements are : "<<dobj->Count()<<"\n";

    dobj->DeleteFirst();
    dobj->Display();
    cout<<"Number of Elements are : "<<dobj->Count()<<"\n";

    dobj->DeleteLast();
    dobj->Display();
    cout<<"Number of Elements are : "<<dobj->Count()<<"\n";

    dobj->InsertAtPos('$',3);
    dobj->Display();
    cout<<"Number of Elements are : "<<dobj->Count()<<"\n";

    dobj->DeleteAtPos(3);
    dobj->Display();
    cout<<"Number of Elements are : "<<dobj->Count()<<"\n";
    
    delete dobj;
    
    return 0;
}