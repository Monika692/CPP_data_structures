#include<iostream>
using namespace std;
#define MAX 2
int queue[MAX];

int enque(int f,int r,int x)
{
    if(r==MAX-1)
        cout<<"overflow"<<endl;
    else 
    {
        r++;
        queue[r]=x;
    }
   f=r-1;
    return f;
}

int deque(int f,int r)
{
    if(f==-1) 
        cout<<"underflow"<<" "<<f<<endl;
    else
    {
        cout<<"the deleted element is :"<<queue[f]<<endl;
        f++;
    }
    return f;
}

void display(int f,int r)
{
    cout<<"Array elements are:"<<endl;
    for(int i=f;i<r;i++)
    cout<<queue[i]<<endl;
}

int main()
{
    int ch,ele;
    int front=-1;
    int rear=-1;
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
            rear=enque(front,rear,ele);
            if(front==-1)
                front=rear;
                
            break;
            
            case 2:
            front=deque(front,rear);
            if(front>rear)
                front=rear=-1;
                
            break;
            
            case 3:
            display(front,rear);
            break;
        }
    }
    while(ch<=3);
}
