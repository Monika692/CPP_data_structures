#include<bits/stdc++.h>
using namespace std;
/*bool perfectSquare(int n)
{

    cout<<"Value of p "<<p<<endl;
    if(p*p==n)
        return true;
    else
        return false;
}*/
int sa(int arr[],int n)
{
    int sum,count=0;
    for(int i=0;i<n;i++)
    {
    for(int k=0;k<n;k++)
    {
        sum=0;
        for(int j=i;j<=k;j++)
        {
            sum+=arr[j];
        }
        cout<<endl;
        int p=(int)sqrt(sum);
        if((p*p)==sum && sum!=0)
        {
            cout<<sum<<"\t";
            count++;
        }
      }
    }
   cout<<"the count is :"<<count<<endl;
}
int main()
{
     int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sa(arr,n);
}
