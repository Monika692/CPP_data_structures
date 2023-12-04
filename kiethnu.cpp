#include<iostream>
using namespace std;
int main()
{
    int n;int k,sum=0,r=0;
    int a=-1,b=-1,c=-1;
    cout<<"enter number"<<endl;
    cin>>n;
    k=n;
    while(n!=0)
    {
        r=n%10;
        n/=10;
        if(c==-1)
        {
            c=r;
            continue;
        }
        if(b==-1)
        {
            b=r;
            continue;
        }
        if(a==-1)
        {
            a=r;
            continue;
        }
    }

    n=k;
    while(sum<n)
    {
        sum=a+b+c;
        cout<<sum<<endl;
        a=b;
        b=c;
        c=sum;
    }

    if(sum==n)
        cout<<"yes: ";
    else
        cout<<"no"<<sum;
}
