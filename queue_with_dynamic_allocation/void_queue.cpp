#include<iostream>
using namespace std;
typedef struct queue{
int val;
struct queue *next;
}node;

node* fr=NULL;
node* rr=NULL;
node* temp=NULL;

void insert(node *f,node *r,int x)
{
    temp=new queue;
    if(temp==NULL)
        cout<<"overflow"<<endl;
    else
    {
        temp->val=x;
        temp->next=NULL;
        if(f==NULL)
            f=r=temp;
        else
            r->next=temp;
            r=temp;
    }
    fr=f;
    rr=r;
}
void dequeue(node *f,node*r)
{
   if(f==NULL)
        cout<<"underflow"<<endl;
   else
   {
       temp=f;
       cout<<"deleted value is : "<<f->val<<endl;
       f=f->next;
       delete(temp);
    }
    fr=f;
}
void display(node *f,node *r)
{
    for(temp=f;temp!=NULL;temp=temp->next)
       cout<<" "<<temp->val<<endl;
}
int main()
{
     int ch,ele;
    do{
       cout<<"enter 1 for insertion "<<endl;
       cout<<"enter 2 for delete"<<endl;
       cout<<"enter 3 for display"<<endl;
       cin>>ch;
       switch(ch)
       {
       case 1:
           int ele;
           cout<<"enter value :";
           cin>>ele;
           insert(fr,rr,ele);
           break;
       case 2:
           dequeue(fr,rr);
           break;
       case 3:
            display(fr,rr);
            break;
       }
    }while(ch<=3);
}
