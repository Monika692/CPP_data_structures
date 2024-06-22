#include<iostream>
using namespace std;
#define MKSTR(x) #x;


//the # operator causes a string replacement -text token to be converted to a string surrounded by quotes .

int main()
{
 cout<<MKSTR(Hello C++ )<<endl;
  return 0;
}
