#include<iostream>
using namespace std;

typedef struct stack{
int val;
struct stack *next;
}node;

node* push(node *t,int x)
{
    node *temp=new stack;
    if(temp==NULL)
        cout<<"overflow"<<endl;
    else
    {
        temp->val=x;
        temp->next=t;
        t=temp;
    }
    return t;
}

node* pop(node *t)
{
      node *temp=new stack;
        if(t==NULL)
            cout<<"underflow"<<endl;
        else{
            temp=t;
            cout<<" deleted value is :"<<t->val;
            t=t->next;
            delete(temp);
        }
        return t;
}



void display(node *t)
{
    node *temp=new stack;
    for(temp=t;temp=NULL;temp=temp->next)
        cout<<" "<<temp->val;
}
int main()
{
    int ch,ele;
    node *top=NULL;
      do{
    cout<<"enter 1 for push"<<endl;
    cout<<"enter 2 for pop"<<endl;
    cout<<"enter 3 for display"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        int ele;
        cin>>ele;
        top=push(top,ele);
        break;
    case 2:
        top=pop(top);
        break;
    case 3:
        display(top);
        break;
    }
}while(ch<=3);
}
