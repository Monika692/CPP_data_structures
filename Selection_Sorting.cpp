#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    int min;
    int pos;
    cout<<"enter array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        min=arr[i];
        pos=i;
        
        for(int j=i+1;j<n;j++)
        {
           if(min>arr[j])
           {
                pos=j;
                min=ar[j];
           }
        }
        if(pos!=i)
        {
            ar[pos]=ar[i];
            ar[i]=min;
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i];
}

