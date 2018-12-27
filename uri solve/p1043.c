#include<stdio.h>
int main()
{

    float a,b,d,c,e,f,g,h;
    scanf("%f %f %f",&a,&b,&c);
   d=a+b;
   e=a+c;
   f=b+c;
   g=a+b+c;
   h=((a+b)/2)*c;
   if(d==c||e==b||f==a)
    printf("Area = %.1f\n",h);
    else
        printf("Perimetro = %.1f\n",g);
return 0;
}
