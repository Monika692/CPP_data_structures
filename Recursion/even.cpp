#include<iostream>
using namespace std;
void rec(int n,int i)
{
    if(i<=n)
    {
        if(i%2==0)
            cout<<"even numbers are :"<<i<<endl;

        rec(n,i+1);
    }
}

int main()
{
    int num;int i;
    cout<<"enter number "<<endl;
    cin>>num;
    cout<<"enter iteration to start with "<<endl;
    cin>>i;
    rec(num,i);
}
