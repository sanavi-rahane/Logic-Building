//////////////////////////////////////////////////////////////////////////////
//             Generalised Data Structure Library
/////////////////////////////////////////////////////////////////////////////

/*
------------------------------------------------------------------------------------
Type                   Name of Class for node         Name of Class for Functionality 
---------------------------------------------------------------------------------------      
Linked List 
----------------------------------------------------------------------      
Singly Linear         SinglyLLLnode                   SinglyLLL             Done
Singly Circuler       SinglyCLLnode                   SinglyCLL
Doubly Linear         DoublyLLLnode                   DoublyLLL             Done
Doubly Circuler       DoublyCLLnode                   DoublyCLL             Done
--------------------------------------------------------------------------------------------  

*/


#include<iostream>
using namespace std;
/////////////////////////////////////////////////////////////////
//       Singly Linear Lined list using Generic Approch 
////////////////////////////////////////////////////////////////

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
//////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     InsertFirst       
//    Input               :     Data of Node
//    Output              :     Nothing
//    Description         :     Used to insert node at first position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     InsertLast       
//    Input               :     Data of Node
//    Output              :     Nothing
//    Description         :     Used to insert node at Last position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     DeleteFirst       
//    Input               :     Nothing
//    Output              :     Nothing
//    Description         :     Used to Delete node at first position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     DeleteLast       
//    Input               :     Nothing
//    Output              :     Nothing
//    Description         :     Used to Delete node at Last position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     Display      
//    Input               :     Nothing
//    Output              :     Nothing
//    Description         :     Used to Display nodes of Linked List
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     Count       
//    Input               :     Nothing
//    Output              :     iCount
//    Description         :     Used to return count of nodes 
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
template<class T>
int SinglyLLL<T> :: Count()
{
    return this->iCount;
}
template<class T>
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     InsertAtPos      
//    Input               :     Data of Node and position
//    Output              :     Nothing
//    Description         :     Used to insert node at position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     DeleteAtPos       
//    Input               :     Position
//    Output              :     Nothing
//    Description         :     Used to delete node which is at position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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






/////////////////////////////////////////////////////////////////////////
// Doubly Linear LinkedList using Generic Approch  
///////////////////////////////////////////////////////////////////////

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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     InsertFirst       
//    Input               :     Data of Node
//    Output              :     Nothing
//    Description         :     Used to insert node at first position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     InsertLast       
//    Input               :     Data of Node
//    Output              :     Nothing
//    Description         :     Used to insert node at first position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     InsertAtPos       
//    Input               :     Data of Node and Position
//    Output              :     Nothing
//    Description         :     Used to insert node at position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     DeleteFirst      
//    Input               :     Nothing
//    Output              :     Nothing
//    Description         :     Used to Delete node at first position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     DeleteLast       
//    Input               :     Nothing
//    Output              :     Nothing
//    Description         :     Used to delete node at last position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     DeleteAtPos      
//    Input               :     Position
//    Output              :     Nothing
//    Description         :     Used to delete node at position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     Display      
//    Input               :     Nothing
//    Output              :     Nothing
//    Description         :     Used to Display nodes of Linked List
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     Count      
//    Input               :     Nothing
//    Output              :     iCount
//    Description         :     Used to return Count of nodes
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
template <class T>
int DoublyLLL<T> :: Count()
{
    return this->iCount;
}


/////////////////////////////////////////////////////////////////////////
// Doubly Circuler LinkedList using Generic Approch  
///////////////////////////////////////////////////////////////////////

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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     InsertFirst      
//    Input               :     Data of Node
//    Output              :     Nothing
//    Description         :     Used to insert node at first position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     InsertLast       
//    Input               :     Data of Node
//    Output              :     Nothing
//    Description         :     Used to insert node at last position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     InsertAtPos       
//    Input               :     Data of Node and Position
//    Output              :     Nothing
//    Description         :     Used to insert node at position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     DeleteFirst       
//    Input               :     Nothing
//    Output              :     Nothing
//    Description         :     Used to delete node at first position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     DeleteLast      
//    Input               :     Nothing
//    Output              :     Nothing
//    Description         :     Used to delete node at Last position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     DeleteAtPos       
//    Input               :     Position
//    Output              :     Nothing
//    Description         :     Used to delete node at position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     Display      
//    Input               :     Nothing
//    Output              :     Nothing
//    Description         :     Used to display nodes
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     Count       
//    Input               :     Nothing
//    Output              :     icount
//    Description         :     Used to  return Count of Nodes 
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
template<class T>
int DoublyCLL<T> :: Count()
{
    return this->iCount;
}




/////////////////////////////////////////////////////////////////////////
// Singly Circuler LinkedList using Generic Approch  
///////////////////////////////////////////////////////////////////////



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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     InsertFirst       
//    Input               :     Data of Node
//    Output              :     Nothing
//    Description         :     Used to insert node at first position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     InsertLast       
//    Input               :     Data of Node
//    Output              :     Nothing
//    Description         :     Used to insert node at Last position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     Delete      
//    Input               :     Nothing
//    Output              :     Nothing
//    Description         :     Used to delete node at first position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     DeletetLast       
//    Input               :     Nothing
//    Output              :     Nothing
//    Description         :     Used to delete node at Last position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     InsertAtPos       
//    Input               :     Data of Node and Position
//    Output              :     Nothing
//    Description         :     Used to insert node at position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     DeleteAtPos       
//    Input               :     Position
//    Output              :     Nothing
//    Description         :     Used to delete node at position
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     Display       
//    Input               :     Nothin
//    Output              :     Nothing
//    Description         :     Used to display nodes
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
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
/////////////////////////////////////////////////////////////////////////////////
//    Function Name       :     Count       
//    Input               :     Nothing
//    Output              :     iCount
//    Description         :     Used to return Count of  node 
//    Auther              :     Sanavi Devram Rahane
//    Date                :     06/01/2026
/////////////////////////////////////////////////////////////////////////////////
template<class T>
int SinglyCLL<T> :: Count()
{
    return this->iCount;
}

////////////////////////////////////////////  End of Library  /////////////////////////////////////////////////


int main()
{
    cout<<"SINGLY LINEAR ";
SinglyLLL<int> *sobj = new SinglyLLL<int>();
    int iRet = 0;

    sobj->InsertFirst(51);
    sobj->InsertFirst(21);
    sobj->InsertFirst(11);

    sobj->Display();
    iRet = sobj->Count();
    cout<<"Number of Node are : "<<iRet<<"\n";

    sobj->InsertLast(101);
    sobj->InsertLast(111);
    sobj->InsertLast(121);

    sobj->Display();
    iRet = sobj->Count();
    cout<<"Number of Node are : "<<iRet<<"\n";

    sobj->DeleteFirst();
    sobj->Display();
    iRet = sobj->Count();
    cout<<"Number of Node are : "<<iRet<<"\n";

    sobj->DeleteLast();
    sobj->Display();
    iRet = sobj->Count();
    cout<<"Number of Node are : "<<iRet<<"\n";

    sobj->InsertAtPos(5,3);
    sobj->Display();
    iRet = sobj->Count();
    cout<<"Number of Node are : "<<iRet<<"\n";

    sobj->DeleteAtPos(3);
    sobj->Display();
    iRet = sobj->Count();
    cout<<"Number of Node are : "<<iRet<<"\n";

    delete sobj;

///////////////////////////////////////////////////////////////////////////////////////////////////////////

cout<<"DOUBLY LINEAR";
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

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout<<"DOUBLY CIRCULER";
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
    

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout<<"SINGLY CIRCULER ";
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