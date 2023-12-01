#include<iostream>
using namespace std;
#define MAX 2
int queue[MAX];
int f=-1,r=-1;

void insert(int x)
{
    if(r==MAX-1)
    cout<<"overflow"<<endl;
    
    else 
    {
        if(f==-1)
            f=0;
        r++;
        queue[r]=x;
    }
}

void pop()
{
    if(f==-1) 
        cout<<"underflow"<<" "<<f<<endl;
    else
    {
        cout<<"the deleted element is :"<<queue[f]<<endl;
        f++;
        if(f>r)
            f=r=-1;
    }
}

void display()
{
    cout<<"Array elements are:"<<endl;
    for(int i=f;i<r;i++)
    cout<<queue[i]<<endl;
}

int main()
{
    int ch,ele;
    do{
        cout<<"enter 1 for push"<<endl;
        cout<<"enter 2 for pop"<<endl;
        cout<<"enter 3 for display"<<endl;
        cout<<endl;
        cout<<"enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1: 
            cout<<"enter value for queue ";
            cin>>ele;
            insert(ele);
            break;
            
            case 2:
            pop();
            break;
            
            case 3:
            display();
            break;
        }
    }
    while(ch<=3);
}
