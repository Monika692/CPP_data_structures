#include<iostream>
using namespace std;
struct stack
{
  int val;
  struct stack *next;
};

struct stack *top=NULL;

void push(struct stack *t,struct stack *tmp,int x)
{
    if(tmp==NULL)
        cout<<"overflow";
    else
    {
        tmp->val=x;
        tmp->next=t;
        t=tmp;
    }
    top=t;
}

void pop(struct stack *t,struct stack *tmp)
{
    if(t==NULL)
        cout<<"underflow"<<endl;
    else
    {
      tmp=t;
      cout<<"deleted node is: "<<t->val<<endl;
      t=t->next;
      delete(tmp);
    }
    top=t;
}

void display(struct stack *t,struct stack *tmp)
{
    for(tmp=t;tmp!=NULL;tmp=tmp->next)
        cout<<"value is :"<<"  "<<tmp->val;
}


int main()
{
    int ch;
    int ele;
    struct stack *temp;
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
            temp=new stack;
            push(top,temp,ele);
            break;
        case 2:
            pop(top,temp);
            break;
        case 3:
            display(top,temp);
            break;
        }
    }while(ch<=3);
}
