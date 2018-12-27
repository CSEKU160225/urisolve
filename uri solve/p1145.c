#include<stdio.h>
int main()
{
    int a,b,i,e,f,d=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
    {
        d++;

        if(d==a)
        {
            printf("%d",i);
            printf("\n");
            d=0;
        }
        else
        {
            printf("%d ",i);
        }

    }
}
