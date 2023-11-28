// Q1. Bubble sortusing function with user given starting and ending index:
#include <iostream>
using namespace std;
void bubblesort(int arr[],int s,int e)
{
    int temp=0;
   for(int i=s;i<e;i++)
   {
       for(int j=i+1;j<e;j++)
       {
          if(arr[i]>arr[j])
            {
              temp=arr[i];
              arr[i]=arr[j];       
              arr[j]=temp;
            }
       }
   }
   for(int i=s;i<e;i++)
    cout<<arr[i];
}

int main() {
    
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int s,e;
    cout<<"enter starting index "<<endl;
    cin>>s;
    cout<<"enter ending index"<<endl;
    cin>>e;
   bubblesort(arr,s,e);
}
