#include<iostream>
using namespace std;

struct stack{
int val;
struct stack *next;
};

struct stack *top=NULL;
struct stack *temp=NULL;

void push(struct stack *t,int x)
{
    temp=new stack;
    if(temp==NULL)
        cout<<"overflow";
    else
    {
        temp->val=x;
        temp->next=t;
        t=temp;
    }
    top=t;
}

void pop(struct stack *t)
{
    if(t==NULL)
        cout<<"underflow";
    else
    {
      temp=t;
      cout<<"Deleted Element "<<t->val;
      t=t->next;
      delete(temp);
    }
    top=t;
}

void display(struct stack *t)
{
     for(temp=t;temp!=NULL;temp=temp->next)
        cout<<temp->val<<"\t";
}
int main()
{
    int ch;
    int ele;
    do{
        cout<<"enter 1 for push"<<endl;
        cout<<"enter 2 for pop"<<endl;
        cout<<"enter 3 for display"<<endl;
        cin >>ch;
        switch(ch)
        {
        case 1:

            int ele;
            cin>>ele;
            push(top,ele);
            break;
        case 2:
            pop(top);

            break;
        case 3:
            display(top);
            break;
        }
    }while(ch<=3);
}
