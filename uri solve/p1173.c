
#include<stdio.h>
int main()
{

int a[10],b,c,i,j,d=0;
scanf("%d",&b);
if(b<50)
{
    for(i=0;i<10;i++)
    {

        d=d+b;
        a[i]=d;
        printf("N[%d] = %d\n",i,a[i]);
        b=d;
    }
}


}
