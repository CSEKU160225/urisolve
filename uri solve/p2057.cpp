#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e=0,f,i,j;

    cin>>a>>b>>c;
    if(a==0)
    {
        a=24;
    }

    d=a+b+c;
    if(d<24)
    {
        cout<<d<<endl;
    }
    else if(d==24)
    {
        cout<<0<<endl;
    }
    else if(d>24)
    {
        f=d-24;
        cout<<f<<endl;
    }
}
