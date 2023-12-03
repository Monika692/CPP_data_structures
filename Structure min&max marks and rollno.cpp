#include<iostream>
using namespace std;
struct student{
    int rollno;
    float marks;
}s1;

int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    student s1[n];
    cout<<"enter the rollno and marks";
    for(int i=0;i<n;i++)
    {
        cin>>s1[i].rollno;
        cin>>s1[i].marks;
    }
    
    int min=s1[0].marks;
    int max=s1[0].marks;
    int min_r=0,max_r=0;
    for(int i=0;i<n;i++)
    {
        if(s1[i].marks<min)
        {
            min=s1[i].marks;
            min_r=s1[i].rollno;
        }
              
        if(s1[i].marks>max)
        {
            max=s1[i].marks;
            max_r=s1[i].rollno;
        }
    }
       
    cout<<"min rollno is :"<<min<<endl;
    cout<<"maximum marks are :"<<max<<endl;
}

