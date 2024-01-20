#include<iostream>
using namespace std;

void bubblesort(int arr[],int i,int n)
{
    if(i<n)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        bubblesort(arr,i+1,n);
    }
}

int main()
{
    int n,i;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the array elements :"<<endl;
    for(i=0;i<n;i++)
    cin>>arr[i];

    bubblesort(arr,0,n);
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";

}
