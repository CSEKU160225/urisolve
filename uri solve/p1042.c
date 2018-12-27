#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d",&a,&b,&c);
    d=(a<b)?a:b;
    e=(c<d)?c:d;
if(a==e)
{
    if(b<c)
        printf("%d\n%d\n%d\n",e,b,c);
        else
            printf("%d\n%d\n%d\n",e,c,b);
}
else if(b==e)
{
   if(a<c)
        printf("%d\n%d\n%d\n",e,a,c) ;
        else
            printf("%d\n%d\n%d\n",e,c,a) ;
}
else if(c==e)
{
   if(a<b)
        printf("%d\n%d\n%d\n",e,a,b) ;

        else
        printf("%d\n%d\n%d\n",e,b,a);
}
   printf("\n%d\n%d\n%d\n",a,b,c);
   return 0;
}
