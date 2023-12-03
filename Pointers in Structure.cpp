#include<iostream>
using namespace std;
struct student{
    int rollno;
    float marks;
}*s1;

int main()
{
    s1=new student;
    cout<<"enter rollno"<<endl;
    cin>>s1->rollno;
    cout<<"enter marks"<<endl;
    cin>>s1->marks;
    if(s1->marks>40)
    cout<<"pass"<<endl;
    else
    cout<<"fail"<<endl;
}
