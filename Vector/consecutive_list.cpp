/*WAP to check whether numbers in a vector can be rearranged so that each number appears exactly once in a consecutive list of number.
Return true otherwise false*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    bool b=true;

    cout<<"enter the size of"<<endl;
    cin>>n;

    int x;
    cout<<"enter the elements in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }

    for(int i=1;i<n;i++)
    {
      int dif=v[i]-v[i-1];
      if(dif!=1)
        b=false;
    }

    cout<<b;
}
