#include<iostream>
#define max 2
using namespace std;
int q[max][2];
int f=-1,r=-1;

void push(int x1,int x2)
{
    if(r==max-1)
        cout<<"overflow";
    else
    {
      if(f==-1)
      f=0;
       r++;
       q[r][0]=x1;
       q[r][1]=x2;
    }
}

void pop()
{
    if(f==-1)
        cout<<"underflow";
    else
    {
        cout<<"Deleted Student Record is "<<q[f][0]<<endl;
        f++;
    }
}

void display()
{
    for(int i=f;i>=r;i--)
    {
        cout<<endl<<q[i][0]<<" "<<q[i][1];
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
