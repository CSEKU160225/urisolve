#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d",&a);

        for(i=2;i<=a;i=i+2)
        {
            b=i*i;
            printf("%d^%d = %d\n",i,i,b);
        }

}
