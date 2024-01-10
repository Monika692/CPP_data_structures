/*print the linked list in ascending order */
#include<iostream>
using namespace std;
typedef struct linkedlist
{
    int val;
    struct linkedlist *next;
}node;

node *s=NULL;
node *e=NULL;
node *temp=NULL;

void insert(int x)
{
    int i=1;
    temp=new linkedlist;
    if(temp==NULL)
        cout<<"the linked list is empty"<<endl;
    else
    {
        temp->val=x;
        temp->next=NULL;

        if(s==NULL)
            s=e=temp;
        else
        {
            if(temp->val<s->val)
            {
                temp->next=s;
                s=temp;
            }
            else if(temp->val>e->val)
            {
                e->next=temp;
                e=temp;
            }
            else
            {
                node *temp2=s;
                node *temp1=nullptr;
                while(x>temp2->val)
                {
                    temp1=temp2;
                    temp2=temp2->next;
                }
                temp1->next=temp;
                temp->next=temp2;
            }
        }
    }
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
   int ch,ele;
   do
   {
       cout<<"enter 1 to enter element in linked list"<<endl;
       cout<<"enter 2 for display"<<endl;
       cin>>ch;
       switch(ch)
       {
           case 1:
           cout<<"enter the elements in linked list "<<endl;
           cin>>ele;
           insert(ele);
           break;
           case 2:
            display();
            break;
       }
   }while(ch<=2);
}
