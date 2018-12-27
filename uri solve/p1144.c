#include<stdio.h>
int main()
{

    int a,b,c,d,e,i,k=0;
    scanf("%d",&a);
    b=a*2;
    for(i=1;i<=b;i++)
    {
        k++;
        c=i;
        d=c*i;
        e=d*i;
        printf("%d %d %d\n",c,d,e);
        printf("%d %d %d\n",c,d+1,e+1);
        if(a==k)
        {
            break;
        }
    }
}
