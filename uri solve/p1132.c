#include<stdio.h>
int main()
{
    int a,b,i,d,c=0;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
         for(i=a;i<=b;i++)
    {
        if(i%13!=0)
        {
            d=i;
            c=d+c;

        }
    }
    printf("%d\n",c);
    }
    else
    {
             for(i=b;i<=a;i++)
    {
        if(i%13!=0)
        {
            d=i;
            c=d+c;

        }
    }
    printf("%d\n",c);
    }

}
