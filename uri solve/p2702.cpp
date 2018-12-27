#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h=0,i=0,j=0,k=0;
    cin>>a>>b>>c;
    cin>>d>>e>>f;
  h=d-a;
  if(h<0)
  {
      h=0;
  }
  i=e-b;
  if(i<0) i=0;
  j=f-c;
  if(j<0) j=0;

    k=h+i+j;
    cout<<k<<endl;
}
