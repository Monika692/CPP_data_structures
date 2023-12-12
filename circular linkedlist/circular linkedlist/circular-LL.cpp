#include<iostream>
using namespace std;
typedef struct linkedlist
{
    int val;
    struct linkedlist *next;
}node;

node *s=NULL;
node *e=NULL;
node *temp=NULL;

void istart(int x)
{
    temp=new linkedlist;
    if(temp==NULL)
        cout<<"the linked list is empty "<<endl;
    else
    {
        temp->val=x;
       temp->next=s;

       if(s==NULL)
            s=e=temp;
       else
       {
        temp->next=s;
        s=temp;
        e->next=s;
       }
    }
}

void iend(int x)
{
      temp=new linkedlist;

    if(temp==NULL)
    cout<<"element not present"<<endl;
  else
  {
     temp->val=x;
     temp->next=s;
     if(e==NULL)
        s=e=temp;
     else
        {
        e->next=temp;
        e=temp;
        }
   }
}

void isp(int x,int pos)
{

 node *temp1;
  int i=1;
  temp=s;
  while(i!=pos)
  {
      temp=temp->next;
      i++;
   }
   temp1=new linkedlist;
   temp1->val=x;
   temp1->next=temp->next;
   temp->next=temp1;
  }

void dstart()
{
     if(s==NULL)
        cout<<"no element in link list"<<endl;
    else
    {
        temp=s;
        cout<<"deleted node at start is :"<<s->val<<endl;
        s=s->next;
        e->next=s;
        delete(temp);
    }
}

void dend()
{
   if(e==NULL)
        cout<<"no element in linked list"<<endl;
    else
    {
        temp=s;
        cout<<"delete node at end is  :"<<e->val<<endl;
        while(temp->next!=e)
       {
             temp=temp->next;
        }
        delete(e);
        e=temp;
        e->next=s;
    }
}

void dsp()
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

void display()
{
    temp=s;
     do{
       cout<<" "<<temp->val<<endl;
       temp=temp->next;
       }while(temp!=s);
}

int main()
{
     int ch,ele,pos;
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
             cout<<"enter element to enter at start"<<endl;
             cin>>ele;
             istart(ele);
             break;
        case 2:
             cout<<"enter element to enter at end"<<endl;
             cin>>ele;
             iend(ele);
             break;
        case 3:
             cout<<"enter element to insert at certain position"<<endl;
             cin>>ele;
             cout<<"enter at which position you want to enter the element "<<endl;
             cin>>pos;
             isp(ele,pos);
             break;
        case 4:
              dstart();
             break;
        case 5:
            dend();
             break;
        case 6:
             dsp();
             break;
         case 7:
             display();
             break;
        }
    }while(ch<=7);
}
