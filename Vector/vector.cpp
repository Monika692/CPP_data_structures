#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int> v;
    int x;
    cout<<"enter the elements in array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>x;
        v.push_back(x);
    }

    cout<<"The simple iteration of the vector:"<<endl;
    for(int i=0;i<5;i++)
        cout<<v[i]<<endl;

    cout<<"using auto operations in vector the output is as follows:"<<endl;
    for(auto i:v)
        cout<<i<<endl;
}
