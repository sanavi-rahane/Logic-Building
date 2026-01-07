#include<iostream>
using namespace std;
#pragma pack(1)
template <class T>
class SinglyCLLnode
{
    public:
        T data;
        SinglyCLLnode<T> *next;

        SinglyCLLnode(T no)
        {
            this->data = no;
            this->next = NULL;
        }
};
template<class T>
class SinglyCLL
{
    private : 
            int iCount;
            SinglyCLLnode<T> *first;
            SinglyCLLnode<T> *last;

    public:
            SinglyCLL();
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
SinglyCLL<T> :: SinglyCLL()
{
    this->iCount = 0;
    this->first = NULL;
    this->last = NULL;
}
template<class T>
void SinglyCLL<T> :: InsertFirst(T no)
{
    SinglyCLLnode<T> *newn = NULL;
    newn = new SinglyCLLnode<T>(no);

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
    this->iCount++;
}
template<class T>
void SinglyCLL<T> :: InsertLast(T no)
{
    SinglyCLLnode<T> *newn = NULL;
    newn = new SinglyCLLnode<T>(no);

    if(this->first == NULL && this->last == NULL)
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        this->last->next = newn;
        this->last = newn;
    }
    this->last->next = this->first;
    this->iCount++;
}
template<class T>
void SinglyCLL<T> :: DeleteFirst()
{
    if(this->first == NULL && this->last == NULL)
    {
        return;
    }
    else if(this->first == this->last)
    {
        delete this->first;
        this->first = this->last = NULL;
    }
    else
    {
        this->first = this->first->next;
        delete this->last->next;
    }
    this->last->next = this->first;
    this->iCount--;
}
template<class T>
void SinglyCLL<T> :: DeleteLast()
{
    SinglyCLLnode<T> *temp = NULL;
    if(this->first == NULL && this->last == NULL)
    {
        return;
    }
    else if(this->first == this->last)
    {
        delete this->first;
        this->first = this->last = NULL;
    }
    else
    {
        temp = this->first;
        while (temp->next != this->last)
        {
            temp = temp->next;
        }
        delete this->last;
        this->last = temp;
        
    }
    this->last->next = this->first;
    this->iCount--;
}
template<class T>
void SinglyCLL<T> :: InsertAtPos(T no,int pos)
{
    SinglyCLLnode<T> *newn = NULL;
    SinglyCLLnode<T> *temp = NULL;
    int iCnt = 0;
    if(pos < 1 || pos > this->iCount+1)
    {
        cout<<"Invlaid Position\n";
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
        newn = new SinglyCLLnode<T>(no);
        temp = this->first;
        for(iCnt = 1;iCnt < pos-1;iCnt++)
        {
            temp =temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        this->iCount++;
    }
}
template<class T>
void SinglyCLL<T> :: DeleteAtPos(int pos)
{
    SinglyCLLnode<T> *temp = NULL;
    SinglyCLLnode<T> *target = NULL;
    int iCnt = 0;
    if(pos < 1 || pos > this->iCount)
    {
        cout<<"Invlaid Position\n";
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
        temp = this->first;
        for(iCnt = 1;iCnt < pos-1;iCnt++)
        {
            temp =temp->next;
        }
        target = temp->next;
        temp->next = target->next;
        delete target;
        this->iCount--;
    }

}
template<class T>
void SinglyCLL<T> :: Display()
{
    SinglyCLLnode<T> *temp = NULL;
    temp = this->first;
    cout<<"\n";
    do
    {
        cout<<" | "<<temp->data<<" |->";
        temp = temp->next;
    } while (temp != this->first);
    cout<<"\n";
    
}
template<class T>
int SinglyCLL<T> :: Count()
{
    return this->iCount;
}
int main()
{
    SinglyCLL<int> *slobj = new SinglyCLL<int>();

    slobj->InsertFirst(51);
    slobj->InsertFirst(21);
    slobj->InsertFirst(11);
    slobj->Display();
    cout<<"Number of Element are : "<<slobj->Count()<<"\n";
    slobj->InsertLast(101);
    slobj->InsertLast(111);
    slobj->InsertLast(121);
    slobj->Display();
    cout<<"Number of Element are : "<<slobj->Count()<<"\n";

    slobj->DeleteFirst();
    slobj->Display();
    cout<<"Number of Element are : "<<slobj->Count()<<"\n";

    slobj->DeleteLast();
    slobj->Display();
    cout<<"Number of Element are : "<<slobj->Count()<<"\n";

    slobj->InsertAtPos(105,3);
    slobj->Display();
    cout<<"Number of Element are : "<<slobj->Count()<<"\n";

    slobj->DeleteAtPos(3);
    slobj->Display();
    cout<<"Number of Element are : "<<slobj->Count()<<"\n";
    delete slobj;
    return 0;
}