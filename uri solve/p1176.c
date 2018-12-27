#include<stdio.h>
int main()
{
    int a,i,j;
    long long int f[100],e,b=0,c=0,d=1;
    scanf("%d",&a);
    f[0]=0;
    f[1]=1;
    for(i=2;i<=60;i++)
    {
        b=d+c;
        c=d;
        d=b;
       f[i]=b;
    }
    for(j=0;j<a;j++)
    {
        scanf("%d",&i);

        printf("Fib(%d) = %lld\n",i,f[i]);
    }
}
