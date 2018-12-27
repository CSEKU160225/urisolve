#include<stdio.h>
int main()
{
    int a,b=0,c=1,d=0,i;
    scanf("%d",&a);
    if(a>0&&a<46)
    {
         for(i=1;i<=a;i++)
    {
        if(i==a)
        {
            printf("%d\n",d);
            break;
        }
        printf("%d ",d);
        d=b+c;
        c=b;
        b=d;

    }

    }


}
