#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {

        if(a%i==0)
        {
            printf("%d\n",i);
        }
    }
}
