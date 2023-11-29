#include <iostream>
using namespace std;

void selsort(int arr[],int n,int ch)
{
    int pos;
    int temp;
     for(int i=0;i<n;i++)
    {
        pos=i;
        for(int j=i+1;j<n;j++)
        {
           if(arr[pos]>arr[j] &&ch==1)
              pos=j;
           if(arr[j]>arr[pos] &&ch==2)
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


int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    
    cout<<"enter array"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    int ch;
    cout<<"enter your choice"<<endl;
    cin>>ch;
    
    selsort(arr,n,ch);
   
}
