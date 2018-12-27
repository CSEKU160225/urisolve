#include<stdio.h>
int main()
{

    int a,i,count=0;
    for(a=1;a<=6;a++)
    {
        scanf("%d",&a);
    }
    for(a=1;a<=6;a++)
    {
        if(a%2==0)
    {
        count++;
    }

    }
    printf("%d valor(es) par(es)",count);
}
