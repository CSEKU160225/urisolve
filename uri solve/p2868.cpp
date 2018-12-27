#include<iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,i,k=0,l=0,m;
    char f,g,h,o='r';
   char str[10000];
    cin>>e;
   while(e--!=0)
   {


        cin>>a>>f>>b>>g>>c;
        if(f=='+')
        {
            k=a+b;
            if(c>k)
            {
                l=c-k;
            }
            else
            {
                l=k-c;
            }

           l=l-1;
           cout<<"E";
           for(i=0;i<l;i++)
           {
               str[i]=o;
               cout<<str[i];
           }
            cout<<"rou!"<<endl;
            k=0,l=0;

        }
        else if(f=='x')
        {
            k=a*b;
            if(c>k)
            {
                l=c-k;
            }
            else
            {
                l=k-c;
            }

           l=l-1;
           cout<<"E";
           for(i=0;i<l;i++)
           {
               str[i]=o;
               cout<<str[i];
           }
            cout<<"rou!"<<endl;
            k=0,l=0;

        }
        else if (f=='-')
        {
            k=a-b;
            if(c>k)
            {
                l=c-k;
            }
            else
            {
                l=k-c;
            }

           l=l-1;
           cout<<"E";
           for(i=0;i<l;i++)
           {
               str[i]=o;
               cout<<str[i];
           }
            cout<<"rou!"<<endl;
            k=0,l=0;

        }

    }



}
