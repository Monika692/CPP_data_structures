// Stack using array elements, PUSH,POP,EXIT,DISPLAY.

#include <iostream>
#define MAX 5
using namespace std;
int stack[MAX];
int top=-1;

void push(int x)
{
    if(top==MAX-1)
    cout<<"\nOverflow";
    else
    {
        top++;
        stack[top]=x;
    }
}

void pop()
{
    if(top==-1)
    cout<<"underflow";
    else
    {
        cout<<"Deleted Element is "<<stack[top]<<endl;
        top--;
    }
}

void display()
{
    cout<<"array element "<<endl;
    for(int i=top;i>=0;i--)
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
        cin>>ch;
        switch(ch)
        {
            case 1:
                    cout<<"Enter Value for Stack ";
                    cin>>ele;
                    push(ele);
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
