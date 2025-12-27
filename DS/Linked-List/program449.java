//Doubly Circuler
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
class DoublyCL
{
    private node first;
    private node last;
    private int iCount;

    public DoublyCL()
    {
        System.out.println("Object of SinglyCL gets created");
        this.first = null;
        this.last = null;
        this.iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;
        newn = new node(no);

        if(this.first == null && this.last == null)
        {
            this.first = newn;
            this.last = newn;
        }
        else 
        {
            newn.next = this.first;
            this.first.prev = newn;
            this.first = newn;
        }
        this.last.next = this.first;
        this.first.prev = this.last;
        this.iCount++;

    }
    public void Insertlast(int no)
    {
        node newn = null;
        node temp = null;
        newn = new node(no);

        if(this.first == null && this.last == null)
        {
            this.first = newn;
            this.last = newn;
        }
        else 
        {
           temp = this.first;
           while (temp.next != this.first) {
            temp = temp.next;
           }
           temp.next = newn;
           newn.prev = temp;
           this.last = newn;
        }
        this.last.next = this.first;
        this.first.prev = this.last;
        this.iCount++;
    }
    public void InsertAtPos(int no,int pos)
    {
        node newn = null;
        node temp = null;
        int iCnt = 0;
        if((pos < 1)|| (pos > this.iCount+1))
        {
            System.out.println("Invalid Position");
            return;
        }

        if(pos == 1)
        {
            this.InsertFirst(no);
        }
        else if(pos > this.iCount+1)
        {
            this.Insertlast(no);
        }
        else 
        {
            newn = new node(no);
            temp = this.first;
            for(iCnt =1;iCnt < pos-1;iCnt++)
            {
                temp =temp.next;
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
        if(this.first == null && this.last == null)
        {
            return;
        }
        else if(this.first == this.last)
        {
            this.first = this.last = null;
        }
        else 
        {
            this.first = this.first.next;
        }
        this.last.next = this.first;
        this.first.prev = this.last;

        System.gc();
        this.iCount--;
    }
    public void DeleteLast()
    {
        if(this.first == null && this.last == null)
        {
            return;
        }
        else if(this.first == this.last)
        {
            this.first = this.last = null;
        }
        else 
        {
           this.last = this.last.prev;
        }
        this.last.next = this.first;
        this.first.prev = this.last;

        System.gc();
        this.iCount--;
    }
    public void DeleteAtPos(int pos)
    {
        
        node temp = null;
        int iCnt = 0;
        if((pos < 1)|| (pos > this.iCount))
        {
            System.out.println("Invalid Position");
            return;
        }

        if(pos == 1)
        {
            this.DeleteFirst();
        }
        else if(pos > this.iCount)
        {
            this.DeleteLast();
        }
        else 
        {
           
            temp = this.first;
            for(iCnt =1;iCnt < pos-1;iCnt++)
            {
                temp =temp.next;
            }
            temp.next = temp.next.next;
            temp.next.prev = temp;
            this.iCount--;
        }
    }

    public void Display()
    {
        node temp = null;
        temp = this.first;

        if(temp == null)
        {
            return;
        }
        else
        {
            System.out.print("<=>");
            do{
                System.out.print("| "+temp.data+" |<=>");
                temp = temp.next;
            }while(temp != this.first);
            System.out.println();
        }
    }
    public int Count()
    {
        return this.iCount;
    }

}
public class program449 {
    public static void main(String A[])
    {
        DoublyCL obj = null;
        int iRet = 0;

        obj = new DoublyCL();

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

      

        obj.DeleteAtPos(4);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Number of nodes are : "+iRet);

       
        obj = null;
        System.gc();

    }
}
