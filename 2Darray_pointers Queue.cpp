#include<iostream>
#define max 2
using namespace std;
int q[max][2];
int f=-1,r=-1;
void insert(int *r,int *f,int x1,int x2)
{
    if(*r==max-1)
        cout<<"overflow"<<endl;
    else
    {
      if(*f==-1)
        (*f)=0;
       
       (*r)++;
       q[*r][0]=x1;
       q[*r][1]=x2;
    }
}

void del(int *f,int *r)
{
    if(*f==-1)
        cout<<"underflow"<<endl;
    else
    {
        cout<<"Deleted Student Record is "<<q[*f][0]<<endl;
        (*f)++;
        if((*f)>(*r))
        (*f)=(*r)=-1;
    }
}

void display(int f,int r)
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
                    insert(&r,&f,rno,mrks);
                    break;
            case 2:
                    del(&f,&r);
                    break;
            case 3:
                    display(f,r);
                    break;
        }
    }while(ch<=3);
}

