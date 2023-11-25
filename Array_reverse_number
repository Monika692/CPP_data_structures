#include <iostream>
using namespace std;
int prime(int n)
{
    int flag=0;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
            flag=1;
    }
    return flag;
}
int reverse(int n)
{
    int rev = 0;
    while(n>0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
}
int main()
{
    int n;
    cout<<"enter your array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(prime(arr[i])==0)
        {
            cout<<"prime are : "<<arr[i]<<endl;
        }
    }
    
    return 0;
}
