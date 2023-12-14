#include<iostream>
using namespace std;
void recur(int n,int i)
{
    if(i<=n)
    {
        cout<<"the numbers are :"<<i<<endl;
        i++;
    }
    recur(n,i);
}

int main()
{
    int num;int i;
    cout<<"enter number :"<<endl;
    cin>>num;
    cout<<"enter the iteration to start with :"<<endl;
    cin>>i;
    recur(num,i);
}
