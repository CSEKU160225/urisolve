#include<stdio.h>
int main()
{
    int a,b,c,i;
    float d;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d%d",&b,&c);
         if(c==0)
        {
            printf("divisao impossivel\n");
        }
        else{
        d=(float)b/c;

        printf("%.1f\n",d);
    }
    }
}
