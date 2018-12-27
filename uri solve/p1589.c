#include<stdio.h>
int main()
{
    int a,b,c,d=0,i;
    scanf("%d",&a);
    if(a<=10000)
    {
        for(i=0;i<a;i++)
        {
            scanf("%d%d",&b,&c);
            d=b+c;
            printf("%d\n",d);
        }

    }
}
