#include<stdio.h>
int main()
{
int a,b,e,f;
float c,d,g,h,i;
scanf("%d %d %f",&a,&b,&c);
scanf("%d %d %f",&e,&f,&g);
d=b*c;
h=f*g;
i=d+h;
printf("VALOR A PAGAR: R$ %.2f\n",i);
}
