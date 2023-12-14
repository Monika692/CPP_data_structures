#include<iostream>
using namespace std;
void fibonacci(int n,int i, int b)
{
    int sum=i+b;
    if(sum<=n)
    {
        cout<<sum<<" ";
        fibonacci(n,b,sum);
    }
}

int main()
{
    int num,i;
   cout<<"enter number to start with"<<endl;
   cin>>num;
   cout<<"enter iteration"<<endl;
   cin>>i;
   cout<<"0 1 \t";
   fibonacci(num,0,1);
}
