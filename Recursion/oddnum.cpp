#include<iostream>
using namespace std;
void rec(int n,int i)
{
    if(i<=n)
    {
        if(i%2 != 0)
            cout<<"odd numbers are :"<<i<<endl;

        rec(n,i+1);
    }
}

int main()
{
   int num;
   int i;
   cout<<"enter numbers:"<<endl;
   cin>>num;
   cout<<"enter the number to be iterated with:"<<endl;
   cin>>i;
   rec(num,i);
}
