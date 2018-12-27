#include<stdio.h>
int main()
{

   float a,b,c,d,f,g,h;
    double e;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    f=(a-c);
    g=(b-d);
    h=(f*f)+(g*g);
    e=sqrt(h);
    printf("%.4lf\n",e);

}
