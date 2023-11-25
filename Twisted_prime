# twisted prime 
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
  cout << "enter a number " << endl;
     cin >> n;
     if(prime(n)==0 && prime(reverse(n))==0)
         cout<<"No is Twisted Prime ";
     else    
         cout<<"No is not Twisted ";
    
    return 0;
 }
