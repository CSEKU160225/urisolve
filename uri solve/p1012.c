#include<stdio.h>
int main()
{

float a,b,c,tri,cir,tra,qua,ret;
double pi=3.14159;
scanf("%f %f %f",&a,&b,&c);
tri=.5*a*c;
cir=pi*c*c;
tra=((a+b)/2)*c;
qua=b*b;
ret=a*b;
printf("TRIANGULO: %.3f\n",tri);
printf("CIRCULO: %.3f\n",cir);
printf("TRAPEZIO: %.3f\n",tra);
printf("QUADRADO: %.3f\n",qua);
printf("RETANGULO: %.3f\n",ret);
}

