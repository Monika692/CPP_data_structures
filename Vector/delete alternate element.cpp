#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int x;
    cout<<"enter the elements in array :"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>x;
        v.push_back(x);
    }
     v.erase(v.begin()+1);
     v.erase(v.begin()+2);

    cout<<"the output is:"<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
}
