// Q1. Find the difference of year and find the year and the corresponding gdp
// year= {1990,1991,1992,1993,1994....}
// gdp={220,440,660,865,293,239....}


#include <iostream>
using namespace std;
int main() 
{
    int y1;
    int y2;
    cout<<"enter first year "<<endl;
    cin>>y1;
    cout<<"enter second year "<<endl;
    cin>>y2;
    
    int dif=0;
    dif=y2-y1;
    
    cout<<"the difference is: "<<dif<<endl;
    int arr[dif+1];
    int gdp[dif+1];
    int initial_gdp=220;
    int gd=initial_gdp; 
    
    for(int i=0;i<dif;i++)
    {
        arr[i]=y1++;
        gdp[i]=gd;
        gd=gd+((gd*5)/100);
    
        cout<<arr[i]<<" "<<gdp[i]<<endl;
    }
    
    
}
