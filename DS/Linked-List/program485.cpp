// generic oop Singly Linear List
#include<iostream>
using namespace std;
#pragma pack(1)
template<class T>
class SinglyLLLnode
{
    public :
    T data;
    SinglyLLLnode<T> *next;

    SinglyLLLnode(T no)
    {
        this->data = no;
        this->next = NULL;
    }
};

template<class T>
class SinglyLLL
{
    private:                    
        SinglyLLLnode<T> *first;
        int iCount;


    public:
        SinglyLLL();

        void InsertFirst(T);
        void InsertLast(T);

        void DeleteFirst();
        void DeleteLast();
        
    
        void Display();
        int Count();

        void InsertAtPos(T,int);
        void DeleteAtPos(int);
};
template<class T>
SinglyLLL<T> :: SinglyLLL()
{
    this->first = NULL;
    this->iCount = 0;
}
template<class T>
void SinglyLLL<T> :: InsertFirst(T no)
{
    SinglyLLLnode<T> * newn = NULL;
    newn = new SinglyLLLnode<T>(no);
    
    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first = newn;
    }
    this->iCount++;
}
template<class T>
void SinglyLLL<T> :: InsertLast(T no)
{
    SinglyLLLnode<T> *temp = NULL;
    SinglyLLLnode<T> *newn = NULL;
    newn = new SinglyLLLnode<T>(no);
    

    if(this->iCount == 0)    
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;
        while (temp->next != NULL)
        {
            temp =temp->next;
        }
        temp->next = newn;
        
    }
    this->iCount++;
}
template<class T>
void SinglyLLL<T> ::  DeleteFirst()
{
    SinglyLLLnode<T> * temp = NULL;
    if(this->first == NULL)   
    {
        return;
    }
    else if(this->first->next == NULL)  
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = this->first;
        this->first = this->first->next;
        delete temp;
    }
    this->iCount--;
}
template<class T>
void SinglyLLL<T> :: DeleteLast()
{
    SinglyLLLnode<T> * temp = NULL;
    if(this->first == NULL)   
    {
        return;
    }
    else if(this->first->next == NULL)  
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = this->first;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        
    }
    this->iCount--;
}

template<class T>
void SinglyLLL<T> :: Display()    
{
    SinglyLLLnode<T> * temp = NULL;
    temp = this->first;
    int iCnt = 0;
    for (iCnt = 1;iCnt <= this->iCount;iCnt++)
    {
        cout<<"|"<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"NULL\n";

    
}
template<class T>
int SinglyLLL<T> :: Count()
{
    return this->iCount;
}
template<class T>
void SinglyLLL<T> :: InsertAtPos(T no,int pos)
{
    int iCnt = 0;
    SinglyLLLnode<T> * temp = NULL;
    SinglyLLLnode<T> * newn = NULL;
    if((pos < 1)|| (pos > this->iCount+1))
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
        newn = new SinglyLLLnode<T>(no);
        
        temp = this->first;
        for(iCnt = 1;iCnt < pos-1;iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        this->iCount++;

    }
}
template<class T>
void SinglyLLL<T> :: DeleteAtPos(int pos)
{
    int iCnt = 0;
    SinglyLLLnode<T> * temp = NULL;
    SinglyLLLnode<T> * target = NULL;
    if((pos < 1)|| (pos > this->iCount))
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
        
        temp = this->first;
        for(iCnt = 1;iCnt < pos-1;iCnt++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target->next;
        delete target;
        this->iCount--;

    }
}

int main()
{
    SinglyLLL<int> *obj = new SinglyLLL<int>();
    int iRet = 0;

    obj->InsertFirst(51);
    obj->InsertFirst(21);
    obj->InsertFirst(11);

    obj->Display();
    iRet = obj->Count();
    cout<<"Number of Node are : "<<iRet<<"\n";

    obj->InsertLast(101);
    obj->InsertLast(111);
    obj->InsertLast(121);

    obj->Display();
    iRet = obj->Count();
    cout<<"Number of Node are : "<<iRet<<"\n";

    obj->DeleteFirst();
    obj->Display();
    iRet = obj->Count();
    cout<<"Number of Node are : "<<iRet<<"\n";

    obj->DeleteLast();
    obj->Display();
    iRet = obj->Count();
    cout<<"Number of Node are : "<<iRet<<"\n";

    obj->InsertAtPos(5,3);
    obj->Display();
    iRet = obj->Count();
    cout<<"Number of Node are : "<<iRet<<"\n";

    obj->DeleteAtPos(3);
    obj->Display();
    iRet = obj->Count();
    cout<<"Number of Node are : "<<iRet<<"\n";

    delete obj;
    return 0;

}