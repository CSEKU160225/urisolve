#include<stdio.h>
int main()
{
    int a,b,c=0,i,d=0;

    while(1){
    scanf("%d%d",&a,&b);
     if(a<=0||b<=0)
    {
        break;
    }
   else if(a>b )
    {
        c=0;
       for(i=b;i<=a;i++)
    {
        printf("%d ",i);
        c=c+i;
    }
    printf("Sum=%d\n",c);

    }

    else if(a<b)
    {
        d=0;
       for(i=a;i<=b;i++)
    {
        printf("%d ",i);
        d=d+i;
    }
    printf("Sum=%d\n",d);

    }




    }

}
