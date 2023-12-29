#include<iostream>
using namespace std;
int count=0;
void rec(int n)
{
    if(n>0)
    {
        n=n/10;
        count++;
        rec(n/10);
    }
}
int main()
{
    int num;
    int i;
    cout<<"enter number :"<<endl;
    cin>>num;
    rec(num);
    cout<<count;
}
