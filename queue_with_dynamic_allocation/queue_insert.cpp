#include<iostream>
using namespace std;
 struct queue{
int val;
struct queue *next;
};

struct queue *f=NULL;
struct queue *r=NULL;
struct queue *temp=NULL;
void insert(int x)
{
    temp=new queue;
    if(temp==NULL)
        cout<<"overflow"<<endl;
    else{
        temp->val=x;
        temp->next=NULL;
        if(f==NULL)
            f=r=temp;
        else
        {
            r->next=temp;
            r=temp;
        }
    }
}

void dequeue()
{
    if(f==NULL)
        cout<<"underflow"<<endl;
    else
    {
        temp=f;
        cout<<" deleted element is :"<<f->val<<endl;
        f=f->next;
        delete(temp);
    }
}

void display()
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
           cout<<"enter your value :";
           cin>>ele;
           insert(ele);
           break;
       case 2:
           dequeue();
           break;
       case 3:
            display();
            break;
       }
    }while(ch<=3);
}
