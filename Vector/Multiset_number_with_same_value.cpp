#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>m;
    m.insert(10);
    m.insert(30);
    m.insert(20);
    m.insert(10);
    cout<<m.count(10)<<endl;
    cout<<"After removal of 10"<<endl;
    m.erase(10);
    for(auto i:m)
    {
    cout<<" "<<i;
    }
}
