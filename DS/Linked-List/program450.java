//Doubly Linear
class node
{
    public int data;
    public node next;
    public node prev;


    public node(int no)
    {
        this.data = no;
        this.next = null;
        this.prev = null;
    }
}
class DoublyLL
{
    private node first;
    private int iCount;

    public DoublyLL()
    {
        System.out.println("Object of SinglyCL gets created");
        this.first = null;
        this.iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;
        newn = new node(no);

        if(this.first == null)
        {
            this.first = newn;
        }
        else
        {
            newn.next = this.first;
            this.first.prev = newn;
            this.first = newn;
        }
        this.iCount++;
    }
    public void Insertlast(int no)
    {
        node newn = null;
        newn = new node(no);
        node temp = null;
        if(this.first == null)
        {
            this.first = newn;
        }
        else
        {
            temp = this.first;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newn;
            newn.prev = temp;
        }
        this.iCount++;
    }
    public void InsertAtPos(int no,int pos)
    {
        node newn = null;
        node temp = null;
        int iCnt = 0;
       
        if((pos < 1)||(pos > this.iCount+1))
        {
            System.out.println("Invalid Position");
            return;
        }

        if(pos == 1)
        {
            this.InsertFirst(no);
        }
        else if(pos == this.iCount+1)
        {
            this.Insertlast(no);
        }
        else 
        {
            newn = new node(no);
            temp = this.first;
            for(iCnt = 1;iCnt < pos-1;iCnt++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next.prev = newn;
            temp.next = newn;
            newn.prev = temp;
            this.iCount++;
        }

        
        
    }

    public void DeleteFirst()
    {
        if(this.first == null)
        {
            return;
        }
        else if(this.first.next == null)
        {
            this.first = null;
           
        }
        else
        {
            this.first = this.first.next;
        }
        this.iCount--;
        System.gc();


    }
    public void DeleteLast()
    {
        node temp = null;
        if(this.first == null)
        {
            return;
        }
        else if(this.first.next == null)
        {
            this.first = null;
           
        }
        else
        {
            temp = this.first;
            while (temp.next.next != null) {
                temp = temp.next;
            }
            temp.next = null;
        }
        this.iCount--;
        System.gc();
    }
    public void DeleteAtPos(int pos)
    { 
        
        node temp = null;
        int iCnt = 0;
       
        if((pos < 1)||(pos > this.iCount))
        {
            System.out.println("Invalid Position");
            return;
        }

        if(pos == 1)
        {
            this.DeleteFirst();
        }
        else if(pos == this.iCount)
        {
            this.DeleteLast();
        }
        else 
        {
           
            temp = this.first;
            for(iCnt = 1;iCnt < pos-1;iCnt++)
            {
                temp = temp.next;
            }
            temp.next = temp.next.next;
            temp.next.prev = temp;
            System.gc();
            this.iCount--;
        }

    }

    public void Display()
    {
        node temp = null;
        temp = this.first;
        System.out.print("<-NULL");
        while (temp != null) {
            System.out.print("| "+temp.data+" |->");
            temp = temp.next;
        }
        System.out.print("NULL\n");
    }
    public int Count()
    {
        return this.iCount;
    }

}
public class program450{
    public static void main(String A[])
    {
        DoublyLL obj = null;
        int iRet = 0;

        obj = new DoublyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of nodes are : "+iRet);

        obj.Insertlast(101);
        obj.Insertlast(111);
        obj.Insertlast(121);
        
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of nodes are : "+iRet);

        obj.InsertAtPos(105,4);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of nodes are : "+iRet);

        obj.DeleteFirst();
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of nodes are : "+iRet);

        obj.DeleteLast();
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of nodes are : "+iRet);

        

        obj.DeleteAtPos(3);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of nodes are : "+iRet);

        //Important for memory deallocation
        obj = null;
        System.gc();

    }
}
