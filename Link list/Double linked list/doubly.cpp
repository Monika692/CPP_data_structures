#include<iostream>
using namespace std;
typedef struct linkedlist
{
    int val;
    struct linkedlist *prev;
    struct linkedlist *next;
}node;

node *temp=NULL;
node *s=NULL;
node *e=NULL;

void inserts(int x)
{
    temp=new linkedlist;
    if(temp==NULL)
    cout<<"the linked list is empty"<<endl;
    else
    {
        temp->prev=NULL;
        temp->val=x;
        temp->next=NULL;
        if(s==NULL)
            s=e=temp;
        else
        {
          temp->next=s;
          s->prev=temp;
          s=temp;
        }
    }

}

void inserte(int x)
{
    temp=new linkedlist;
    if(temp==NULL)
        cout<<"no element present at end of the linked list "<<endl;
    else
    {
        temp->prev=NULL;
        temp->val=x;
        temp->next=NULL;
        if(e==NULL)
            e=temp;
        else
        {
            temp->prev=e;
            e->next=temp;
            e=temp;
        }
    }
}

void insp(int x,int pos)
{
      node *temp1=NULL;
      node *temp2=NULL;
      int i=1;
      temp=s;
      while(i!=pos-1)
      {
          temp=temp->next;
          i++;
       }

       temp1=temp->next;
       temp2=new linkedlist;
       temp2->val=x;
       temp2->next=temp1;
       temp2->prev=temp;

       temp->next=temp2;
       temp1->prev=temp2;
}

void dsp()
{
   node *temp1=NULL;
   node *temp2=NULL;
   int x;
   cout<<"enter element to be deleted "<<endl;
   cin>>x;
   temp=s;
   while(temp->val!=x)
   {
       temp1=temp;
       temp=temp->next;
   }
   cout<<"deleted specific node is :"<<temp->val<<endl;
   temp2=temp->next;
   temp1->next=temp2;
   temp2->prev=temp1;
   delete(temp);
}

void ds()
{
   if(s==NULL)
    cout<<"no elements in linked list "<<endl;
   else
   {
         temp=s;
         cout<<"the deleted element at start is :"<<temp->val<<endl;
         s=s->next;
         s->prev=NULL;
         delete(temp);
   }
}

void de()
{
    if(e==NULL)
        cout<<"enter elements the linked list is empty"<<endl;
    else
    {
        temp=e;
        cout<<"the deleted node at end is :"<<temp->val<<endl;
        e=e->prev;
        e->next=NULL;
        delete(temp);
    }
}

void disps()
{
    temp=s;
     do{
       cout<<" "<<temp->val<<endl;
       temp=temp->next;
       }while(temp!=NULL);
}

void dispe()
{
    temp=e;
    do{
        cout<<" "<<temp->val<<endl;
        temp=temp->prev;
    }while(temp!=NULL);
}

int main()
{
     int ch,ele,pos;
    do{
        cout<<"enter 1 for insert at start"<<endl;
        cout<<"enter 2 to insert at end "<<endl;
        cout<<"enter 3 to insert at specified position "<<endl;
        cout<<"enter 4 for deleting at specific  "<<endl;
        cout<<"enter 5 for deleting at start"<<endl;
        cout<<"enter 6 for deleting at end "<<endl;
        cout<<"enter 7 for display from start"<<endl;
        cout<<"enter 8 for display from end "<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
             cout<<"enter element to enter at start"<<endl;
             cin>>ele;
             inserts(ele);
             break;
        case 2:
            cout<<"enter element to enter at end"<<endl;
             cin>>ele;
             inserte(ele);
             break;
        case 3:
            cout<<"enter element to be inserted "<<endl;
            cin>>ele;
            cout<<"enter position at which you want to insert the value"<<endl;
            cin>>pos;
            insp(ele,pos);
            break;
        case 4:
            dsp();
            break;
        case 5:
            ds();
            break;
        case 6:
            de();
            break;
        case 7:
            disps();
            break;
        case 8:
            dispe();
            break;
        }
    }while(ch<=8);
}
