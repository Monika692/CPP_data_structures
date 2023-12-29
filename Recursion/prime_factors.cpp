#include<iostream>
using namespace std;

int isprime(int n)
{
    int c=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            c=0;
    }
    return c;
}

void recursion(int n,int i)
{
    if(i<=n)
    {
        if(n%i==0 && isprime(i)==1)
            cout<<"the prime factor of number is "<<i<<endl;

        recursion(n,i+1);
    }
}
int main()
{
    int num,i;
    cout<<"enter number :"<<endl;
    cin>>num;
    recursion(num,1);
}
