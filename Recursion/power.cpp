#include<iostream>
using namespace std;

void rec(int n,int i)
{
    if(i<=n)
        cout<<"the power of numbers are :"<< (i*i) <<endl;

    rec(n,i+1);
}

int main()
{
    int num,i;
    cout<<"enter number "<<endl;
    cin>>num;
    cout<<"enter iteration"<<endl;
    cin>>i;
    rec(num,i);
}
