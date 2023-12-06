#include<iostream>
using namespace std;
typedef struct queue
{
    int val;
    struct queue *next;
}node;

node* temp=NULL;

node* insert(node *f,node*r,int x)
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
        {
            r->next=temp;
            r=temp;
        }
    }
    return r;
}

node* dequeue(node *f)
{
    int x=-1;
    if(f==NULL)
        cout<<"underflow"<<endl;
    else
    {
        temp=f;
       cout<<"deleted value is : "<<f->val<<endl;
       f=f->next;
       delete(temp);
    }
    return f;
}

void display(node *f)
{
     temp=new queue;
     for(temp=f;temp!=NULL;temp=temp->next)
     cout<<" "<<temp->val<<endl;
}

int main()
{

    int ch,ele;
    node *fr=NULL;
    node *rr=NULL;
      do{
    cout<<"enter 1 for push"<<endl;
    cout<<"enter 2 for pop"<<endl;
    cout<<"enter 3 for display"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        int ele;
        cout<<"enter your value :"<<endl;
        cin>>ele;
        rr=insert(fr,rr,ele);
        if(fr==NULL)
            fr=rr;
        break;
    case 2:
        fr=dequeue(fr);

        break;
    case 3:
        display(fr);
        break;
    }
}while(ch<=3);
}
