#include <iostream>
#include <math.h>
int prime(int);
int cirNumber(int);
using namespace std;
int prime(int n)
{
    int b=1;
    for(int i=2;i<n;i++)
    {
        if(n % i == 0)
            b=0;
    }
    return b;
}

int cirNumber(int n)
{
    int n1=n,c=0,d=0,cr=0;
    while(n>0)//123
    {
        n=n/10;//12
        c++;//digits count
    }

    d=n1%10;//3
    cr=d*((int)pow(10,c-1))+(n1/10);//3*(10,2)+12=312

    return cr;
}

int main()
{
    int n,org=0,c=0;
    cin >> n;
    org=n;

    do{
        if(prime(n)==1)
            n=cirNumber(n);
        else
            c=1;
    }while(n!=org);


    if(c==0)
        cout<<"Number is Circular Prime ";
    else
        cout<<"Number is not Circular  Prime ";
    return 0;
}
