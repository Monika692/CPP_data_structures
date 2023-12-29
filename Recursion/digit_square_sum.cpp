#include<iostream>
using namespace std;
int sum=0;
int sq;
void rec(int n)
{
    if(n>0)
    {
      int digit=n%10;
      sq=(digit*digit);
      sum+=sq;
        rec(n/10);
    }
}

int main()
{
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    rec(num);
    if(sum>9)
         cout<<"the sum of digit is: "<<sum;
    else
        cout<<"sum is a single digit number";
}
