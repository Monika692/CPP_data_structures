// binary search in without function in  c++

#include <iostream>
using namespace std;
int main() 
{
      int n;
      cout<<"enter size"<<endl;
      cin>>n;
      int arr[n];
      cout<<"enter an array"<<endl;
      for(int i=0;i<n;i++)
        cin>>arr[i];
      
      int s;
      cout<<"enter element to be searched"<<endl;
      cin>>s;
      int mid=0;
      int l=0;
      int h=n-1;
    int f=0;
    while(l<h)
    {
        mid=(l+h)/2;
        if(arr[mid]==s)
           { 
            cout<<"found:"<<arr[mid];
            f=1;
            break;
           }
        else if(arr[mid]>s)
            h=mid-1;
        else
            l=mid+1;
    }
    
    if(f==0)
    cout<<"element not found"<<endl;
}

