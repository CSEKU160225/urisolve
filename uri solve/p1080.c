#include<stdio.h>
int main()
{
    int a,i,b=0,c=0,v;
    for(i=1;i<=100;i++)
    {   c++;
        scanf("%d",&a);
        if(a>b)
        {
           b=a;
           v=c;
        }
    }
    printf("%d\n",b);
    printf("%d\n",v);

}
