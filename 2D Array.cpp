#include<iostream>
#define max 2
using namespace std;
int top=-1;
int s[max][2];

void push(int x1,int x2)
{
    if(top==max-1)
        cout<<"overflow";
    else
    {
        top++;
        s[top][0]=x1;
        s[top][1]=x2;
    }
}

void pop()
{
    if(top==-1)
        cout<<"underflow";
    else
    {
        cout<<"Deleted Student Record is "<<s[top][0];
        top--;
    }
}

void display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<endl<<s[i][0]<<" "<<s[i][1];
    }
}

int main()
{
    int ch,rno,mrks;
    do{
        cout<<"Enter 1 for push"<<endl;
        cout<<"Enter 2 for pop"<<endl;
        cout<<"Enter 3 for display"<<endl;
        cin>>ch;
        
        switch(ch)
        {
            case 1:
                    cout<<"Enter Rollno & Marks ";
                    cin>>rno;
                    cin>>mrks;
                    push(rno,mrks);
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

