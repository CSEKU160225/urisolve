#include<stdio.h>
int main()
{
    int i;
   long long int a,b,d=1,c=1,j=0;
    while((scanf("%lld %lld",&a,&b))!=EOF)
    {
        for(i=1;i<=a;i++)
        {
            c=c*i;
        }
        for(i=1;i<=b;i++)
        {
            d=d*i;
        }
        j=c+d;
        printf("%lld\n",j);
        c=1;d=1;

    }
}
