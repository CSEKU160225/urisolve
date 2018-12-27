#include<stdio.h>
int main()
{
    int a,b=1,c,d,i;
    scanf("%d",&a);
    if(a>0 && a<13)
    {
        for(i=1;i<=a;i++)
        {
            c=b;
            b=b*i;

        }
        printf("%d\n",b);
    }
}
