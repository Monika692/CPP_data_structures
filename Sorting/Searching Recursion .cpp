#include<iostream>
using namespace std;
void binarySearch(int arr[],int low,int high,int key)
{
    if(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==key)
            cout<<"No exist ";
        if(arr[mid]>key)
            binarySearch(arr,low,mid-1,key);
        else
            binarySearch(arr,mid+1,high,key);
    }
}

int main()
{
    int n,key;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter element to be searched"<<endl;
    cin>>key;

    int arr[n];
    cout<<"enter the elements in array";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    binarySearch(arr,0,n,key);

}
