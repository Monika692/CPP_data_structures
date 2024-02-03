#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>v;

  int n;
  cout<<"enter the size of array"<<endl;
  cin>>n;

  int x;
  cout<<"enter elements in array"<<endl;
  for(int i=0;i<n;i++)
  {
      cin>>x;
      v.push_back(x);
  }
  int i=0,count=-1;
  while(i<=n)
  {
      i=i+v[i];
      count++;
  }
  cout<<"Jumps taken are:"<<count<<" ";
}
