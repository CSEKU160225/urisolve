#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int main()
{
    int a,b,c,i,j,count=0,e;
    float d=0.0;

    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d%d",&b,&c);
        if(b>=1&&c<=100)
        {
            d=log10(b);

           e=d*c;
           count=e+1;

        }



        printf("%d\n",count);
        count=0;
        d=0;
        e=0;

    }
}
