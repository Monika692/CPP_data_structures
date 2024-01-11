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

      for(int k=0;k<=high;k++)
      cout<<" "<<arr2[k];
}
int main()
{
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;

    int mid=(0+(n-1))/2;
    int j=mid+1;
    int arr[n];


    cout<<"Enter First Half :"<<endl;
    for(int i=0;i<=mid;i++)
        cin>>arr[i];

    cout<<"Enter Second Half :"<<endl;
    for(int i=j;i<n;i++)
        cin>>arr[i];

    merge(arr,0,n-1);
}
