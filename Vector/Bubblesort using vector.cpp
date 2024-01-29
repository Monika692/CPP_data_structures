/*WAP to accept 20 numbers in a vector and sort the first 10 numbers in ascending order and next 10 numbers in descending order by
using bubble sort technique.Finally print the complete list of integers */
#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int>vec,int di,int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(vec[i]<vec[j] && i<=di)
            {
                temp=vec[i];
                vec[i]=vec[j];
                vec[j]=temp;
            }
            else if(vec[i]>vec[j] && i>di)
            {
                temp=vec[j];
                vec[j]=vec[i];
                vec[i]=temp;
            }
        }
        cout<<vec[i]<<" ";
    }
}

int main()
{
    vector<int>v;
    int d,n,x;
    cout<<"enter the size :"<<endl;
    cin>>n;

    cout<<"enter the elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }

    int di;
    cout<<"enter the point where you want to divide the array"<<endl;
    cin>>di;

    int p;
   // cin>>l;
    bubblesort(v,di,n);
}
