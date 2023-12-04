#include<iostream>
using namespace std;
struct stack
{
    int value;
    struct stack *next;
};

struct stack *top=NULL;
struct stack *temp=NULL;
void push(int x)
{
    temp=new stack;
    if(temp==NULL)
        cout<<"overflow"<<endl;
    else{
        temp->value=x;
        temp->next=top;
        top=temp;
    }
}

void pop()
{
    if(top==NULL)
        cout<<"underflow"<<endl;
    else
    {
      temp=top;
      cout<<"value deleted is :" <<top->value<<endl;
      top=top->next;
      delete(temp);
    }
}

void display()
{
    for(temp=top;temp!=NULL;temp=temp->next)
        cout<<"Stack value :"<<temp->value<<endl;
}

int main()
{
    int ch,n;
    do{
    cout<<"enter 1 for push"<<endl;
    cout<<"enter 2 for push"<<endl;
    cout<<"enter 3 for push"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        cout<<"enter your value  :";
        cin>>n;
        push(n);
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    }
    }while(ch<=3);
}
