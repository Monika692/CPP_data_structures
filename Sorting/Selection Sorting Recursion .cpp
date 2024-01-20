#include<iostream>
using namespace std;

void Selectionsort(int arr[],int i,int n)
{
    if(i<n)
    {
        int min=arr[i];
        int pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(min>arr[j])
            {
                pos=j;
                min=arr[j];
            }
        }
            if(pos!=i)
            {
                arr[pos]=arr[i];
                arr[i]=min;
            }
        Selectionsort(arr,i+1,n);
    }
}

int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the elements in array"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    Selectionsort(arr,0,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
