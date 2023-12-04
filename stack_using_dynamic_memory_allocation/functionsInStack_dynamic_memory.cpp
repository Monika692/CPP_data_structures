#include<iostream>
using namespace std;

struct stack{
int val;
struct stack *next;
};

struct stack *top=NULL;
struct stack *temp=NULL;

void push()
{
    cout<<"enter your value "<<endl;
    temp=new stack;

    if(temp==NULL)
        cout<<"overflow"<<endl;
    else
    {
       cin>>temp->val;
       temp->next=top;
       top=temp;
    }
}
int pop()
{
    int x;
    if(top==NULL)
        x=-1;
    else
    {
      temp=top;
      x=top->val;
      top=top->next;
      delete(temp);
    }
    return x;
}
void display()
{
    for(temp=top;temp!=NULL;temp=temp->next)
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
            push();
            break;
        case 2:
            ele=pop();
            if(ele!=-1)
                 cout<<"Deleted node is: "<<ele<<endl;
            else
                cout<<"Underflow "<<endl;

            break;
        case 3:
            display();
            break;
        }
    }while(ch<=3);
}
