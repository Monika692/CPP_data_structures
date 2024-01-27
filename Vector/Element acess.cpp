#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cout<<"enter the size :"<<endl;
    cin>>n;

    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }

    v.resize(3);

    cout<<"the output is :"<<endl;
    for(auto i:v)
        cout<<i<<endl;
}
