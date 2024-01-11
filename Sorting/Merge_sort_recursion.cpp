/*merge sort with recursion */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    int arr2[n];

    int l=0,k=0;
    int h=n-1;
    int mid=(l+h)/2;
    int j=mid+1;

    cout<<"Enter First Half :"<<endl;
    for(int i=0;i<=mid;i++)
        cin>>arr[i];

    cout<<"Enter Second Half :"<<endl;
    for(int i=j;i<=h;i++)
        cin>>arr[i];


    while(i<=mid && j<=h)
        {
            if(arr[i]<arr[j])
                arr2[k++]=arr[i++];
            else
                arr2[k++]=arr[j++];
        }


        while(i<=mid)
            arr2[k++]=arr[i++];

        while(j<=h)
            arr2[k++]=arr[j++];

      for(int k=0;k<n;k++)
      cout<<" "<<arr2[k];
}
