#include<stdio.h>

int main()
{

    int a,b,i,c,d=0,e=0;
    scanf("%d %d",&a,&b);
    while(b<=a)
    {
        scanf("%d",&b);
    }

    for(i=1;;i++)
    {
        c=a+i;
        e=c+e;
        d++;
        if((a+e)>b)
        {
            d=d+1;
            printf("%d\n",d);
            break;
        }
    }
}
