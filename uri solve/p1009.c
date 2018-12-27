#include<stdio.h>
int main()
{
char c;
double a,b,d,e;
scanf("%s %lf %lf",&c,&a,&b);

d=b*.15;
e=a+d;
printf("TOTAL = R$ %.2lf\n",e);
return 0;

}
