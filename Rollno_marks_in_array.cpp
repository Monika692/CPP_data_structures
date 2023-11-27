#include <iostream>
using namespace std;
int main()
{
    int n;
    int count1=0;
    int count2=0;
    cout<<"enter size of array"<<endl;
    cin >> n;
    int rollno[n], marks[n];
    cout<<"enter roll no"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> rollno[i];
        cin>>marks[i];
    }
    int search;
    cout<<"enter rollno to be searched "<<endl;
    cin>>search;
    for(int i=0;i<n;i++)
      { 
          if(i==search)
        {
              cout<<"marks are"<<marks[i]<<endl;
              count1=1;
        }
      }
      for(int i=0;i<n;i++)
        if(marks[i]==search-1)
        cout<<"marks are"<<marks[i]<<endl;
       }
    
}
