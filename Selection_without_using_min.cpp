#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    int temp;
    int pos;
    
    cout<<"enter array"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    for(int i=0;i<n;i++)
    {
        pos=i;
        for(int j=i+1;j<n;j++)
        {
           if(arr[pos]>arr[j])
              pos=j;
        }
        if(pos!=i)
        {
            temp=arr[pos];
            arr[pos]=arr[i];
            arr[i]=temp;
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i];
}
