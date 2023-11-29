#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"enter array to be sorted"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    int min;
    for(int i=1;i<n;i++)
    {
        min=arr[i];
        int j=i-1;
        while(arr[j]>min && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=min;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i];
}
