#include <iostream>
#define MAX 5
using namespace std;
int stack[MAX];
int top=-1;

void push(int t)
{
    if(t==MAX-1)
        cout<<"\nOverflow";
    else
    {
        t++;
        cout<<"Enter Value ";
        cin>>stack[t];
    }
    top=t;
}

void pop(int t)
{
    if(t==-1)
      cout<<"underflow";
    else
    {
        cout<<"deleted element is :"<<stack[t];
        t--;
    }
    top=t;
}

void display(int t)
{
    cout<<"array element "<<endl;
    for(int i=t;i>=0;i--)
        cout<<stack[i];
}


int main()
{
    int ch,ele;
    do{
        printf("\nEnter 1 for push ");
        printf("\nEnter 2 for pop ");
        printf("\nEnter 3 for display ");
        printf("\nEnter 4 for exit ");
        cout<<endl;
        cout<<"enter your choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                    push(top);
                    break;
            case 2:
                    pop(top);
                    break;
            case 3:
                    display(top);
                    break;
        }
    }while(ch<=3);
}
