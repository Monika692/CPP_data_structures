// binary search wiht function included

#include<iostream>
using namespace std;

int bs(int yr[],int year,int size)
{
   int mid=0;
   int low=0;
   int h=size-1;
   int f=0;
   int pos;
   while(low<h)
   {
       mid=(low+h)/2;
       if(low<h)
       {
           cout<<"found:  "<<yr[mid];
           pos=mid;
           break;
       }
       else if(yr[mid]>year)
         h=mid-1;
       else
         low=mid+1;
   }
   return pos;
}

int main()
{
    int n;
    int year,y;
    cout<<"enter size";
    cin>>n;
     cout<<"enter initial year"<<endl;
    cin>>y;
    cout<<"enter year to be searched"<<endl;
    cin>>year;
    int gdp[n];
    int gd=220;
    int arr[n];
     
    for(int i=0;i<n;i++)
    {
        arr[i]=y++;
        gdp[i]=gd;
        gd=gd+((gd*5)/100);
        cout<<arr[i]<<" "<<gdp[i]<<endl;
    }
    int binary=bs(arr,year,n);
    cout<< " "<<gdp[binary];
}
