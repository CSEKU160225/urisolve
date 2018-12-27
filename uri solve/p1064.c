#include<stdio.h>
int main()
{
    int i,c=0,a;
    float b,d,g;
    for(i=0;i<6;i++)
    {
        scanf("%f",&b);
        if(b>0)
        {
            c++;
            d=d+b;
        }

    }
    g=d/c;
printf("%d valores positivos\n",c);
printf("%.1f\n",g);
}

