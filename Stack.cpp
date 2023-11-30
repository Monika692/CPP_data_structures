#include <iostream>
#define MAX 5
using namespace std;
int stack[MAX];
int top=-1;

void push()
{
    if(top==MAX-1)
        cout<<"\nOverflow";
    else
    {
        top++;
        cout<<"Enter Value ";
        cin>>stack[top];
    }
}

int pop()
{
    int ele=0;
    if(top==-1)
        ele=-1;
    else
    {
        ele=stack[top];
        top--;
    }
    return ele;
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
        cout<<endl;
        cout<<"enter your choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                    push();
                    break;
            case 2:
                    ele=pop();
                    if(ele!=-1)
                        cout<<ele<<" is Deleted ";
                    break;
            case 3:
                    display();
                    break;
        }
    }while(ch<=3);
}
