#include<iostream>
using namespace std;
typedef struct queue{
    int val;
    struct queue *next;
}node;

node *temp=NULL;
node *fr=NULL;
node *rr=NULL;

void insert(node *r,int x)
{
    temp=new queue;
    if(temp==NULL)
        cout<<"overflow";
    else
    {
        temp->val=x;
        temp->next=NULL;
        if(r==NULL)
            r=temp;
        else
        {
            r->next=temp;
            r=temp;
        }
    }
    rr=r;
}

int dequeue(node *f)
{
    int x=-1;

    if(f==NULL)
        cout<<"underflow"<<endl;
    else
    {
        temp=f;
        x=f->val;
        f=f->next;
        delete(temp);
    }
    fr=f;
    return x;
}

void display(node *f)
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
           cout<<"enter value :";
           cin>>ele;
           insert(rr,ele);
           if(fr==NULL)
                fr=rr;
           break;
       case 2:
           ele=dequeue(fr);
           if(ele!=-1)
           cout<<ele<<" is Deleted ";
           break;
       case 3:
            display(fr);
            break;
       }
    }while(ch<=3);
}
