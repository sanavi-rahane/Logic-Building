//////////////////////////////////////////////
//final Generic OOP code of Doubly linear Linked List 
//////////////////////////////////////////////
#include<iostream>
using namespace std;
#pragma pack(1)
template <class T>
class DoublyLLLnode
{
    public :
        T data;
        DoublyLLLnode *next;
        DoublyLLLnode *prev;

        DoublyLLLnode(T no)
        {
            this->data = no;
            this->next = NULL;
            this->prev = NULL;
        }
};

template <class T>
class DoublyLLL
{
    private:
        DoublyLLLnode<T> *first;
        int iCount ;
    public:
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
    DoublyLLLnode<T> *newn = NULL;
    newn = new DoublyLLLnode<T>(no);

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
    DoublyLLLnode<T> *newn = NULL;
    newn = new DoublyLLLnode<T>(no);

    DoublyLLLnode<T> *temp = NULL;

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
    DoublyLLLnode<T> *newn = NULL;
    DoublyLLLnode<T> *temp = NULL;
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
        newn = new DoublyLLLnode<T>(no);
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
        
        this->first = this->first->next;
        delete this->first->prev;
        this->first->prev = NULL;
    }
    this->iCount--;
}
template <class T>
void  DoublyLLL<T> :: DeleteLast()
{
    DoublyLLLnode<T> *temp = NULL;
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
template <class T>
void DoublyLLL<T> :: DeleteAtPos(int pos)
{
    DoublyLLLnode<T> *temp = NULL;
    int iCnt = 0;
    if(pos < 1 || pos > this->iCount)           
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(pos == 1)                              
    {
        this->DeleteFirst();
    }
    else if(pos == this->iCount)              
    {
        this->DeleteLast();
    }
    else                                     
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
    DoublyLLLnode<T> *temp = NULL;
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