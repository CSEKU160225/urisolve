#include<stdio.h>
int main()
{
    int a,b,c,d=0,i,j;
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        scanf("%d%d",&a,&b);
        if(a<b)
        {
            a++;
            b--;
            for(j=a;j<=b;j++)
            {

                if(j%2!=0)
                {
                    d=d+j;
                }
                else if(j==b)
                {
                    continue;
                }
            }
            printf("%d\n",d);
            d=0;
        }

 else if(a>b)
        {
            a--;
            b++;
            for(j=b;j<=a;j++)
            {

                if(j%2!=0)
                {
                    d=d+j;
                }
                else if(j==b)
                {
                    continue;
                }
            }
            printf("%d\n",d);
            d=0;
        }
        else if(a==b)
        {
            d=0;
            printf("%d\n",d);
        }

    }

}
