#include<iostream>
using namespace std;
typedef struct linkedlist
{
    int val;
    struct linkedlist *next;
    struct linkedlist *prev;
}node;

node *temp=NULL;

node *is(node *s,int x)
{
    temp=new linkedlist;
      if(temp==NULL)
        cout<<"empty linked list"<<endl;
      else
      {
        temp->prev=NULL;
        temp->val=x;
        temp->next=NULL;
        if(s==NULL)
            s=temp;
        else
        {
            temp->next=s;
            s->prev=temp;
            s=temp;
        }
      }
    return s;
}

node *ie(node *e,int x)
{
    temp=new linkedlist;
    if(temp==NULL)
        cout<<"empty linked list"<<endl;
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
    return e;
}

void *insp(node *s,int x,int pos)
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

node *deletes(node *s)
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
   return s;
}

node *deletee(node *e)
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
    return e;
}
void deletesp(node *s)
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

void disps(node *s)
{
     temp=s;
     do{
       cout<<" "<<temp->val<<endl;
       temp=temp->next;
       }while(temp!=NULL);
}

void dispe(node *e)
{
     temp=e;
    do{
        cout<<" "<<temp->val<<endl;
        temp=temp->prev;
    }while(temp!=NULL);
}

int main()
{
    node *start=NULL;
    node *end=NULL;
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
             start=is(start,ele);
             if(end==NULL)
                end=start=temp;
             break;
        case 2:
            cout<<"enter element to enter at end"<<endl;
             cin>>ele;
             end=ie(end,ele);
             if(start==NULL)
                start=end;
             break;
        case 3:
            cout<<"enter element to be inserted "<<endl;
            cin>>ele;
            cout<<"enter position at which you want to insert the value"<<endl;
            cin>>pos;
            insp(start,ele,pos);
            break;
        case 4:
            deletesp(start);
            break;
        case 5:
           start=deletes(start);
            break;
        case 6:
           end=deletee(end);
            break;
        case 7:
            disps(start);
            break;
        case 8:
            dispe(end);
            break;
        }
    }while(ch<=8);
}
