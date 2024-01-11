#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter size of first array";
    cin>>n;
    int arr1[n];
    cout<<"enter array 1:"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr1[i];

    cout<<"enter size of second array";
    cin>>m;
    int arr2[m];
    cout<<"enter array 2:"<<endl;
    for(int j=0;j<m;j++)
        cin>>arr2[j];

    int s=n+m;
    int ans[s];
    int i=0,j=0,k=0;

    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
            ans[k++]=arr1[i++];
        else
            ans[k++]=arr2[j++];
    }

    while(i<n)
        ans[k++]=arr1[i++];

    while(j<m)
        ans[k++]=arr2[j++];

   for(i=0;i<k;i++)
   cout<<" "<<ans[i];
}
