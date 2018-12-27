#include<stdio.h>
int main()
{
int i,a;
double b,c,d,f,e;
scanf("%d",&a);
for(i=0;i<a;i++)
{
    scanf("%lf%lf%lf",&b,&c,&d);
    e=(b*2+c*3+d*5);
    f=e/10;
   printf("%.1f\n",f);
}

}
