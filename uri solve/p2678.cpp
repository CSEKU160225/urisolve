#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool prime(int a)
{
    if(a==0||a==1) return false;
    if(a==2) return true;
    if(a%2==0) return false;
    for(int i=3;i<=sqrt(a);i=i+2)
    {
        if(a%i==0) return false;
    }
    return true;

}
bool super(int a)
{
    while(a>=10)
    {
        int b=a%10;
        a=a/10;
        if(!prime(b)) return false;

    }
    if(a==2||a==3||a==5||a==7) return true;
    else return false;
}
int main()
{
   int a;
   while(cin>>a)
   {
      if(!prime(a)) cout<<"Nada"<<endl;
      else if(super(a)) cout<<"Super"<<endl;
      else cout<<"Primo"<<endl;
   }

}
