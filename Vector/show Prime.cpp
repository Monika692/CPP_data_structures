#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int>v;
   int n;
   cout<<"Enter the size :"<<endl;
   cin>>n;

   int x,c;
   cout<<"Enter the elements in array:"<<endl;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       v.push_back(x);
   }

   for(int i=0;i<n;i++)
   {
       x=v[i];
       c=0;
       for(int j=2;j<x;j++)
            if(x%j==0)
                c=1;

        if(c==0)
            cout<<x<<endl;

   }
}
