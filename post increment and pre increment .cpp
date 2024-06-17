#include<iostream>
using namespace std;
int main()
{
  int i=1;
  int j=2;
  int k;
  //1 //2 //1  //2   //3    //4
  k=i + j+ i++ + j++ + ++i + ++j;
  //answer of  k should be :13
  cout<<i<<" "<<j<<" "<<k<<endl;
  //3 4  13
}
