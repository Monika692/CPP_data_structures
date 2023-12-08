#include<iostream>
using namespace std;
typedef struct linklist
{
  int val;
  struct linklist *next;
}node;

node *s=NULL;
node *e=NULL;
node *temp=NULL;

void is(int x)
{
    temp=new linklist;
    if(temp==NULL)
        cout<<"link list is empty"<<endl;
    else
    {
       temp->val=x;
       temp->next=NULL;

       if(s==NULL)
            s=e=temp;
       else
       {
        temp->next=s;
        s=temp;
       }
    }
}
void ie(int x)
{
    temp=new linklist;

    if(temp==NULL)
    cout<<"overflw"<<endl;
  else
  {
     temp->val=x;
     temp->next=NULL;
     if(e==NULL)
        s=e=temp;
     else
        {
        e->next=temp;
        e=temp;
        }
   }
}

void isp(int x,int pos)
{

}

void deletes()
{
    if(s==NULL)
        cout<<"no element in link list"<<endl;
    else
    {
        temp=s;
        cout<<"deleted node at start is :"<<s->val<<endl;
        s=s->next;
        delete(temp);
    }
}

void deletee()
{
    if(e==NULL)
        cout<<"no element in linked list"<<endl;
    else
    {
        temp=s;
        cout<<"delete node at end is  :"<<e->val<<endl;
        while(temp->next!=e)
            temp=temp->next;

        delete(e);
        e=temp;
        e->next=NULL;
    }
}

void deletesp()
{
    node *temp1=NULL;
    int x;
    cout<<"enter element to be deleted "<<endl;
    cin>>x;
    temp=s;
    while(temp->val!=x)
   {
      temp1=temp;
      temp=temp->next;
   }
   cout<<"the node deleted is :"<< temp->val<<endl;
   temp1->next=temp->next;
    delete(temp);
}

void display()
{
    temp=s;
   do{
    cout<<" "<<temp->val<<endl;
    temp=temp->next;
   }while(temp!=NULL);
}

int main()
{
    int ch,ele,pos;
    do{
        cout<<"enter 1 for insert at start"<<endl;
        cout<<"enter 2 for insert at end"<<endl;
        cout<<"enter 3 for insert at specific end"<<endl;
        cout<<"enter 4 for deleting at start"<<endl;
        cout<<"enter 5 for delete at end"<<endl;
        cout<<"enter 6 for deleting at specific end"<<endl;
        cout<<"enter 7 for display"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
             cout<<"enter element to enter at start"<<endl;
             cin>>ele;
             is(ele);
             break;
        case 2:
             cout<<"enter element to enter at end"<<endl;
             cin>>ele;
             ie(ele);
             break;
        case 3:
             cout<<"enter element to insert at certain position"<<endl;
             cin>>ele;
             cout<<"enter at which position you want to enter the element "<<endl;
             cin>>pos;
             isp(ele,pos);
             break;
        case 4:
              deletes();
             break;
        case 5:
            deletee();
             break;
        case 6:
             deletesp();
             break;
         case 7:
             display();
             break;
        }
    }while(ch<=7);

}
