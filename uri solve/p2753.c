#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="abcdefghijklmnopqrstuvwxyz";
    int a=97,b,c,d,i,j;
    for(i=0;i<27;i++)
    {
        cout<<a<<" "<<"e"<<" "<<s[i]<<endl;
        a++;
    }
}
