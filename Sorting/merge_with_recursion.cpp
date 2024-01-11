#include<iostream>
using namespace std;
void merge(int arr[],int low,int high)
{
    int arr2[high];
    int k=low;
    int mid=(low+high)/2;
    int i=low,j=mid+1;

    while(i<=mid && j<=high)
        {
            if(arr[i]<arr[j])
                arr2[k++]=arr[i++];
            else
                arr2[k++]=arr[j++];
        }


        while(i<=mid)
            arr2[k++]=arr[i++];

        while(j<=high)
            arr2[k++]=arr[j++];

      for(int k=low;k<=high;k++)
            arr[k]=arr2[k];
}

void mergesort(int ar[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(ar,low,mid);
        mergesort(ar,mid+1,high);
        merge(ar,low,high);
    }
}

int main()
{
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter Array :"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    mergesort(arr,0,n-1);

    for(int i=0;i<n;i++)
        cout<<arr[i];
}
