#include<iostream>
using namespace std;
typedef struct queue
{
    int val;
    struct queue *next;
}node;

node *f=NULL;
node *r=NULL;
node *temp=NULL;

void insertf(int x)
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
            temp->next=f;
            f=temp;
        }
    }
}

void insertr(int x)
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
}

void deletef()
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
}
void deleter()
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
}

void display()
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
            cout<<"enter your element at front : "<<endl;
            cin>>ele;
            insertf(ele);
            break;
        case 2:
            cout<<"enter your element at rear :"<<endl;
            cin>>ele;
            insertr(ele);
            break;
        case 3:
           deletef();
           break;
        case 4:
            deleter();
            break;
        case 5:
            display();
            break;
        }
    }while(ch<=5);
}
