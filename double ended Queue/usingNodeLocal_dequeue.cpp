#include<iostream>
using namespace std;
typedef struct queue
{
    int val;
    struct queue *next;
}node;

node *temp=NULL;
node *insertf(node *f,int x)
{
    temp=new queue;
    if(temp==NULL)
        cout<<"overflow"<<endl;
    else{
        temp->val=x;
        temp->next=NULL;

        if(f==NULL)
            f=temp;
        else
        {
            temp->next=f;
            f=temp;
        }
    }
    return f;
}

node *insertr(node *r)
{
    int x=-1;
    temp=new queue;
    if(temp==NULL)
        cout<<"overflow"<<endl;
    else
    {
        cout<<"Enter Number to insert ";
        cin>>x;
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
    return r;
}

node *deletef(node *f)
{
    if(f==NULL)
        cout<<"underflow"<<endl;
    else
    {
        temp=f;
        cout<<"deleted node is :"<<f->val<<endl;
        if(f->next==NULL)
            f=NULL;
        else
            f=f->next;

        delete(temp);
    }
    return f;
}

node *deleter(node *f,node*r)
{
    if(r==NULL)
        cout<<"underflow"<<endl;
    else
    {
        temp=f;
        while(temp->next!=r)
            temp=temp->next;

        cout<<"deleted node is :"<<r->val<<endl;
        delete(r);
        r=temp;
        r->next=NULL;
    }
    return r;
}

void display(node *f)
{
    temp=f;
    do{
        cout<<" "<<temp->val<<endl;
        temp=temp->next;
    }while(temp!=NULL);
}
int main()
{
      int ch,ele;
      node *fr=NULL;
      node *rr=NULL;
        do{
        cout<<"enter 1 to insert at front"<<endl;
        cout<<"enter 2 to insert at rear"<<endl;
        cout<<"enter 3 to delete at front"<<endl;
        cout<<"enter 4 to delete at rear"<<endl;
        cout<<"enter 5 to display"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"enter your element at front :"<<endl;
            cin>>ele;
            fr=insertf(fr,ele);
            if(rr==NULL)
                rr=fr;

            break;
        case 2:
            rr=insertr(rr);
            if(fr==NULL)
                fr=rr;
            break;
        case 3:
           fr=deletef(fr);
           if(fr==NULL)
                rr=fr;
           break;
        case 4:
            rr=deleter(fr,rr);
            if(fr==NULL)
                fr=rr;
            break;
        case 5:
            display(fr);
            break;
        }
    }while(ch<=5);
}
