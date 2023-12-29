#include<iostream>
using namespace std;
int sumodd=0,sumeven=0;
void rec(int n)
{
    if(n>0)
    {
        int digit=n%10;
        if(digit%2==0)
            sumeven+=digit;
        else
            sumodd+=digit;

        rec(n/10);
    }
}

int main()
{
    int num,i;
    cout<<"enter number :"<<endl;
    cin>>num;
    rec(num);
    cout<<"sum of even number is: "<<sumeven;
    cout<<"sum of odd number is : "<<sumodd;
}
