#include<iostream>
using namespace std;

void InsertionSort(int arr[],int i,int n)
{
    if(i<n)
    {
       int min=arr[i];
       int j=i-1;
       while(arr[j]>min && j>=0)
       {
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=min;

       InsertionSort(arr,i+1,n);
    }
}

int main()
{
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    InsertionSort(arr,1,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
