. #include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"Enter your element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]; 
    }
    
    for(int j=0;j<3;j++)
    {
         int temp=arr[n-1];
         for(int i=n-1;i>0;i--)
         {
            arr[i]=arr[i-1];
         }
         arr[0]=temp;
    }
    
    cout<<"after shift :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
