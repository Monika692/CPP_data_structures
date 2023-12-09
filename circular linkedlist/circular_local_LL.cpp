#include<iostream>
using namespace std;
typedef struct linkedlist
{
    int val;
    struct linkedlist *next;
}node;

node *temp=NULL;

node *istart(node *s)
{
    temp=new linkedlist;
    int x;
    cout<<"enter element to be entered"<<endl;
    cin>>x;
     if(temp==NULL)
        cout<<"linked list is empty"<<endl;
     else
     {
         temp->val=x;
         temp->next=s;
         if(s==NULL)
            s=temp;
         else
         {
             temp->next=s;
             s=temp;
         }
     }
     return s;
}

node *iend(node *e)
{
    int x;
    temp=new linkedlist;
    cout<<"enter element to insert at end :"<<endl;
    cin>>x;
    if(temp==NULL)
        cout<<"linked list is empty "<<endl;
    else
    {
        temp->val=x;
        temp->next=NULL;

        if(e==NULL)
            e=temp;
        else
        {
          e->next=temp;
          e=temp;
        }
    }
    return e;
}

void *isp(node *s)
{
     int pos;
      cout<<"enter position to enter your value :"<<endl;
      cin>>pos;
      int x;
      cout<<"enter the element to be entered"<<endl;
      cin>>x;
      int i=1;
      temp=s;
      while(i!=pos)
      {
         temp=temp->next;
          i++;
      }
      node *temp1=new linkedlist;
      temp1->val=x;
      temp1->next=temp->next;
      temp->next=temp1;
}


node *dstart(node *s)
{
    if(s==NULL)
    cout<<"linked list is empty "<<endl;
    else
    {
        temp=s;
        cout<<"The deleted node is :"<<s->val<<endl;
        s=s->next;
        delete(temp);
    }
    return s;
}

node *dend(node *s,node *e)
{
   if(e==NULL)
    cout<<"linked list is emptyyyy"<<endl;
   else
   {
       temp=s;
       cout<<"the deleted node of end is :"<<e->val<<endl;
       while(temp->next!=e)
           temp=temp->next;

       delete(e);
       e=temp;
       e->next=s;
   }
   return e;
}

void *dsp(node *s)
{
        node *temp1=NULL;
        int x;
        cout<<"enter element to be deleted "<<endl;
        cin>>x;
        temp=s;
        while(temp->val!=x)
       {
          temp1=temp;
          temp=temp->next;
       }
        cout<<"the node deleted is :"<< temp->val<<endl;
        temp1->next=temp->next;
        delete(temp);
}

void display(node *s)
{
      temp=s;
      do{
       cout<<" "<<temp->val<<endl;
       temp=temp->next;
       } while(temp!=s);

}
int main()
{
    int ch;
    node *start=NULL;
    node *end=NULL;
    do{
        cout<<"enter 1 for insert at start"<<endl;
        cout<<"enter 2 for insert at end"<<endl;
        cout<<"enter 3 for insert at specific end"<<endl;
        cout<<"enter 4 for deleting at start"<<endl;
        cout<<"enter 5 for delete at end"<<endl;
        cout<<"enter 6 for deleting at specific end"<<endl;
        cout<<"enter 7 for display"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
             start=istart(start);
             if(end==NULL)
                    end=start;

             end->next=start;
             break;
        case 2:
             end=iend(end);
             if(start==NULL)
                start=end;

             end->next=start;
             break;
        case 3:
             isp(start);
             break;
        case 4:
             start=dstart(start);
             if(start==NULL)
                start=end;
             break;
        case 5:
            end=dend(start,end);
             break;
        case 6:
             dsp(start);
             break;
         case 7:
             display(start);
             break;
        }
    }while(ch<=7);
}
