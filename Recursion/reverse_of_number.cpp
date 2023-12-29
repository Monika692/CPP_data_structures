#include<iostream>
using namespace std;
void rec(int n)
{
    int i=0;
    while(n>0)
   {
        int digit=n%10;
        int n1=digit;
        cout<<n1<<" ";
        n=n/10;
        i++;
    }
    rec(n);
}
int main()
{
    int num;
    cout<<"enter number :"<<endl;
    cin>>num;
    rec(num);
}
