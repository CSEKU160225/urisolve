#include<stdio.h>
int main()
{
    int a,i,c,d=0,e=0,f=0,g;
    char b;
    float m,n,o;
    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        scanf("%d %c",&c,&b);

        if(b=='C')
        {
            d=d+c;
        }
        else if(b=='R')
        {
            e=e+c;
        }
        else if(b=='S')
        {
            f=f+c;
        }
        g=d+e+f;
    }
    printf("Total: %d cobaias\n",g);
    printf("Total de coelhos: %d\n",d);
    printf("Total de ratos: %d\n",e);
     printf("Total de sapos: %d\n",f);
     float k,l,z,x;
     k=d;l=e;z=f;
n=((k*100)/g);
m=(l*100)/g;
o=(z*100)/g;
printf("Percentual de coelhos: %.2f %%\n",n);
printf("Percentual de ratos: %.2f %%\n",m);
printf("Percentual de sapos: %.2f %%\n",o);

}
