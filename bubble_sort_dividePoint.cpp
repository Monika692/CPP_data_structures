// Q3. Sort the question according to the divide point given 
#include <iostream>
using namespace std;
void bubblesort(int arr[],int di,int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j] && i<di)
            {
              temp=arr[i];
              arr[i]=arr[j];       
              arr[j]=temp;
            }
            else if(arr[i]<arr[j] && i>di)
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

    int di;
    cout<<"enter index to divide"<<endl;
    cin>>di;
    
    bubblesort(arr,di,n);
}
