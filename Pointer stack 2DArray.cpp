
#include<iostream>
#define max 2
using namespace std;
int top=-1;
int s[max][2];

void push(int *t,int x1,int x2)
{
    if(*t==max-1)
    cout<<"overflow"<<endl;
    else
    {
        (*t)++;
        s[*t][0]=x1;
        s[*t][1]=x2;
    }
}


void pop(int *t)
{
    if(*t==-1)
     cout<<"underflow"<<endl;
     
    else
    {
        cout<<"Deleted rollno and marks are "<<s[*t][0] <<endl;
        (*t)--;
    }
}

void display(int t)
{
    for(int i=t;i>=0;i--)
    {
        cout<<"Elements are"<<s[i][0]<<" "<<s[i][1]<<endl;
    }
}

int main()
{
    int ch;
    int rno,mrks;
    do{
        cout<<"enter 1 for push"<<endl;
        cout<<"enter 2 for pop "<<endl;
        cout<<"enter 3 for display"<<endl;
        cin>>ch;
        
        switch(ch)
        {
            case 1:
                 cout<<"Enter Rollno & Marks ";
                    cin>>rno;
                    cin>>mrks;
                    push(&top,rno,mrks);
                    break;
            case 2:
                pop(&top);
                break;
            case 3:
                display(top);
                break;
        }
    }while(ch<=3);
}
