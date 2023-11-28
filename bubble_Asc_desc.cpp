// Q2. Sorting the array in array and descending order with the help of user choice given
#include <iostream>
using namespace std;
void bubblesort(int arr[],int ch,int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i ]>arr[j] && ch==1)
            {
              temp=arr[i];
              arr[i]=arr[ j ];       
              arr[j]=temp;
            }
            if(arr[i]<arr[j] && ch==2)
            {
              temp=arr[i];
              arr[i]=arr[j];       
              arr[j]=temp;
            }
        }
        cout<<arr[i]<<"\t";
    }
}

int main() 
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int ch;
    cout<<"enter your choice"<<endl;
    cin>>ch;
    
    bubblesort(arr,ch,n);
}
