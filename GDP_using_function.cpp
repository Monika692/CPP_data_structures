#using functions
#include <iostream>
using namespace std;

int searchgdp(int yr[],int yrr,int size)
{
    int pos=-1;
    for(int i=0;i<size;i++)
    {
        if(yr[i]==yrr)
            pos=i;
    }
    return pos;
}


void searchyear(int gdp[],int gd,int yr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(gdp[i]==gd)
      cout<<"year is"<<yr[i];
    }
}

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
    int year;
    cin>>year;
    
    for(int i=0;i<dif;i++)
    {
        arr[i]=y1++;
        gdp[i]=gd;
        gd=gd+((gd*5)/100);
    }
    
    
    int ind=searchgdp(arr,year,dif);
    cout<<"Found Gdp "<<gdp[ind];
    searchyear(gdp,gd,arr,dif+1);
    
}
