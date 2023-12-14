#include<iostream>
using namespace std;
void recur(int n,float i)
{
    if(i<=n)
    {
        cout<<"the number are :"<<1.0+(i/i)<<endl;
        recur(n,i+1);
    }
}

int main()
{
   int num;
   float i;
   cout<<"enter numbers :"<<endl;
   cin>>num;
   cout<<"enter iterations :"<<endl;
   cin>>i;
   recur(num,i);
}
