#include<iostream>
using namespace std;
struct queue {
int val;
struct queue *next;
};

struct queue *f=NULL;
struct queue *r=NULL;
struct queue *temp=NULL;

void insert()
{
    int x;
    temp=new queue;
    if(temp==NULL)
        cout<<"overflow";
    else
    {
        cout<<"enter value :";
        cin>>x;
        temp->val=x;
        temp->next=NULL;
        if(f==NULL)
            f=r=temp;
        else{
            r->next=temp;
            r=temp;
        }
    }
}

int dequeue()
{
    int x=-1;
    if(f==NULL)
        cout<<"underflow"<<endl;
    else
    {
        temp=f;
        x=f->val;
        f=f->next;
        delete (temp);
    }

    return x;
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
    cout<<"enter 1 for insert"<<endl;
    cout<<"enter 2 for dequeue"<<endl;
    cout<<"enter 3 for display"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        insert();
        break;
    case 2:
        ele=dequeue();
        if(ele!=-1)
            cout<<"deleted element is : "<<ele<<endl;
        break;
    case 3:
        display();
        break;
    }
    }while(ch<=3);
}
