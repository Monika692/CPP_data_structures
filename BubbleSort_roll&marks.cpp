// Q5. Rollno and find the marks corresponding to it  
#include <iostream>
using namespace std;
void bubblesort(int rn[],int m[],int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if(m[i]>m[j] )
            {
              temp=m[i];
              m[i]=m[j];       
              m[j]=temp;
             
              temp=rn[i];
              rn[i]=rn[j];       
              rn[j]=temp;
            }
        }
        cout<<m[i]<<" "<<rn[i]<<endl;
    }
}

int main() 
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    
    int rn[n];
    cout<<"enter rollno"<<endl;
    for(int i=0;i<n;i++)
        cin>>rn[i];
        
    int m[n];
    cout<<"enter marks "<<endl;
    for(int i=0;i<n;i++)
      cin>>m[i];
    
    bubblesort(rn,m,n);
}


