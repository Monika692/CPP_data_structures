#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>v;
    string x;
    cout<<"enter the string :";
    cin>>x;
    v.push_back(x);

    for(int i=0;i<v.size();i++)
    {
        if(!v[i].empty())
         v[i][0]=toupper(v[i][0]);
    }

    for(int i=0;i<v.size();i++)
    {
    cout<<v[i]<<" ";
    }
}
