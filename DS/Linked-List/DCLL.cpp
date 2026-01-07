///////////////////////////////////////////////////////////////////////////////////////////////////////////
//                       Doubly Circuler Linked List using Generic Approch
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
#pragma pack(1)
template<class T>
class DoublyCLLnode
{
    public:
        T data;
        DoublyCLLnode<T> *prev;
        DoublyCLLnode<T> *next;

        DoublyCLLnode(T no)
        {
            this->data = no;
            this->next = NULL;
            this->prev = NULL;
        }
};
template<class T>
class DoublyCLL
{
    private :
            int iCount;
            DoublyCLLnode<T> *first;
            DoublyCLLnode<T> *last;
    public:
            DoublyCLL();

            void InsertFirst(T);
            void InsertLast(T);
            void InsertAtPos(T,int);

            void DeleteFirst();
            void DeleteLast();
            void DeleteAtPos(int);

            void Display();
            int Count();
            
};
template<class T>
DoublyCLL<T> :: DoublyCLL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}
template<class T>
void DoublyCLL<T> :: InsertFirst(T no)
{
    DoublyCLLnode<T> *newn = NULL;
    newn = new DoublyCLLnode<T>(no);

    if(this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        newn->next = this->first;
        this->first = newn;
    }
    this->last->next = this->first;
    this->first->prev = this->last;
    this->iCount++;
}
template<class T>
void DoublyCLL<T> :: InsertLast(T no)
{
    DoublyCLLnode<T> *newn = NULL;
    newn = new DoublyCLLnode<T>(no);

    if(this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        this->last->next = newn;
        newn->prev = this->last;
        this->last = newn;
    }
    this->last->next = this->first;
    this->first->prev = this->last;
    this->iCount++;
}
template<class T>
void DoublyCLL<T> :: InsertAtPos(T no,int pos)
{
    DoublyCLLnode<T> *newn = NULL;
    DoublyCLLnode<T> *temp = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > this->iCount+1)
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(pos == 1)
    {
        this->InsertFirst(no);
    }
    else if(pos == this->iCount+1)
    {
        this->InsertLast(no);
    }
    else
    {
        newn = new DoublyCLLnode<T>(no);
        temp = this->first;

        for(iCnt = 1;iCnt < pos-1; iCnt++)
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
template<class T>
void DoublyCLL<T> :: DeleteFirst()
{
    if(this->first == NULL && this->last == NULL)
    {
        return;
    }
    else if(this->first == this->last )
    {
        delete this->first;
        this->first = this->last = NULL;
    }
    else
    {
        this->first = this->first->next;
        delete this->first->prev;

    }
    this->last->next = this->first;
    this->first->prev = this->last;
    this->iCount--;
}
template <class T>
void DoublyCLL<T> :: DeleteLast()
{
    if(this->first == NULL && this->last == NULL)
    {
        return;
    }
    else if(this->first == this->last )
    {
        delete this->first;
        this->first = this->last = NULL;
    }
    else
    {
       this->last = this->last->prev;
       delete this->last->next;

    }
    this->last->next = this->first;
    this->first->prev = this->last;
    this->iCount--;
}
template<class T>
void DoublyCLL<T> :: DeleteAtPos(int pos)
{
    DoublyCLLnode<T> *temp = NULL;
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
    }
}
template<class T>
void DoublyCLL<T> :: Display()
{
    DoublyCLLnode<T> *temp = NULL;
    temp = this->first;
    cout<<"\n<=>";
    do
    {
        cout<<" | "<<temp->data<<" |<=>";
        temp = temp->next;
    } while (temp != this->first);
    cout<<"\n";
    
}
template<class T>
int DoublyCLL<T> :: Count()
{
    return this->iCount;
}

int main()
{

    DoublyCLL<int> *obj = new DoublyCLL<int>();

    obj->InsertFirst(51);
    obj->InsertFirst(21);
    obj->InsertFirst(11);
    obj->Display();
    cout<<"Number of Element are : "<<obj->Count()<<"\n";
    obj->InsertLast(101);
    obj->InsertLast(111);
    obj->InsertLast(121);
    obj->Display();
    cout<<"Number of Element are : "<<obj->Count()<<"\n";

    obj->DeleteFirst();
    obj->Display();
    cout<<"Number of Element are : "<<obj->Count()<<"\n";

    obj->DeleteLast();
    obj->Display();
    cout<<"Number of Element are : "<<obj->Count()<<"\n";

    obj->InsertAtPos(105,3);
    obj->Display();
    cout<<"Number of Element are : "<<obj->Count()<<"\n";

    obj->DeleteAtPos(3);
    obj->Display();
    cout<<"Number of Element are : "<<obj->Count()<<"\n";
    delete obj;
    return 0;
}