#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cout<<"enter the size "<<endl;
    cin>>n;
    int x;
    cout<<"enter the elements in an array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
     v.insert(v.begin()+5,85);
    v.pop_back();

    cout<<"output is :";
    for(auto it=v.begin();it!=v.end();it++)
        cout<<*it<<endl;
}
