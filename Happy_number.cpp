#include<iostream>
using namespace std;
int main()
{  
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    
    int sum=0;
    int square=0;
    
    do
    {
        sum=0;
        for(;n>0;n=n/10)
        {
            int digit=n%10;
            square=digit*digit;
            sum+=square;
        }
        n=sum;
    }while(n>9);
    
    if(n==1)
        printf("Number is Happy Number ");
    else
        printf("Number is Not Happy  ");
}
