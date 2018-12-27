#include<stdio.h>
int main()
{
    int a;
    int b,c,d,e,f,g,h;

    scanf("%d",&a);
    printf("%d\n",a);
    b=a/100;
    c=100*b;
    d=a-c;
    printf("%d nota(s) de R$ 100,00\n",b);
     e=d/50;
    c=50*e;
    f=d-c;
   printf("%d nota(s) de R$ 50,00\n",e);
    g=f/20;
    c=20*g;
    f=f-c;
  printf("%d nota(s) de R$ 20,00\n",g);
      h=f/10;
    c=10*h;
    f=f-c;
printf("%d nota(s) de R$ 10,00\n",h);
      h=f/5;
    c=5*h;
    f=f-c;
    printf("%d nota(s) de R$ 5,00\n",h);
        h=f/2;
    c=2*h;
    f=f-c;
    printf("%d nota(s) de R$ 2,00\n",h);
        h=f/1;
    c=1*h;
    f=f-c;
    printf("%d nota(s) de R$ 1,00\n",h);
    return 0;

}
