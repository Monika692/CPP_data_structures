// Q1. structure with roll no and marks to be displayed 

#include<iostream>
using namespace std;
struct student{
    int rollno;
    float marks;
}s1;

int main()
{
    cout<<"enter your rollno";
    cin>>s1.rollno;
    cout<<"enter your marks";
    cin>>s1.marks;
  if(s1.marks>40)
  cout <<"rollno:" <<s1.rollno<<"pass"<< endl;
  else
  cout<<"rollno:" <<s1.rollno<<"fail"<<endl;
}
