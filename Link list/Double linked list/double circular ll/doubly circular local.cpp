#include<iostream>
using namespace std;
typedef struct linkedlist{
    int val;
    struct linkedlist *prev;
    struct linkedlist *next;
}node;

node *temp=NULL;

node *istart(node *s,int x)
{
    temp=new linkedlist;
    if(temp==NULL)
    cout<<"linked list is empty !enter values "<<endl;
    else
    {
        temp->prev=NULL;
        temp->val=x;
        temp->next=NULL;
        if(s==NULL)
            s=temp;
        else{
                temp->next=s;
                s->prev=temp;
                s=temp;
            }
    }
    return s;
}
node *iend(node *e,int x)
{

    temp=new linkedlist;
    if(temp==NULL)
        cout<<"no element present at end of the linked list "<<endl;
    else
    {
        temp->prev=NULL;
        temp->val=x;
        temp->next=NULL;
        if(e==NULL)
            e=temp;
        else
        {
            temp->prev=e;
            e->next=temp;
            e=temp;
        }
    }
}
void insp(node *s,int x,int pos)
{
      node *temp1=NULL;
      node *temp2=NULL;
      int i=1;
      temp=s;
      while(i!=pos-1)
      {
          temp=temp->next;
          i++;
       }

       temp1=temp->next;
       temp2=new linkedlist;
       temp2->val=x;
       temp2->next=temp1;
       temp2->prev=temp;

       temp->next=temp2;
       temp1->prev=temp2;
}

void *dsp(node *s)
{
     node *temp1=NULL;
       node *temp2=NULL;
       int x;
       cout<<"enter element to be deleted "<<endl;
       cin>>x;
       temp=s;
       while(temp->val!=x)
       {
           temp1=temp;
           temp=temp->next;
       }
       cout<<"deleted specific node is :"<<temp->val<<endl;
       temp2=temp->next;
       temp1->next=temp2;
       temp2->prev=temp1;
       delete(temp);
}

node *dstart(node *s)
{
    if(s==NULL)
    cout<<"no elements in linked list "<<endl;
   else
   {
         temp=s;
         cout<<"the deleted element at start is :"<<temp->val<<endl;
         if(s==s->next)
            s=NULL;
         else
            s=s->next;

         delete(temp);
   }
   return s;
}

node *dend(node *e)
{
    if(e==NULL)
        cout<<"enter elements the linked list is empty"<<endl;
    else
    {
        temp=e;
        cout<<"the deleted node at end is :"<<temp->val<<endl;
         if(e==e->next)
            e=NULL;
         else
        e=e->prev;
        delete(temp);
    }
    return e;
}

void distart(node *s)
{
    temp=s;
     do{
       cout<<" "<<temp->val<<endl;
       temp=temp->next;
       }while(temp!=s);
}
void disend(node *e)
{
     temp=e;
    do{
        cout<<" "<<temp->val<<endl;
       temp=temp->prev;
    }while(temp!=e);
}

int main()
{
    node *start=NULL;
    node *end=NULL;
    int ch,ele,pos;
    do{

        cout<<"enter 1 for insert at start"<<endl;
        cout<<"enter 2 to insert at end "<<endl;
        cout<<"enter 3 to insert at specified position "<<endl;
        cout<<"enter 4 for deleting at specific  "<<endl;
        cout<<"enter 5 for deleting at start"<<endl;
        cout<<"enter 6 for deleting at end "<<endl;
        cout<<"enter 7 for display from start"<<endl;
        cout<<"enter 8 for display from end "<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
                cout<<"enter your value :"<<endl;
                cin>>ele;
                start=istart(start,ele);
                if(end==NULL)
                    end=start;
                else
                {
                    start->prev=end;
                    end->next=start;
                }
                break;
        case 2:
            cout<<"enter element to enter at end"<<endl;
             cin>>ele;
             end=iend(end,ele);
             if(start==NULL)
                start=end;
                else
                {
                end->next=start;
                start->prev=end;
                }
             break;
        case 3:
            cout<<"enter element to be inserted "<<endl;
            cin>>ele;
            cout<<"enter position at which you want to insert the value"<<endl;
            cin>>pos;
            insp(start,ele,pos);
            break;
        case 4:
            dsp(start);
            break;
        case 5:
            start=dstart(start);
            if(start==NULL)
                end=NULL;
            else
            {
                start->prev=end;
                end->next=start;
            }

            break;
        case 6:
            end=dend(end);
            if(end==NULL)
                start=NULL;
            else
            {
            start->prev=end;
            end->next=start;
            }
            break;
        case 7:
            distart(start);
            break;
        case 8:
            disend(end);
            break;
        }
    }while(ch<=8);
}
