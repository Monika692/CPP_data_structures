// Q4. Sort the given index according to the starting and ending index and print in ascending or descending order using the choice 
#include <iostream>
using namespace std;
void bubblesort(int arr[],int s,int e,int ch)
{
    int temp=0;
    for(int i=s;i<e;i++)
    {
        for(int j=i+1;j<e;j++)
        {
            if(arr[i]>arr[j] && ch==1)
            {
              temp=arr[i];
              arr[i]=arr[j];       
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
        
    int s;
    cout<<"enter the starting index"<<endl;
    cin>>s;
    int e;
    cout<<"enter the ending index"<<endl;
    cin>>e;
    int ch;
    cout<<"enter choice"<<endl;
    cin>>ch;
    
    bubblesort(arr,s,e,ch);
}
